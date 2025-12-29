timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;
module yc_niu_skel #(
  parameter int SRC_X = 0, parameter int SRC_Y = 0,
  parameter int DST_X = 1, parameter int DST_Y = 0,
  parameter int unsigned START_DELAY = 4,
  parameter int unsigned PERIOD = 1,
  parameter bit CONTINUOUS = 0
)(
  input  logic clk, input logic rst_n,
  output logic  tx_valid, output flit_t tx_flit, input logic tx_ready,
  input  logic  rx_valid, input  flit_t rx_flit, output logic rx_ready
);
  localparam logic [XW-1:0] SRC_X_S = SRC_X[XW-1:0];
  localparam logic [YW-1:0] SRC_Y_S = SRC_Y[YW-1:0];
  localparam logic [XW-1:0] DST_X_S = DST_X[XW-1:0];
  localparam logic [YW-1:0] DST_Y_S = DST_Y[YW-1:0];
  logic [15:0] cnt; logic streaming; logic [15:0] inter;
  assign rx_ready = 1'b1;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin cnt<='0; inter<='0; streaming<=1'b0; tx_valid<=0; tx_flit<='0; end
    else begin
      if (!streaming) begin
        if (!tx_valid) begin
          cnt <= cnt + 16'd1;
          if (cnt == START_DELAY[15:0]) begin
            tx_flit  <= build_flit(VC_REQ, OP_READ_REQ, 8'd1, SRC_X_S, SRC_Y_S, DST_X_S, DST_Y_S, 32'hABCD0000|SRC_X_S|({12'd0,SRC_Y_S}<<4));
            tx_valid <= 1'b1;
          end
        end else if (tx_ready) begin
          tx_valid <= 1'b0; streaming <= CONTINUOUS;
        end
      end else begin
        if (!tx_valid) begin
          inter <= inter + 16'd1;
          if (inter >= PERIOD[15:0]) begin
            inter <= '0;
            tx_flit  <= build_flit(VC_REQ, OP_READ_REQ, 8'd1, SRC_X_S, SRC_Y_S, DST_X_S, DST_Y_S, 32'hABCD0000|SRC_X_S|({12'd0,SRC_Y_S}<<4));
            tx_valid <= 1'b1;
          end
        end else if (tx_ready) begin
          tx_valid <= 1'b0;
        end
      end
    end
  end
endmodule
