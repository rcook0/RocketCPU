# RocketCPU — v1.5e (Unified, fairness-fixed, Verilator 5.02 compatible)
- Fair, starvation-free RR arbiter (5.02-safe).
- Router ingress ready gated to grant; arbiter frozen while busy.
- Fairness TB default arm; scripts/Makefile aligned.

## Quickstart
```bash
sudo apt-get update && sudo DEBIAN_FRONTEND=noninteractive   apt-get install -y build-essential verilator iverilog gtkwave make
unzip RocketCPU_unified_v1_5e.zip && cd RocketCPU_unified_v1_5e
make all
```
