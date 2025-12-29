#!/bin/sh
# Generate Rocket/BOOM Verilog from Chisel config (requires sbt + scala + JDK).
set -e
if ! command -v sbt >/dev/null 2>&1; then
  echo "ERROR: sbt not found. Install sbt + scala first."
  exit 1
fi

ROOT=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
OUT="$ROOT/generated"
mkdir -p "$OUT"

# Expect a checked-out rocket-chip workspace at $ROOT/third_party/rocket-chip
RC="$ROOT/third_party/rocket-chip"
if [ ! -d "$RC" ]; then
  echo "ERROR: missing third_party/rocket-chip. Clone it (see docs/GENERATION.md)."
  exit 1
fi

echo "[GEN] Using rocket-chip at $RC"
cd "$RC/generators/rocket-chip"
sbt "runMain freechips.rocketchip.system.Generator --target-dir $OUT --top-module YourCorpSoC --config yourcorp.YourCorpConfig"
echo "[GEN] Done. Output in $OUT"
