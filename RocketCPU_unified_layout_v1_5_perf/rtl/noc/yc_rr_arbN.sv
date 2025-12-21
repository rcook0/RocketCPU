timeunit 1ns; timeprecision 1ps;
module yc_rr_arbN #(parameter int N=5)(
  input  logic clk, input logic rst_n,
  input  logic [N-1:0] req,
  output logic [N-1:0] gnt
);
  localparam int PW = (N<=2)?1:$clog2(N);
  logic [PW-1:0] ptr;
  always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) ptr <= '0;
    else if(|gnt) begin
      automatic int i;
      for (i=0;i<N;i++) if (gnt[i]) ptr <= (i+1)%N;
    end
  end
  always_comb begin
    gnt = '0;
    if (|req) begin
      automatic int k;
      for (k=0;k<N;k++) begin
        int idx = (ptr + k) % N;
        if (req[idx]) begin gnt[idx]=1'b1; break; end
      end
    end
  end
endmodule
