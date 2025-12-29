# Core generation workflow (Chisel → FIRRTL → Verilog)

## 1) Get the generator sources
We keep generator repos out of the main tree; clone them into:
- `third_party/rocket-chip` (Rocket + TileLink + infrastructure)
- optional: `third_party/boom` if you want a separate BOOM checkout (often vendored)

Example:
```bash
mkdir -p third_party
git clone --recursive https://github.com/chipsalliance/rocket-chip third_party/rocket-chip
```

## 2) Install toolchain
- JDK 11+ (javac)
- Scala + sbt
- Verilator

## 3) Put the config where sbt can see it
This repo provides `chisel/YourCorpConfig.scala` as the canonical config.
You have two options:
1) Copy/symlink it into the rocket-chip config package location, or
2) Maintain a small fork/overlay inside your rocket-chip checkout that includes `package yourcorp`.

## 4) Run generation
```bash
chmod +x scripts/gen_cores.sh
scripts/gen_cores.sh
```
Outputs land in `generated/`.

## 5) Simulate
Use Verilator on the generated top, or integrate generated tiles into `rtl/soc/` and reuse existing testbenches.
