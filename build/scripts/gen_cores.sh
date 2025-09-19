#!/bin/sh
# gen_cores.sh — generate Rocket/BOOM Verilog from Chisel configs

set -e

# Ensure dependencies (Scala, sbt)
if ! command -v sbt >/dev/null 2>&1; then
  echo "ERROR: sbt not found. Install sbt + scala first."
  exit 1
fi

ROOT=$(dirname "$0")/../..
OUT=$ROOT/generated
mkdir -p $OUT

echo "[GEN] Running RocketChip/BOOM generator..."
cd $ROOT/chiplets/rocket-boom

# Run Chisel elaboration with our config
sbt "runMain freechips.rocketchip.system.Generator \  --target-dir $OUT \  --top-module YourCorpSoC \  --config yourcorp.YourCorpConfig"

echo "[GEN] Verilog emitted under $OUT"
