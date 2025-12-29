timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;

module yc_soc_top_bringup #(
  parameter int SKID_DEPTH = 1
)(
  input  logic clk,
  input  logic rst_n,

  // Expose local port of router(0,0) as "CPU injection/ejection"
  input  logic  cpu_tx_valid,
  input  flit_t cpu_tx_flit,
  output logic  cpu_tx_ready,

  output logic  cpu_rx_valid,
  output flit_t cpu_rx_flit,
  input  logic  cpu_rx_ready
);

  // Router 0 (0,0) local ports
  logic r0_l_in_valid, r0_l_in_ready; flit_t r0_l_in_flit;
  logic r0_l_out_valid, r0_l_out_ready; flit_t r0_l_out_flit;

  // Router 1 (1,0) local ports (endpoint)
  logic r1_l_in_valid, r1_l_in_ready; flit_t r1_l_in_flit;
  logic r1_l_out_valid, r1_l_out_ready; flit_t r1_l_out_flit;

  // East-West link between routers
  logic r0_e_out_valid, r0_e_out_ready; flit_t r0_e_out_flit;
  logic r0_e_in_valid,  r0_e_in_ready;  flit_t r0_e_in_flit;

  logic r1_w_out_valid, r1_w_out_ready; flit_t r1_w_out_flit;
  logic r1_w_in_valid,  r1_w_in_ready;  flit_t r1_w_in_flit;

  // Tie off unused ports
  logic dummy_ready;
  flit_t dummy_flit;

  // CPU connects to router0 local
  assign r0_l_in_valid = cpu_tx_valid;
  assign r0_l_in_flit  = cpu_tx_flit;
  assign cpu_tx_ready  = r0_l_in_ready;

  assign cpu_rx_valid  = r0_l_out_valid;
  assign cpu_rx_flit   = r0_l_out_flit;
  assign r0_l_out_ready = cpu_rx_ready;

  // Connect routers east<->west
  assign r1_w_in_valid = r0_e_out_valid;
  assign r1_w_in_flit  = r0_e_out_flit;
  assign r0_e_out_ready = r1_w_in_ready;

  assign r0_e_in_valid = r1_w_out_valid;
  assign r0_e_in_flit  = r1_w_out_flit;
  assign r1_w_out_ready = r0_e_in_ready;

  // Instantiate routers
  yc_router_skel #(.X_ID(0), .Y_ID(0), .SKID_DEPTH(SKID_DEPTH)) r0 (
    .clk(clk), .rst_n(rst_n),

    .n_in_valid(1'b0), .n_in_flit('0), .n_in_ready(dummy_ready),
    .n_out_valid(), .n_out_flit(), .n_out_ready(1'b1),

    .e_in_valid(r0_e_in_valid), .e_in_flit(r0_e_in_flit), .e_in_ready(r0_e_in_ready),
    .e_out_valid(r0_e_out_valid), .e_out_flit(r0_e_out_flit), .e_out_ready(r0_e_out_ready),

    .s_in_valid(1'b0), .s_in_flit('0), .s_in_ready(),
    .s_out_valid(), .s_out_flit(), .s_out_ready(1'b1),

    .w_in_valid(1'b0), .w_in_flit('0), .w_in_ready(),
    .w_out_valid(), .w_out_flit(), .w_out_ready(1'b1),

    .l_in_valid(r0_l_in_valid), .l_in_flit(r0_l_in_flit), .l_in_ready(r0_l_in_ready),
    .l_out_valid(r0_l_out_valid), .l_out_flit(r0_l_out_flit), .l_out_ready(r0_l_out_ready)
  );

  yc_router_skel #(.X_ID(1), .Y_ID(0), .SKID_DEPTH(SKID_DEPTH)) r1 (
    .clk(clk), .rst_n(rst_n),

    .n_in_valid(1'b0), .n_in_flit('0), .n_in_ready(),
    .n_out_valid(), .n_out_flit(), .n_out_ready(1'b1),

    .e_in_valid(1'b0), .e_in_flit('0), .e_in_ready(),
    .e_out_valid(), .e_out_flit(), .e_out_ready(1'b1),

    .s_in_valid(1'b0), .s_in_flit('0), .s_in_ready(),
    .s_out_valid(), .s_out_flit(), .s_out_ready(1'b1),

    .w_in_valid(r1_w_in_valid), .w_in_flit(r1_w_in_flit), .w_in_ready(r1_w_in_ready),
    .w_out_valid(r1_w_out_valid), .w_out_flit(r1_w_out_flit), .w_out_ready(r1_w_out_ready),

    .l_in_valid(r1_l_in_valid), .l_in_flit(r1_l_in_flit), .l_in_ready(r1_l_in_ready),
    .l_out_valid(r1_l_out_valid), .l_out_flit(r1_l_out_flit), .l_out_ready(r1_l_out_ready)
  );

  // Endpoint at (1,0): DRAM + SPAD proxy + MMIO
  yc_memmap_endpoint #(.X_ID(1), .Y_ID(0), .RESP_DELAY(2)) ep (
    .clk(clk), .rst_n(rst_n),
    .rx_valid(r1_l_out_valid),
    .rx_flit(r1_l_out_flit),
    .rx_ready(r1_l_out_ready),
    .tx_valid(r1_l_in_valid),
    .tx_flit(r1_l_in_flit),
    .tx_ready(r1_l_in_ready)
  );

endmodule
