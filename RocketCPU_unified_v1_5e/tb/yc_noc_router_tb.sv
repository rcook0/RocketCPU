timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;
module yc_noc_router_tb;
  logic clk; logic rst_n; initial begin clk=0; forever #5 clk=~clk; end
  initial begin rst_n=0; repeat(5) @(posedge clk); rst_n=1; end

  logic r0_e_out_valid, r0_e_out_ready; flit_t r0_e_out_flit;
  logic r1_w_in_valid,  r1_w_in_ready;  flit_t r1_w_in_flit;
  logic r1_w_out_valid, r1_w_out_ready; flit_t r1_w_out_flit;
  logic r0_e_in_valid,  r0_e_in_ready;  flit_t r0_e_in_flit;
  assign r0_e_out_ready = r1_w_in_ready;
  assign r1_w_in_valid  = r0_e_out_valid;
  assign r1_w_in_flit   = r0_e_out_flit;
  assign r1_w_out_ready = r0_e_in_ready;
  assign r0_e_in_valid  = r1_w_out_valid;
  assign r0_e_in_flit   = r1_w_out_flit;

  logic dummy_ready = 1'b1;
  logic r0_n_in_valid, r0_s_in_valid, r0_w_in_valid; 
  flit_t r0_n_in_flit, r0_s_in_flit, r0_w_in_flit;
  logic r0_n_in_ready, r0_s_in_ready, r0_w_in_ready;
  logic r0_n_out_valid, r0_s_out_valid, r0_w_out_valid;
  flit_t r0_n_out_flit, r0_s_out_flit, r0_w_out_flit;
  logic r0_n_out_ready, r0_s_out_ready, r0_w_out_ready, r0_l_out_ready;
  assign r0_n_in_valid=0; assign r0_s_in_valid=0; assign r0_w_in_valid=0;
  assign r0_n_in_flit='0; assign r0_s_in_flit='0; assign r0_w_in_flit='0;
  assign r0_n_out_ready=dummy_ready; assign r0_s_out_ready=dummy_ready; assign r0_w_out_ready=dummy_ready; assign r0_l_out_ready=dummy_ready;

  logic r1_n_in_valid, r1_s_in_valid, r1_e_in_valid, r1_l_in_valid;
  flit_t r1_n_in_flit,  r1_s_in_flit,  r1_e_in_flit,  r1_l_in_flit;
  logic r1_n_in_ready,  r1_s_in_ready,  r1_e_in_ready,  r1_l_in_ready;
  logic r1_n_out_valid, r1_s_out_valid, r1_e_out_valid, r1_l_out_valid;
  flit_t r1_n_out_flit,  r1_s_out_flit,  r1_e_out_flit,  r1_l_out_flit;
  logic r1_n_out_ready,  r1_s_out_ready,  r1_e_out_ready,  r1_l_out_ready;
  assign r1_n_in_valid=0; assign r1_s_in_valid=0; assign r1_e_in_valid=0; assign r1_l_in_valid=0;
  assign r1_n_in_flit='0; assign r1_s_in_flit='0; assign r1_e_in_flit='0; assign r1_l_in_flit='0;
  assign r1_n_out_ready=dummy_ready; assign r1_s_out_ready=dummy_ready; assign r1_e_out_ready=dummy_ready; assign r1_l_out_ready=dummy_ready;

  yc_router_skel #(.X_ID(0),.Y_ID(0)) r0 (
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

  yc_router_skel #(.X_ID(1),.Y_ID(0)) r1 (
    .clk(clk), .rst_n(rst_n),
    .n_in_valid(r1_n_in_valid), .n_in_flit(r1_n_in_flit), .n_in_ready(r1_n_in_ready),
    .n_out_valid(r1_n_out_valid), .n_out_flit(r1_n_out_flit), .n_out_ready(r1_n_out_ready),
    .e_in_valid(r1_e_in_valid), .e_in_flit(r1_e_in_flit), .e_in_ready(r1_e_in_ready),
    .e_out_valid(r1_e_out_valid), .e_out_flit(r1_e_out_flit), .e_out_ready(r1_e_out_ready),
    .s_in_valid(r1_s_in_valid), .s_in_flit(r1_s_in_flit), .s_in_ready(r1_s_in_ready),
    .s_out_valid(r1_s_out_valid), .s_out_flit(r1_s_out_flit), .s_out_ready(r1_s_out_ready),
    .w_in_valid(r1_w_in_valid), .w_in_flit(r1_w_in_flit), .w_in_ready(r1_w_in_ready),
    .w_out_valid(r1_w_out_valid), .w_out_flit(r1_w_out_flit), .w_out_ready(r1_w_out_ready),
    .l_in_valid(r1_l_in_valid), .l_in_flit(r1_l_in_flit), .l_in_ready(r1_l_in_ready),
    .l_out_valid(r1_l_out_valid), .l_out_flit(r1_l_out_flit), .l_out_ready(r1_l_out_ready)
  );

  logic cpu_tx_valid, cpu_tx_ready; flit_t cpu_tx_flit;
  logic cpu_rx_valid, cpu_rx_ready; flit_t cpu_rx_flit;
  yc_niu_skel #(.SRC_X(0),.SRC_Y(0),.DST_X(1),.DST_Y(0),.START_DELAY(4), .CONTINUOUS(0)) cpu_niu (
    .clk(clk), .rst_n(rst_n),
    .tx_valid(cpu_tx_valid), .tx_flit(cpu_tx_flit), .tx_ready(cpu_tx_ready),
    .rx_valid(cpu_rx_valid), .rx_flit(cpu_rx_flit), .rx_ready(cpu_rx_ready)
  );

  assign r1_l_in_valid = 1'b0; assign r1_l_in_flit = '0; assign r1_l_out_ready = 1'b1;

  int cycles; initial cycles=0; always @(posedge clk) if (rst_n) cycles<=cycles+1;

`ifndef NO_DUMP
  initial begin $dumpfile("noc_smoke.vcd"); $dumpvars(0,yc_noc_router_tb); end
`endif

  always @(posedge clk) begin
    if (rst_n && r1_l_out_valid) begin
      flit_t f = r1_l_out_flit;
      if (get_opc(f)==OP_READ_REQ && get_dst_x(f)==1 && get_dst_y(f)==0) begin
        $display("PASS: r1.local saw expected flit @ cycle %0d", cycles); $finish;
      end else begin
        $error("FAIL: unexpected flit at r1.local"); $fatal;
      end
    end
    if (cycles>2000) begin $error("FAIL: timeout"); $fatal; end
  end
endmodule
