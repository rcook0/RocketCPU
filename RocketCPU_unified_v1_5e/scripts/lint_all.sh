#!/usr/bin/env bash
set -euo pipefail
verilator -sv --lint-only -f files_noc.f
verilator -sv --lint-only -f files_fair.f
verilator -sv --lint-only -f files_soc_round.f
verilator -sv --lint-only -f files_sweep.f
