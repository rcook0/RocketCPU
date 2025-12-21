#!/usr/bin/env bash
set -euo pipefail
verilator -sv --binary --top-module yc_skid_sweep_tb   -f files_sweep.f   --timescale 1ns/1ps   -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-UNSIGNED
./obj_dir/Vyc_skid_sweep_tb
