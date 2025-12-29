#!/usr/bin/env bash
set -euo pipefail
verilator -sv -DNO_DUMP --binary -f files_sweep.f --top-module yc_skid_sweep_tb \
  --timescale 1ns/1ps -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-UNSIGNED
./obj_dir/Vyc_skid_sweep_tb
