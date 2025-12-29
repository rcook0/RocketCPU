#!/usr/bin/env bash
set -euo pipefail
./scripts/verilate_noc.sh
./scripts/verilate_fair.sh
./scripts/verilate_soc_round.sh
./scripts/verilate_sweep.sh
