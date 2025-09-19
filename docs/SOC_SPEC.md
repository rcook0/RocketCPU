
# YourCorp SoC — Topology & Interconnect Specification (Option A)

## 0. Overview
- **ISA:** RV64GC (Rocket + BOOM)
- **Process:** 16 nm, target core clocks up to **2.4 GHz**, fabric **1.3–1.5 GHz**
- **Chiplets:**
  1) **#1 Rocket**: 16 cores (4× big @2.4 GHz, 12× small @1.2 GHz), **L3 = 16 MiB** banked
  2) **#2 BOOM**: 6 cores (3× big @2.3–2.4 GHz, 3× small @1.2 GHz), **L3 = 24 MiB** banked
  3) **#3 SPAD64 ASIC**: 64 MiB non‑coherent scratchpad (32×2 MiB), DMA engines, optional light accel
  4) **#4 GPGPU**: coherent attach via UCIe; owns HBM; CPU can BAR‑map apertures (non‑coherent by default)

> No global L4. Each CPU chiplet has a **shared L3** (inclusive of L2) acting as snoop filter + directory.
> Memory‑centric Chiplet #3 provides a **non‑coherent** SPAD window (BAR) + DMA.

---

## 1. On‑die Mesh (per CPU chiplet)
- **Topology:** 4×4 mesh (#1), 2×3 mesh (#2)
- **Link width:** **256‑bit** data (64‑B line = 4 beats) + sideband
- **Clock:** 1.3–1.5 GHz; **2–3 pipeline stages per hop**
- **Routers:** XY routing, **3 Virtual Channels**: VC0=req, VC1=resp, VC2=snoop
- **Buffers (min):** 16 flits ingress / 8 flits egress per VC
- **Coherence:** MOESI‑like, **inclusive L3**; directory sharded per L3 bank
- **Target latency:** L3 bank hit ≤ **12–18 core cycles**

**Header (first flit MSBs):**
```
opcode(6) | vc(2) | src(8) | dst(8) | txn(12) | addr(48) | len(4) | qos(2) | last(1) | poison(1) | data_hi(164)
```
(See `chiplets/noc/rtl/yc_noc_defs.sv` for pack/unpack helpers.)

---

## 2. Chiplet‑to‑Chiplet (UCIe) Links
- **Width:** **x32 lanes** baseline (upgradeable to x64)
- **Lane rate:** target 16–24 Gb/s
- **Flits:** 256‑b payload + header/CRC; **credit‑based** per VC; **ACK/NACK + replay**
- **Virtual channels:** VC0=req, VC1=resp, VC2=snoop (option VC3=isoc stream)
- **Throughput (usable):** x32@20 Gb/s ⇒ ~**55–65 GB/s** /dir after overheads
- **Latency:** PHY+adapters one‑way **~20–35 ns**; remote L3 miss round‑trip **~80–120 ns**

**Protocol mapping (CXL.cache‑like):**
- Requests: Read, Write, Upgrade, Probe/Invalidate
- Responses: DataResp, Ack/Nack
- Ordering: per‑address strongly ordered; global relaxed (barriers obeyed)

---

## 3. Home Mapping & Directory
- **No global L4.** Homes are L3 banks on chiplets #1/#2; IO/DRAM homes at IO hub.
- **Hash (example):** `home = XOR(PA[21:18], PA[17:14])`
  - Upper bit of `home` chooses chiplet, remaining bits select bank on that chiplet.
  - Evenly spreads lines; tweak bit slices if bank counts change.
- **Snoop filtering:** L3 tags serve as snoop filters; no separate filter slice.

---

## 4. SPAD64 (Chiplet #3) Integration
- **Window:** **64 MiB** at `0x7000_0000_0000` … `+0x0400_0000` (example)
- **Banks:** 32 × **2 MiB**; ≥1R/1W per bank
- **Coherency:** **non‑coherent** by default; optional small coherent aperture if needed
- **DMA MMIO:** `0x7000_1000_0000` … `+0x0010_0000` (queues, doorbells, status)
- **Driver:** `yourcorp_spad` (char + mmap + ioctl); UAPI in `yourcorp_spad_uapi.h`
- **Fences:** SW must flush/invalidate CPU caches around SPAD usage when mapped cacheable

(Artifacts in `chiplets/spad64/` and `yourcorp_spad64_bundle.zip` earlier; DTS fragment `yourcorp-spad64.dtsi`.)

---

## 5. GPGPU (Chiplet #4)
- **Attach:** UCIe coherent; appears as requester + responder on the fabric
- **Memory:** owns HBM channels; CPU maps BAR apertures (non‑coherent by default)
- **Queues:** shared doorbells in a coherent window; bulk buffers in HBM/SPAD

---

## 6. QoS, Flow Control, and Errors
- **QoS:** 2‑bit field maps to VC priorities; default **Snoop > Resp > Req**
- **Credits:** per‑VC credit pools; watermark‑based backpressure at initiators
- **CRC & Poison:** CRC on every flit; replay on error; poison bit propagates to consumers
- **RAS:** link error counters, retrain hooks, error inject and capture (see regs below)

---

## 7. DVFS & Clocking
- **Core DVFS:** 200 MHz steps from **2.4 GHz** ceiling via OpenSBI vendor ext **YCFR (0x7C595246)**
- **Fabric clock:** independent DVFS island; CDC FIFOs at tile/L3 and UCIe endpoints
- **Boot policy:** clamp LITTLE cores to **1.2 GHz** (step=6), BIG at 2.4 GHz, kernel scales via cpufreq

---

## 8. Minimal Interconnect Manager Registers (MMIO)
- `LINK_STATUS[n]`      — up, retrain, error counters
- `VC_CREDITS[n][vc]`   — free/total credits
- `QOS_CTL`             — priority, isoc enable
- `HOME_HASH_CTL`       — hash select/seed
- `ERR_INJECT`          — CRC flip, drop, stall
- `PERF_CNTRS`          — flits/bytes per VC, avg latency

---

## 9. Validation Plan (high level)
- **Link layer:** PRBS31, BER, eye margin; CRC/replay tests; retrain under stress
- **Coherence:** cross‑chiplet ping‑pong, snoop storms, LR/SC contention litmus
- **Performance:** STREAM‑like microbenchmarks; miss latency histograms
- **Power:** DVFS sweeps; idle link substates; CDC robustness

---

## 10. File Pointers
- **NoC RTL + TB:** `chiplets/noc/rtl/*.sv`, `chiplets/noc/tb/*.sv`
- **SPAD64:** `chiplets/spad64/` (+ `yourcorp_spad64_bundle.zip` if provided earlier)
- **ISA Sheet:** `docs/RV64GC_ISA_Reference.pdf`
- **Build:** `build/` (Kconfig/Makefile/scripts)

---

## 11. Frozen Parameters (Rev A)
- Mesh link width: **256‑b**
- VCs: **3** (Req/Resp/Snoop)
- Flit payload: **256‑b**
- UCIe width: **x32** lanes baseline
- L3 sizes: **16 MiB** (Rocket), **24 MiB** (BOOM)
- SPAD64: **64 MiB** (32×2 MiB)
- DVFS step: **200 MHz** from **2.4 GHz** max
