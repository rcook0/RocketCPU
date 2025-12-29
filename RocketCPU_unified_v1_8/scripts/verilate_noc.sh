#!/usr/bin/env bash
set -euo pipefail
verilator -sv -DNO_DUMP --binary -f files_noc.f --top-module yc_noc_router_tb \
  --timescale 1ns/1ps -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-UNSIGNED
./obj_dir/Vyc_noc_router_tb
