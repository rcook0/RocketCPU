#!/usr/bin/env bash
set -euo pipefail
verilator -sv --binary --top-module yc_soc_roundtrip_tb   -f files_soc_round.f   --timescale 1ns/1ps   -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-UNSIGNED
./obj_dir/Vyc_soc_roundtrip_tb
