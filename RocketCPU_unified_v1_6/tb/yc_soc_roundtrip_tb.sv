timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;
module yc_soc_roundtrip_tb;
  logic clk; logic rst_n; initial begin clk=0; forever #5 clk=~clk; end
  initial begin rst_n=0; repeat(5) @(posedge clk); rst_n=1; end
  yc_soc_top_full #(.SKID_DEPTH(1)) dut(.clk(clk), .rst_n(rst_n));
  int cycles; initial cycles=0; always @(posedge clk) if (rst_n) cycles<=cycles+1;
`ifndef NO_DUMP
  initial begin $dumpfile("soc_roundtrip.vcd"); $dumpvars(0,yc_soc_roundtrip_tb); end
`endif
  always @(posedge clk) begin
    if (rst_n && dut.cpu_rx_valid && dut.cpu_rx_ready) begin
      flit_t f = dut.cpu_rx_flit;
      if ((get_opc(f)==OP_READ_RESP) && (get_src_x(f)==1) && (get_src_y(f)==0) &&
          (get_dst_x(f)==0) && (get_dst_y(f)==0)) begin
        $display("PASS: SoC READ_RESP round-trip @ cycle %0d", cycles); $finish;
      end else begin
        $error("FAIL: unexpected response at CPU"); $fatal;
      end
    end
    if (cycles>6000) begin $error("FAIL: timeout"); $fatal; end
  end
endmodule
