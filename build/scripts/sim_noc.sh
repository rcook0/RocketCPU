#!/bin/sh
# sim_noc.sh — run NoC directed testbench with Verilator

set -e
ROOT=$(dirname "$0")/../..
RTL=$ROOT/chiplets/noc/rtl
TB=$ROOT/chiplets/noc/tb

OUT=$ROOT/build/noc_sim
mkdir -p $OUT

verilator -sv -cc -exe -build \
  -Wno-fatal \
  -o $OUT/sim_noc \
  $RTL/yc_noc_defs.sv \
  $RTL/yc_router_skel.sv \
  $RTL/yc_niu_skel.sv \
  $TB/yc_noc_router_tb.sv

echo "Running NoC testbench..."
$OUT/sim_noc
