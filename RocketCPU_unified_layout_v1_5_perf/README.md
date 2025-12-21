# RocketCPU — v1.5 (Perf sweep + full SoC round-trip)
Deliverables:
- Full SoC round-trip TB (`yc_soc_roundtrip_tb.sv`) with SPAD responder wired inside `yc_soc_top_full.sv`.
- Skid-depth throughput sweep TB (`yc_skid_sweep_tb.sv`): runs SKID_DEPTH={1,2,4}, prints accepted counts after 1000 cycles.
- Fairness TB remains (`yc_router_fair_tb.sv`). Lint targets included.

Commands:
- ./scripts/verilate_fair.sh
- ./scripts/verilate_soc_round.sh
- ./scripts/verilate_sweep.sh
- make lint
