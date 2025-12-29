timeunit 1ns; timeprecision 1ps;
module yc_skid #(parameter int W = 32, parameter int DEPTH = 1)(
  input  logic clk, input logic rst_n,
  input  logic s_valid, input  logic [W-1:0] s_data, output logic s_ready,
  output logic m_valid, output logic [W-1:0] m_data, input  logic m_ready
);
  if (DEPTH == 1) begin : g1
    logic full; logic [W-1:0] data_q;
    assign s_ready = !full || m_ready;
    assign m_valid = full;
    assign m_data  = data_q;
    always_ff @(posedge clk or negedge rst_n) begin
      if(!rst_n) begin full<=1'b0; data_q<='0; end
      else begin
        case ({s_valid && s_ready, m_ready && full})
          2'b10: begin data_q <= s_data; full <= 1'b1; end
          2'b01: begin full   <= 1'b0; end
          2'b11: begin data_q <= s_data; full <= 1'b1; end
          default: ; 
        endcase
      end
    end
  end else begin : gfifo
    localparam int AW = $clog2(DEPTH);
    logic [W-1:0] mem [0:DEPTH-1];
    logic [AW:0] wr_ptr, rd_ptr;
    logic full, empty;
    assign empty = (wr_ptr == rd_ptr);
    assign full  = (wr_ptr[AW-1:0] == rd_ptr[AW-1:0]) && (wr_ptr[AW] != rd_ptr[AW]);
    assign s_ready = !full;
    assign m_valid = !empty;
    assign m_data  = mem[rd_ptr[AW-1:0]];
    always_ff @(posedge clk or negedge rst_n) begin
      if(!rst_n) begin wr_ptr<='0; rd_ptr<='0; end
      else begin
        if (s_valid && s_ready) begin
          mem[wr_ptr[AW-1:0]] <= s_data;
          wr_ptr <= wr_ptr + 1'b1;
        end
        if (m_ready && m_valid) begin
          rd_ptr <= rd_ptr + 1'b1;
        end
      end
    end
  end
endmodule
