timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;
module yc_skid_sweep_tb;
  logic clk; logic rst_n; initial begin clk=0; forever #5 clk=~clk; end
  initial begin rst_n=0; repeat(5) @(posedge clk); rst_n=1; end

  localparam int NUM=3;
  localparam int DEPTHS[NUM] = '{1,2,4};

  int acc[NUM]; int cyc;
  initial begin for (int i=0;i<NUM;i++) acc[i]=0; cyc=0; end
  always @(posedge clk) if (rst_n) cyc<=cyc+1;

  for (genvar i=0;i<NUM;i++) begin : G
    logic n_in_valid,n_in_ready,e_in_valid,e_in_ready,s_in_valid,s_in_ready,w_in_valid,w_in_ready,l_in_valid,l_in_ready;
    flit_t n_in_flit,e_in_flit,s_in_flit,w_in_flit,l_in_flit;
    logic n_out_valid,n_out_ready,e_out_valid,e_out_ready,s_out_valid,s_out_ready,w_out_valid,w_out_ready,l_out_valid,l_out_ready;
    flit_t n_out_flit,e_out_flit,s_out_flit,w_out_flit,l_out_flit;
    assign e_out_ready = 1'b1;
    assign n_out_ready = 1'b1; assign s_out_ready = 1'b1; assign w_out_ready = 1'b1; assign l_out_ready = 1'b1;

    yc_router_skel #(.X_ID(0),.Y_ID(0),.SKID_DEPTH(DEPTHS[i])) dut (
      .clk(clk), .rst_n(rst_n),
      .n_in_valid(n_in_valid), .n_in_flit(n_in_flit), .n_in_ready(n_in_ready),
      .n_out_valid(n_out_valid), .n_out_flit(n_out_flit), .n_out_ready(n_out_ready),
      .e_in_valid(e_in_valid), .e_in_flit(e_in_flit), .e_in_ready(e_in_ready),
      .e_out_valid(e_out_valid), .e_out_flit(e_out_flit), .e_out_ready(e_out_ready),
      .s_in_valid(s_in_valid), .s_in_flit(s_in_flit), .s_in_ready(s_in_ready),
      .s_out_valid(s_out_valid), .s_out_flit(s_out_flit), .s_out_ready(s_out_ready),
      .w_in_valid(w_in_valid), .w_in_flit(w_in_flit), .w_in_ready(w_in_ready),
      .w_out_valid(w_out_valid), .w_out_flit(w_out_flit), .w_out_ready(w_out_ready),
      .l_in_valid(l_in_valid), .l_in_flit(l_in_flit), .l_in_ready(l_in_ready),
      .l_out_valid(l_out_valid), .l_out_flit(l_out_flit), .l_out_ready(l_out_ready)
    );

    yc_niu_skel #(.SRC_X(0),.SRC_Y(i),.DST_X(1),.DST_Y(0),.START_DELAY(4+i), .PERIOD(1), .CONTINUOUS(1)) drvL (
      .clk(clk), .rst_n(rst_n), .tx_valid(l_in_valid), .tx_flit(l_in_flit), .tx_ready(l_in_ready),
      .rx_valid(), .rx_flit(), .rx_ready()
    );

    always @(posedge clk) if (rst_n && e_out_valid && e_out_ready) acc[i] <= acc[i] + 1;
  end

`ifndef NO_DUMP
  initial begin $dumpfile("sweep.vcd"); $dumpvars(0, yc_skid_sweep_tb); end
`endif

  always @(posedge clk) begin
    if (rst_n && cyc==1000) begin
      $display("RESULT: SKID_DEPTH=1 accepted=%0d", acc[0]);
      $display("RESULT: SKID_DEPTH=2 accepted=%0d", acc[1]);
      $display("RESULT: SKID_DEPTH=4 accepted=%0d", acc[2]);
      $display("PASS: sweep complete after %0d cycles", cyc);
      $finish;
    end
  end

  always @(posedge clk) if (cyc>10000) begin $error("FAIL: timeout"); $fatal; end
endmodule
