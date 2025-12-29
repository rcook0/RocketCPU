#!/usr/bin/env python3
"""validate_spec.py

Local-first spec governance for RocketCPU.
- Loads spec/rocketcpu_spec.yaml
- Validates repo artifacts (config.json, headers, optional DTS/cmdline) against HARD/SOFT constraints.

Exit codes:
- 0: OK (no HARD failures)
- 2: HARD failures present
"""

from __future__ import annotations
import json, re, sys
from pathlib import Path
import yaml

ROOT = Path(__file__).resolve().parents[1]

def load_spec() -> dict:
    p = ROOT / "spec" / "rocketcpu_spec.yaml"
    if not p.exists():
        print(f"[HARD] missing spec file: {p}")
        sys.exit(2)
    return yaml.safe_load(p.read_text())

def hard(msg: str, failures: list[str]):
    failures.append(msg)
    print(f"[HARD] {msg}")

def soft(msg: str, warnings: list[str]):
    warnings.append(msg)
    print(f"[SOFT] {msg}")

def ok(msg: str):
    print(f"[ OK ] {msg}")

def read_json(path: Path) -> dict | None:
    if not path.exists():
        return None
    return json.loads(path.read_text())

def find_files(patterns: list[str]) -> list[Path]:
    out = []
    for pat in patterns:
        out.extend(ROOT.rglob(pat))
    # de-dup
    uniq = []
    seen=set()
    for p in out:
        rp = p.resolve()
        if rp not in seen:
            seen.add(rp)
            uniq.append(p)
    return uniq

def parse_memmap_from_cmdline(s: str):
    # matches memmap=nn[KMG]$0xADDR or memmap=nn[KMG]@0xADDR
    mm = []
    for m in re.finditer(r"\bmemmap=([0-9]+)([KMG])[@$](0x[0-9a-fA-F]+)", s):
        size = int(m.group(1))
        unit = m.group(2)
        addr = int(m.group(3), 16)
        scale = {"K":1024, "M":1024**2, "G":1024**3}[unit]
        mm.append((size*scale, addr, m.group(0)))
    return mm

def parse_reg_pairs_from_dts(text: str):
    # naive: look for "reg = <0xBASE 0xSIZE ...>" (32-bit cells) or "reg = <0xBASE 0x0 0xSIZE 0x0>" (64-bit)
    regs=[]
    for m in re.finditer(r"\breg\s*=\s*<([^>]+)>", text):
        toks = [t for t in re.split(r"\s+", m.group(1).strip()) if t]
        # keep only hex-ish tokens
        hexes=[]
        for t in toks:
            if t.startswith("0x") or re.fullmatch(r"[0-9a-fA-F]+", t):
                hexes.append(int(t, 16) if t.startswith("0x") else int(t,16))
        # interpret as pairs
        if len(hexes) >= 2:
            # take the first base/size pair (best-effort)
            base = hexes[0]
            size = hexes[1]
            regs.append((base,size,m.group(0)[:80]+"..."))
    return regs

def main():
    spec = load_spec()
    failures=[]
    warnings=[]

    # --- ISA (HARD) ---
    isa = (spec.get("isa") or {}).get("profile")
    if isa != "RV64GC":
        hard(f"ISA profile expected RV64GC, found {isa}", failures)
    else:
        ok("ISA profile RV64GC")

    # --- Core config.json (HARD + SOFT) ---
    cfg = read_json(ROOT / "chiplets" / "rocket-boom" / "config.json")
    if not cfg:
        hard("missing chiplets/rocket-boom/config.json", failures)
    else:
        dvfs = spec.get("dvfs", {})
        if cfg.get("dvfs_max_mhz") != dvfs.get("max_mhz"):
            hard(f"dvfs_max_mhz mismatch: config.json={cfg.get('dvfs_max_mhz')} spec={dvfs.get('max_mhz')}", failures)
        if cfg.get("dvfs_step_mhz") != dvfs.get("step_mhz"):
            hard(f"dvfs_step_mhz mismatch: config.json={cfg.get('dvfs_step_mhz')} spec={dvfs.get('step_mhz')}", failures)

        cache = spec.get("cache", {})
        if bool(cache.get("global_l4_present")):
            hard("spec says global_l4_present=true but RocketCPU v1_6 ground truth removed global L4", failures)
        else:
            ok("Global L4 disabled (expected)")

        l3 = cache.get("per_chiplet_l3_mib", {})
        if cfg.get("l3_rocket_mib") != l3.get("rocket_chiplet"):
            hard(f"L3 rocket mismatch: config.json={cfg.get('l3_rocket_mib')} MiB spec={l3.get('rocket_chiplet')} MiB", failures)
        if cfg.get("l3_boom_mib") != l3.get("boom_chiplet"):
            hard(f"L3 boom mismatch: config.json={cfg.get('l3_boom_mib')} MiB spec={l3.get('boom_chiplet')} MiB", failures)

        # SOFT ranges for core counts
        chip = spec.get("chiplets", {})
        rc = chip.get("rocket_chiplet", {})
        bc = chip.get("boom_chiplet", {})
        rcount = cfg.get("rocket_cores")
        bcount = cfg.get("boom_cores")
        if rcount is not None and rc.get("soft"):
            if not (rc.get("min_cores", rcount) <= rcount <= rc.get("max_cores", rcount)):
                soft(f"rocket_cores={rcount} outside suggested range [{rc.get('min_cores')},{rc.get('max_cores')}]", warnings)
            else:
                ok(f"rocket_cores={rcount} within suggested range")
        if bcount is not None and bc.get("soft"):
            if not (bc.get("min_cores", bcount) <= bcount <= bc.get("max_cores", bcount)):
                soft(f"boom_cores={bcount} outside suggested range [{bc.get('min_cores')},{bc.get('max_cores')}]", warnings)
            else:
                ok(f"boom_cores={bcount} within suggested range")

    # --- SPAD UAPI (HARD) ---
    spad_uapi = ROOT / "chiplets" / "spad64" / "yourcorp_spad_uapi.h"
    if not spad_uapi.exists():
        hard("missing SPAD UAPI header: chiplets/spad64/yourcorp_spad_uapi.h", failures)
    else:
        ok("SPAD UAPI header present")

    # --- Optional DTS checks (best-effort) ---
    dts_files = find_files(["*.dts", "*.dtsi"])
    if dts_files:
        # check PCIe presence if spec requires
        pcie = spec.get("pcie", {}).get("primary", {})
        if pcie.get("hard"):
            found_pcie = False
            for p in dts_files:
                t = p.read_text(errors="ignore")
                if re.search(r"\bpcie\b", t, re.IGNORECASE):
                    found_pcie = True
                    break
            if not found_pcie:
                hard("spec requires PCIe but no 'pcie' string found in any DTS", failures)
            else:
                ok("DTS contains PCIe nodes (string match)")

        # check SPAD size mentions (only if a spad node exists)
        spad_sz_mib = (spec.get("spad64") or {}).get("size_mib")
        for p in dts_files:
            t = p.read_text(errors="ignore")
            if re.search(r"spad", t, re.IGNORECASE):
                regs = parse_reg_pairs_from_dts(t)
                # if any reg size close to spad size, accept
                want = spad_sz_mib * 1024 * 1024
                if any(abs(size - want) < (0.02*want) for _,size,_ in regs):  # 2% tolerance
                    ok(f"SPAD region size ~{spad_sz_mib} MiB appears in {p.as_posix()}")
                else:
                    soft(f"Found SPAD-like node in {p.as_posix()} but couldn't confirm size ~{spad_sz_mib} MiB from reg cells", warnings)
    else:
        soft("No DTS/DTSI files found; skipping DTS validation", warnings)

    # --- Optional cmdline memmap checks ---
    cmd_files = find_files(["*cmdline*.txt", "*CMDLINE*.txt", "*.cmdline"])
    if cmd_files:
        want = (spec.get("spad64") or {}).get("size_mib") * 1024 * 1024
        any_mm=False
        for p in cmd_files:
            s = p.read_text(errors="ignore")
            mm = parse_memmap_from_cmdline(s)
            if mm:
                any_mm=True
                if any(abs(sz - want) < (0.02*want) for sz,addr,_ in mm):
                    ok(f"cmdline memmap contains ~SPAD size reservation in {p.as_posix()}")
        if not any_mm:
            soft("cmdline files present but no memmap= entries detected", warnings)
    else:
        soft("No cmdline memmap files found; skipping cmdline validation", warnings)

    # Summary
    print("")
    print("=== Summary ===")
    print(f"HARD failures: {len(failures)}")
    print(f"SOFT warnings: {len(warnings)}")

    if failures:
        sys.exit(2)
    sys.exit(0)

if __name__ == "__main__":
    main()
