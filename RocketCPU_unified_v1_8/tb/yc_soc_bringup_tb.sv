timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;

module yc_soc_bringup_tb;

  logic clk = 0;
  logic rst_n = 0;

  logic  cpu_tx_valid;
  flit_t cpu_tx_flit;
  logic  cpu_tx_ready;

  logic  cpu_rx_valid;
  flit_t cpu_rx_flit;
  logic  cpu_rx_ready;

  // DUT
  yc_soc_top_bringup dut (
    .clk(clk), .rst_n(rst_n),
    .cpu_tx_valid(cpu_tx_valid),
    .cpu_tx_flit(cpu_tx_flit),
    .cpu_tx_ready(cpu_tx_ready),
    .cpu_rx_valid(cpu_rx_valid),
    .cpu_rx_flit(cpu_rx_flit),
    .cpu_rx_ready(cpu_rx_ready)
  );

  always #5 clk = ~clk; // 100 MHz sim clock

  // Simple send helpers
  task automatic send_req(input flit_t f);
    cpu_tx_valid <= 1'b1;
    cpu_tx_flit  <= f;
    do @(posedge clk); while (!cpu_tx_ready);
    @(posedge clk);
    cpu_tx_valid <= 1'b0;
    cpu_tx_flit  <= '0;
  endtask

  function automatic flit_t mk_read(input logic [15:0] addr);
    return build_flit(VC_REQ, OP_READ_REQ, 8'd1, 4'd0, 4'd0, 4'd1, 4'd0, {addr, 16'h0000});
  endfunction

  function automatic flit_t mk_write(input logic [15:0] addr, input logic [15:0] data);
    return build_flit(VC_REQ, OP_WRITE, 8'd1, 4'd0, 4'd0, 4'd1, 4'd0, {addr, data});
  endfunction

  task automatic expect_read(input logic [15:0] addr, input logic [15:0] exp);
    flit_t resp;
    // wait for response
    while (!cpu_rx_valid) @(posedge clk);
    resp = cpu_rx_flit;
    if (get_opc(resp) != OP_READ_RESP) begin
      $fatal(1, "Expected READ_RESP, got opc=%0d", get_opc(resp));
    end
    if (get_pay(resp)[31:16] != addr) begin
      $fatal(1, "Address mismatch: exp=%h got=%h", addr, get_pay(resp)[31:16]);
    end
    if (get_pay(resp)[15:0] != exp) begin
      $fatal(1, "Data mismatch @%h: exp=%h got=%h", addr, exp, get_pay(resp)[15:0]);
    end
    @(posedge clk);
  endtask

  initial begin
    cpu_tx_valid = 0;
    cpu_tx_flit  = '0;
    cpu_rx_ready = 1;

    // reset
    repeat (5) @(posedge clk);
    rst_n <= 1;
    repeat (5) @(posedge clk);

    // 1) DRAM write/read
    send_req(mk_write(16'h0010, 16'h1234));
    send_req(mk_read (16'h0010));
    expect_read(16'h0010, 16'h1234);

    // 2) SPAD proxy write/read
    send_req(mk_write(16'h8002, 16'hBEEF));
    send_req(mk_read (16'h8002));
    expect_read(16'h8002, 16'hBEEF);

    // 3) MMIO ID read (ROCK signature low half)
    send_req(mk_read(16'hF000));
    expect_read(16'hF000, 16'h434B); // 'CK'

    // 4) MMIO scratch write/read
    send_req(mk_write(16'hF004, 16'hCAFE));
    send_req(mk_read (16'hF004));
    expect_read(16'hF004, 16'hCAFE);

    $display("PASS: yc_soc_bringup_tb");
    $finish;
  end

endmodule
