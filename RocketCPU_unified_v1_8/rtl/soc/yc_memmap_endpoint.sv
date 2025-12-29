timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;

module yc_memmap_endpoint #(
  parameter int X_ID = 1,
  parameter int Y_ID = 0,
  parameter int RESP_DELAY = 2,
  parameter int DRAM_BYTES = 65536,  // 64 KiB functional model
  parameter int SPAD_BYTES = 16384   // 16 KiB functional model (proxy for SPAD64)
)(
  input  logic clk,
  input  logic rst_n,

  input  logic  rx_valid,
  input  flit_t rx_flit,
  output logic  rx_ready,

  output logic  tx_valid,
  output flit_t tx_flit,
  input  logic  tx_ready
);

  // Payload convention for bring-up:
  //   pay[31:16] = addr16
  //   pay[15:0]  = data16 (writes) / returned data16 (reads)
  //
  // Memory map (16-bit address space for this functional model):
  //   0x0000 - 0x7FFF  : DRAM
  //   0x8000 - 0x8FFF  : SPAD proxy
  //   0xF000 - 0xF0FF  : MMIO (ID @ F000, SCRATCH @ F004, IRQTRIG @ F008)
  localparam int DRAM_BASE = 16'h0000;
  localparam int DRAM_END  = 16'h7FFF;
  localparam int SPAD_BASE = 16'h8000;
  localparam int SPAD_END  = 16'h8FFF;
  localparam int MMIO_BASE = 16'hF000;
  localparam int MMIO_END  = 16'hF0FF;

  byte dram [0:DRAM_BYTES-1];
  byte spad [0:SPAD_BYTES-1];

  logic [31:0] mmio_id;
  logic [31:0] mmio_scratch;
  logic [31:0] mmio_irqtrig;

  typedef enum logic [1:0] {IDLE, WAITD, SEND} state_t;
  state_t st;
  logic [7:0] dly;
  logic [XW-1:0] src_x;
  logic [YW-1:0] src_y;
  logic [15:0] addr;
  logic [15:0] rdata16;

  function automatic byte rd_byte(input int base, input int end_, input int size, ref byte mem[], input int unsigned a);
    if (a < size) return mem[a];
    else return 8'h00;
  endfunction

  task automatic wr_byte(ref byte mem[], input int size, input int unsigned a, input byte v);
    if (a < size) mem[a] = v;
  endtask

  function automatic logic [15:0] mmio_read16(input logic [15:0] a);
    unique case (a)
      16'hF000: return mmio_id[15:0];
      16'hF002: return mmio_id[31:16];
      16'hF004: return mmio_scratch[15:0];
      16'hF006: return mmio_scratch[31:16];
      16'hF008: return mmio_irqtrig[15:0];
      16'hF00A: return mmio_irqtrig[31:16];
      default:  return 16'h0000;
    endcase
  endfunction

  task automatic mmio_write16(input logic [15:0] a, input logic [15:0] v);
    unique case (a)
      16'hF004: mmio_scratch[15:0]  <= v;
      16'hF006: mmio_scratch[31:16] <= v;
      16'hF008: mmio_irqtrig[15:0]  <= v;
      16'hF00A: mmio_irqtrig[31:16] <= v;
      default: /*ignore*/;
    endcase
  endtask

  // Ready only when idle (single outstanding for clarity)
  assign rx_ready = (st == IDLE);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      st <= IDLE;
      dly <= '0;
      tx_valid <= 1'b0;
      tx_flit <= '0;
      src_x <= '0;
      src_y <= '0;
      addr <= '0;
      rdata16 <= '0;
      mmio_id <= 32'h524F434B;       // 'ROCK' (just a signature)
      mmio_scratch <= 32'h00000000;
      mmio_irqtrig <= 32'h00000000;
      // optional: init memories to 0
      // (leave as X for speed in big sims; here we clear a small model)
      integer i;
      for (i=0;i<DRAM_BYTES;i++) dram[i] = 8'h00;
      for (i=0;i<SPAD_BYTES;i++) spad[i] = 8'h00;
    end else begin
      unique case (st)
        IDLE: begin
          tx_valid <= 1'b0;
          if (rx_valid &&
              (get_dst_x(rx_flit) == X_ID[XW-1:0]) &&
              (get_dst_y(rx_flit) == Y_ID[YW-1:0])) begin

            src_x <= get_src_x(rx_flit);
            src_y <= get_src_y(rx_flit);
            addr  <= get_pay(rx_flit)[31:16];

            if (get_opc(rx_flit) == OP_WRITE) begin
              // writes are posted (no response)
              logic [15:0] wdata16;
              wdata16 = get_pay(rx_flit)[15:0];

              if (addr >= DRAM_BASE && addr <= DRAM_END) begin
                int unsigned off = addr - DRAM_BASE;
                // store as little-endian 16-bit
                wr_byte(dram, DRAM_BYTES, off+0, wdata16[7:0]);
                wr_byte(dram, DRAM_BYTES, off+1, wdata16[15:8]);
              end else if (addr >= SPAD_BASE && addr <= SPAD_END) begin
                int unsigned off = addr - SPAD_BASE;
                wr_byte(spad, SPAD_BYTES, off+0, wdata16[7:0]);
                wr_byte(spad, SPAD_BYTES, off+1, wdata16[15:8]);
              end else if (addr >= MMIO_BASE && addr <= MMIO_END) begin
                mmio_write16(addr, wdata16);
              end
              // remain idle
            end else if (get_opc(rx_flit) == OP_READ_REQ) begin
              // compute read data now; return later after RESP_DELAY
              if (addr >= DRAM_BASE && addr <= DRAM_END) begin
                int unsigned off = addr - DRAM_BASE;
                byte b0 = dram[off+0];
                byte b1 = dram[off+1];
                rdata16 <= {b1, b0};
              end else if (addr >= SPAD_BASE && addr <= SPAD_END) begin
                int unsigned off = addr - SPAD_BASE;
                byte b0 = spad[off+0];
                byte b1 = spad[off+1];
                rdata16 <= {b1, b0};
              end else if (addr >= MMIO_BASE && addr <= MMIO_END) begin
                rdata16 <= mmio_read16(addr);
              end else begin
                rdata16 <= 16'hDEAD;
              end

              dly <= 8'd0;
              st <= WAITD;
            end
          end
        end

        WAITD: begin
          dly <= dly + 8'd1;
          if (dly >= RESP_DELAY[7:0]) begin
            tx_flit <= build_flit(VC_RESP, OP_READ_RESP, 8'd1,
                                  X_ID[XW-1:0], Y_ID[YW-1:0],
                                  src_x, src_y,
                                  {addr, rdata16});
            tx_valid <= 1'b1;
            st <= SEND;
          end
        end

        SEND: begin
          if (tx_ready) begin
            tx_valid <= 1'b0;
            st <= IDLE;
          end
        end
      endcase
    end
  end

endmodule
