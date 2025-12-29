timeunit 1ns; timeprecision 1ps;
module yc_rr_arbN #(parameter int N=5)(
  input  logic         clk,
  input  logic         rst_n,
  input  logic [N-1:0] req,
  output logic [N-1:0] gnt
);
  int ptr, ptr_next;
  int hit_idx, idx;
  logic [N-1:0] gnt_next;

  always_comb begin
    gnt_next = '0;
    hit_idx  = -1;
    for (int k = 0; k < N; k++) begin
      idx = ptr + k;
      if (idx >= N) idx = idx - N;
      if (req[idx]) begin
        gnt_next[idx] = 1'b1;
        hit_idx = idx;
        break;
      end
    end
    if (hit_idx >= 0) begin
      if (hit_idx == N-1) ptr_next = 0;
      else                ptr_next = hit_idx + 1;
    end else begin
      ptr_next = ptr;
    end
    gnt = gnt_next;
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) ptr <= 0;
    else        ptr <= ptr_next;
  end
endmodule
