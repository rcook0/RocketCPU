# RocketCPU — unified bundle (v1.6)

This is a **simulation-first** integration tree:
- Custom RTL: `rtl/` (NoC, routers, SoC glue)
- Testbenches: `tb/`
- Verilator scripts: `scripts/`
- SPAD64 UAPI + example: `chiplets/spad64/`, `examples/`
- Chisel core generation scaffolding: `chisel/`, `scripts/gen_cores.sh`
- Spec alignment: `docs/SOC_SPEC.md`

## Quick sim
```bash
chmod +x scripts/verilate_all.sh
scripts/verilate_all.sh
```

## Core generation (Rocket/BOOM)
See `docs/GENERATION.md`.
