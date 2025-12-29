timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;
module yc_spad_niu #(
  parameter int X_ID = 1, parameter int Y_ID = 0,
  parameter int RESP_DELAY = 2
)(
  input logic clk, input logic rst_n,
  input  logic  rx_valid, input  flit_t rx_flit, output logic rx_ready,
  output logic  tx_valid, output flit_t tx_flit, input  logic tx_ready
);
  typedef enum logic [1:0] {IDLE, WAITD, SEND} state_t;
  state_t st; logic [7:0] dly; logic [XW-1:0] src_x; logic [YW-1:0] src_y; logic [PAYW-1:0] pay;
  assign rx_ready = (st==IDLE);
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin st<=IDLE; dly<='0; tx_valid<=0; tx_flit<='0; src_x<='0; src_y<='0; pay<='0;
    end else begin
      unique case (st)
        IDLE: begin
          tx_valid <= 1'b0;
          if (rx_valid && (get_opc(rx_flit)==OP_READ_REQ) &&
              (get_dst_x(rx_flit)==X_ID[XW-1:0]) && (get_dst_y(rx_flit)==Y_ID[YW-1:0])) begin
            src_x <= get_src_x(rx_flit); src_y <= get_src_y(rx_flit); pay <= get_pay(rx_flit); dly <= 8'd0; st <= WAITD;
          end
        end
        WAITD: begin dly <= dly + 8'd1; if (dly >= RESP_DELAY[7:0]) begin
            tx_flit <= build_flit(VC_RESP, OP_READ_RESP, 8'd1, X_ID[XW-1:0], Y_ID[YW-1:0], src_x, src_y, pay);
            tx_valid <= 1'b1; st <= SEND; end
        end
        SEND: if (tx_ready) begin tx_valid<=1'b0; st<=IDLE; end
      endcase
    end
  end
endmodule
