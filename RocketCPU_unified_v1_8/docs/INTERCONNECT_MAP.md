# RocketCPU Inter-chiplet Interconnect Map (Option C snapshot)

This is a **spec-facing** map of the links between chiplets and off-chip I/O.
Bandwidth numbers are **per direction** unless stated otherwise.

## Link summary

### Chiplet-to-chiplet (D2D / UCIe-class)
- **Type:** UCIe-style die-to-die coherent link (logical)
- **Width:** x32 lanes (bidirectional)
- **Encoding:** assumed 128b/130b (similar efficiency to PCIe) unless PHY specifies otherwise
- **Line rate:** TBD by PHY; typical ranges are 16–32 GT/s per lane
- **Effective payload bandwidth (rule-of-thumb):**
  - 16 GT/s: ~1.969 GB/s per lane → **~63.0 GB/s** @ x32
  - 32 GT/s: ~3.938 GB/s per lane → **~126.0 GB/s** @ x32
- **Coherency:** enabled for chiplets #1/#2 to shared fabric; optional for #4 GPU attach; chiplet #3 SPAD defaults non-coherent

**Primary use:**
- #1 Rocket ↔ #2 BOOM coherent memory traffic / cacheable transactions
- #4 GPU coherent attach (optional)
- credit-based flow control, CRC + replay at link layer

### Off-chip PCIe
#### Primary port
- **Type:** PCI Express
- **Gen/width:** **Gen4 x16** (primary)
- **Line rate:** 16 GT/s per lane
- **Encoding:** 128b/130b
- **Effective payload bandwidth:** ~1.969 GB/s per lane → **~31.5 GB/s** per direction

#### Secondary ports
- **Type:** PCI Express
- **Gen/width:** **Gen3 x4** (1–2 ports)
- **Line rate:** 8 GT/s per lane
- **Encoding:** 128b/130b
- **Effective payload bandwidth:** ~0.985 GB/s per lane → **~3.94 GB/s** per direction per port

## Logical topology (Option C)

- **Chiplet #1 (Rocket)** ↔ **UCIe x32** ↔ **Chiplet #2 (BOOM)**
- **Chiplet #1/#2** ↔ **UCIe x32** ↔ **Chiplet #4 (GPU)** (future; coherent attach)
- **Chiplet #3 (SPAD64 + ASIC space)** attaches via D2D, typically **non-coherent** (DMA/doorbells)
- Root-complex ownership:
  - CPU complex: RC for PCIe ports
  - GPU chiplet: may have its **own RC** to local **HBM** and expose windows to CPU via UCIe

## Bit widths at the NoC boundary

Inside chiplets we use a **NoC flit abstraction**:
- **Flit payload:** 32 bits (current RTL skeleton)
- **Flit total width:** `FLIT_W` from `rtl/noc/yc_noc_defs.sv` (includes VC/op/len/src/dst + payload)
- **Upgrade path:** payload can widen (64/128/256) without changing the validation philosophy; it will change the router datapath.

## Notes
- Actual delivered PCIe bandwidth depends on TLP overhead, MPS/MRRS, and implementation quality.
- Actual UCIe-class bandwidth depends on PHY choice and package/channel constraints.
