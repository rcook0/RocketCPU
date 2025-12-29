#!/usr/bin/env bash
set -euo pipefail
verilator -sv -DNO_DUMP --binary -f files_fair.f --top-module yc_router_fair_tb \
  --timescale 1ns/1ps -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-UNSIGNED
./obj_dir/Vyc_router_fair_tb
