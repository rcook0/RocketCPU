#!/usr/bin/env bash
set -euo pipefail
verilator -sv -DNO_DUMP --binary --top-module yc_router_fair_tb   -f files_fair.f   --timescale 1ns/1ps   -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-UNSIGNED
./obj_dir/Vyc_router_fair_tb
