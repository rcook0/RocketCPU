# RocketCPU — Architecture Specification (Aligned Snapshot)

This repo is a **generator-driven RISC-V SoC platform**: Rocket/BOOM cores are produced via **Chisel → FIRRTL → (System)Verilog**,
then integrated with custom RTL blocks (NoC, SPAD64) and Linux bring-up artifacts (DTS/UAPI/tests).

## ISA
- **RV64GC** (I,M,A,F,D,C), Linux-capable (M/S/U)

## Chiplets (Option A)
1. **Chiplet #1 (Rocket cluster)**: up to 16 Rocket (mix BIG/LITTLE), shared inclusive L3 (example 16 MiB)
2. **Chiplet #2 (BOOM cluster)**: up to 6–8 BOOM (mix BIG/LITTLE), shared inclusive L3 (example 24 MiB)
3. **Chiplet #3 (SPAD64 + ASIC space)**: 64 MiB scratchpad, DMA, ~1/3 reserved for app-specific blocks
4. **Chiplet #4 (GPGPU)**: future; coherent attach over UCIe, owns HBM

## Interconnect
- **On-chip NoC**: 2D mesh, 256-bit flits, 3 VCs (req/resp/snoop), credit-based backpressure
- **Chiplet links**: UCIe-style, CRC + replay, coherent semantics for #1/#2/#4, non-coherent default for SPAD

## DVFS
- Rated ceiling **2.4 GHz**, firmware/kernel steps down in **200 MHz** increments.

## What’s in this bundle today
- **SystemVerilog NoC + routers + NIU(s)**: `rtl/noc/`
- **SoC integration placeholder**: `rtl/soc/yc_soc_top_full.sv` (wires routers + endpoints for roundtrip TB)
- **SPAD64 UAPI + example userspace**: `chiplets/spad64/`, `examples/`
- **Chisel config + generation scripts**: `chisel/`, `scripts/gen_cores.sh`
- **Simulation scripts**: `scripts/verilate_*.sh` and `chiplets/noc/Makefile`
- **CI**: `.github/workflows/ci.yml`
