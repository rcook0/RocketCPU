timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;
module yc_router_fair_tb;
  logic clk; logic rst_n; initial begin clk=0; forever #5 clk=~clk; end
  initial begin rst_n=0; repeat(5) @(posedge clk); rst_n=1; end
  logic n_in_valid,n_in_ready,e_in_valid,e_in_ready,s_in_valid,s_in_ready,w_in_valid,w_in_ready,l_in_valid,l_in_ready;
  flit_t n_in_flit,e_in_flit,s_in_flit,w_in_flit,l_in_flit;
  logic n_out_valid,n_out_ready,e_out_valid,e_out_ready,s_out_valid,s_out_ready,w_out_valid,w_out_ready,l_out_valid,l_out_ready;
  flit_t n_out_flit,e_out_flit,s_out_flit,w_out_flit,l_out_flit;
  assign e_out_ready = 1'b1; assign n_out_ready = 1'b1; assign s_out_ready = 1'b1; assign w_out_ready = 1'b1; assign l_out_ready = 1'b1;

  yc_router_skel #(.X_ID(0),.Y_ID(0)) dut (
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

  yc_niu_skel #(.SRC_X(0),.SRC_Y(1),.DST_X(1),.DST_Y(0),.START_DELAY(2),.PERIOD(1),.CONTINUOUS(1)) drvN (
    .clk(clk), .rst_n(rst_n), .tx_valid(n_in_valid), .tx_flit(n_in_flit), .tx_ready(n_in_ready),
    .rx_valid(), .rx_flit(), .rx_ready()
  );
  yc_niu_skel #(.SRC_X(0),.SRC_Y(2),.DST_X(1),.DST_Y(0),.START_DELAY(3),.PERIOD(1),.CONTINUOUS(1)) drvS (
    .clk(clk), .rst_n(rst_n), .tx_valid(s_in_valid), .tx_flit(s_in_flit), .tx_ready(s_in_ready),
    .rx_valid(), .rx_flit(), .rx_ready()
  );
  yc_niu_skel #(.SRC_X(0),.SRC_Y(3),.DST_X(1),.DST_Y(0),.START_DELAY(4),.PERIOD(1),.CONTINUOUS(1)) drvL (
    .clk(clk), .rst_n(rst_n), .tx_valid(l_in_valid), .tx_flit(l_in_flit), .tx_ready(l_in_ready),
    .rx_valid(), .rx_flit(), .rx_ready()
  );

  int cnt1, cnt2, cnt3, total;
  initial begin cnt1=0; cnt2=0; cnt3=0; total=0; end
`ifndef NO_DUMP
  initial begin $dumpfile("fair.vcd"); $dumpvars(0, yc_router_fair_tb); end
`endif
  always @(posedge clk) if (rst_n && e_out_valid && e_out_ready) begin
    flit_t f = e_out_flit;
    if (get_dst_x(f)==1 && get_dst_y(f)==0 && get_opc(f)==OP_READ_REQ) begin
      case (get_src_y(f))
        4'd1: cnt1 <= cnt1 + 1;
        4'd2: cnt2 <= cnt2 + 1;
        4'd3: cnt3 <= cnt3 + 1;
      endcase
      total <= total + 1;
    end
  end
  always @(posedge clk) begin
    if (rst_n && total >= 90) begin
      int maxc = cnt1; if (cnt2>maxc) maxc=cnt2; if (cnt3>maxc) maxc=cnt3;
      int minc = cnt1; if (cnt2<minc) minc=cnt2; if (cnt3<minc) minc=cnt3;
      if ((maxc-minc) <= 1) begin
        $display("PASS: Fairness OK after %0d deliveries (counts %0d/%0d/%0d)",
                 total, cnt1, cnt2, cnt3); $finish;
      end else begin
        $error("FAIL: Unfair arbitration %0d/%0d/%0d after %0d", cnt1, cnt2, cnt3, total); $fatal;
      end
    end
  end
  int cycles; initial cycles=0; always @(posedge clk) if (rst_n) cycles<=cycles+1;
  always @(posedge clk) if (cycles>10000) begin $error("FAIL: timeout"); $fatal; end
endmodule
