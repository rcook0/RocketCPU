timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;
module yc_soc_top_full #(parameter int SKID_DEPTH=1) (input logic clk, input logic rst_n);
  logic r0_e_out_valid, r0_e_out_ready; flit_t r0_e_out_flit;
  logic r0_e_in_valid,  r0_e_in_ready;  flit_t r0_e_in_flit;
  logic r1_w_out_valid, r1_w_out_ready; flit_t r1_w_out_flit;
  logic r1_w_in_valid,  r1_w_in_ready;  flit_t r1_w_in_flit;
  assign r0_e_out_ready = r1_w_in_ready;
  assign r1_w_in_valid  = r0_e_out_valid;
  assign r1_w_in_flit   = r0_e_out_flit;
  assign r1_w_out_ready = r0_e_in_ready;
  assign r0_e_in_valid  = r1_w_out_valid;
  assign r0_e_in_flit   = r1_w_out_flit;

  logic cpu_tx_valid, cpu_tx_ready; flit_t cpu_tx_flit;
  logic cpu_rx_valid, cpu_rx_ready; flit_t cpu_rx_flit;
  logic sp_tx_valid,  sp_tx_ready;  flit_t sp_tx_flit;
  logic sp_rx_valid,  sp_rx_ready;  flit_t sp_rx_flit;

  logic r0_n_in_valid, r0_s_in_valid, r0_w_in_valid; 
  flit_t r0_n_in_flit, r0_s_in_flit, r0_w_in_flit;
  logic r0_n_in_ready, r0_s_in_ready, r0_w_in_ready;
  logic r0_n_out_valid, r0_s_out_valid, r0_w_out_valid;
  flit_t r0_n_out_flit, r0_s_out_flit, r0_w_out_flit;
  logic r0_n_out_ready, r0_s_out_ready, r0_w_out_ready, r0_l_out_ready;
  assign r0_n_in_valid=0; assign r0_s_in_valid=0; assign r0_w_in_valid=0;
  assign r0_n_in_flit='0; assign r0_s_in_flit='0; assign r0_w_in_flit='0;
  assign r0_n_out_ready=1; assign r0_s_out_ready=1; assign r0_w_out_ready=1; assign r0_l_out_ready=1;

  yc_router_skel #(.X_ID(0), .Y_ID(0), .ARB_N(5), .SKID_DEPTH(SKID_DEPTH)) r0 (
    .clk(clk), .rst_n(rst_n),
    .n_in_valid(r0_n_in_valid), .n_in_flit(r0_n_in_flit), .n_in_ready(r0_n_in_ready),
    .n_out_valid(r0_n_out_valid), .n_out_flit(r0_n_out_flit), .n_out_ready(r0_n_out_ready),
    .e_in_valid(r0_e_in_valid), .e_in_flit(r0_e_in_flit), .e_in_ready(r0_e_in_ready),
    .e_out_valid(r0_e_out_valid), .e_out_flit(r0_e_out_flit), .e_out_ready(r0_e_out_ready),
    .s_in_valid(r0_s_in_valid), .s_in_flit(r0_s_in_flit), .s_in_ready(r0_s_in_ready),
    .s_out_valid(r0_s_out_valid), .s_out_flit(r0_s_out_flit), .s_out_ready(r0_s_out_ready),
    .w_in_valid(r0_w_in_valid), .w_in_flit(r0_w_in_flit), .w_in_ready(r0_w_in_ready),
    .w_out_valid(r0_w_out_valid), .w_out_flit(r0_w_out_flit), .w_out_ready(r0_w_out_ready),
    .l_in_valid(cpu_tx_valid), .l_in_flit(cpu_tx_flit), .l_in_ready(cpu_tx_ready),
    .l_out_valid(cpu_rx_valid), .l_out_flit(cpu_rx_flit), .l_out_ready(cpu_rx_ready)
  );

  logic r1_n_in_valid, r1_s_in_valid, r1_e_in_valid, r1_l_in_valid;
  flit_t r1_n_in_flit,  r1_s_in_flit,  r1_e_in_flit,  r1_l_in_flit;
  logic r1_n_in_ready,  r1_s_in_ready,  r1_e_in_ready,  r1_l_in_ready;
  logic r1_n_out_valid, r1_s_out_valid, r1_e_out_valid, r1_l_out_valid;
  flit_t r1_n_out_flit,  r1_s_out_flit,  r1_e_out_flit,  r1_l_out_flit;
  logic r1_n_out_ready,  r1_s_out_ready,  r1_e_out_ready,  r1_l_out_ready;
  assign r1_n_in_valid=0; assign r1_s_in_valid=0; assign r1_e_in_valid=0; assign r1_l_in_valid=0;
  assign r1_n_in_flit='0; assign r1_s_in_flit='0; assign r1_e_in_flit='0; assign r1_l_in_flit='0;
  assign r1_n_out_ready=1; assign r1_s_out_ready=1; assign r1_e_out_ready=1; assign r1_l_out_ready=1;

  yc_router_skel #(.X_ID(1), .Y_ID(0), .ARB_N(5), .SKID_DEPTH(SKID_DEPTH)) r1 (
    .clk(clk), .rst_n(rst_n),
    .n_in_valid(r1_n_in_valid), .n_in_flit(r1_n_in_flit), .n_in_ready(r1_n_in_ready),
    .n_out_valid(r1_n_out_valid), .n_out_flit(r1_n_out_flit), .n_out_ready(r1_n_out_ready),
    .e_in_valid(r1_e_in_valid), .e_in_flit(r1_e_in_flit), .e_in_ready(r1_e_in_ready),
    .e_out_valid(r1_e_out_valid), .e_out_flit(r1_e_out_flit), .e_out_ready(r1_e_out_ready),
    .s_in_valid(r1_s_in_valid), .s_in_flit(r1_s_in_flit), .s_in_ready(r1_s_in_ready),
    .s_out_valid(r1_s_out_valid), .s_out_flit(r1_s_out_flit), .s_out_ready(r1_s_out_ready),
    .w_in_valid(r1_w_in_valid), .w_in_flit(r1_w_in_flit), .w_in_ready(r1_w_in_ready),
    .w_out_valid(r1_w_out_valid), .w_out_flit(r1_w_out_flit), .w_out_ready(r1_w_out_ready),
    .l_in_valid(sp_tx_valid), .l_in_flit(sp_tx_flit), .l_in_ready(sp_tx_ready),
    .l_out_valid(sp_rx_valid), .l_out_flit(sp_rx_flit), .l_out_ready(sp_rx_ready)
  );

  yc_niu_skel #(.SRC_X(0),.SRC_Y(0),.DST_X(1),.DST_Y(0),.START_DELAY(4), .CONTINUOUS(0)) cpu_niu (
    .clk(clk), .rst_n(rst_n),
    .tx_valid(cpu_tx_valid), .tx_flit(cpu_tx_flit), .tx_ready(cpu_tx_ready),
    .rx_valid(cpu_rx_valid), .rx_flit(cpu_rx_flit), .rx_ready(cpu_rx_ready)
  );
  yc_spad_niu #(.X_ID(1),.Y_ID(0),.RESP_DELAY(2)) spad (
    .clk(clk), .rst_n(rst_n),
    .rx_valid(sp_rx_valid), .rx_flit(sp_rx_flit), .rx_ready(sp_rx_ready),
    .tx_valid(sp_tx_valid), .tx_flit(sp_tx_flit), .tx_ready(sp_tx_ready)
  );
endmodule
