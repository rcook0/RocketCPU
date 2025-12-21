timeunit 1ns; timeprecision 1ps;
import yc_noc_defs::*;
module yc_router_skel #(
  parameter int unsigned X_ID = 0,
  parameter int unsigned Y_ID = 0,
  parameter int unsigned ARB_N = 5,
  parameter int unsigned SKID_DEPTH = 1
)(
  input  logic clk, input logic rst_n,
  input  logic n_in_valid,  input flit_t n_in_flit,  output logic n_in_ready,
  output logic n_out_valid, output flit_t n_out_flit, input  logic n_out_ready,
  input  logic e_in_valid,  input flit_t e_in_flit,  output logic e_in_ready,
  output logic e_out_valid, output flit_t e_out_flit, input  logic e_out_ready,
  input  logic s_in_valid,  input flit_t s_in_flit,  output logic s_in_ready,
  output logic s_out_valid, output flit_t s_out_flit, input  logic s_out_ready,
  input  logic w_in_valid,  input flit_t w_in_flit,  output logic w_in_ready,
  output logic w_out_valid, output flit_t w_out_flit, input  logic w_out_ready,
  input  logic l_in_valid,  input flit_t l_in_flit,  output logic l_in_ready,
  output logic l_out_valid, output flit_t l_out_flit, input  logic l_out_ready
);
  initial if (ARB_N != 5) $error("ARB_N != 5 not supported by this interface.");
  typedef enum logic [2:0] {PORT_N=3'd0, PORT_E=3'd1, PORT_S=3'd2, PORT_W=3'd3, PORT_L=3'd4} port_t;

  logic busy;
  assign n_in_ready = !busy;
  assign e_in_ready = !busy;
  assign s_in_ready = !busy;
  assign w_in_ready = !busy;
  assign l_in_ready = !busy;

  logic [ARB_N-1:0] req, gnt;
  always_comb req = {l_in_valid, w_in_valid, s_in_valid, e_in_valid, n_in_valid};
  yc_rr_arbN #(.N(ARB_N)) rr(.clk(clk), .rst_n(rst_n), .req(req), .gnt(gnt));

  function automatic port_t route_xy(input flit_t f);
    int unsigned dx=get_dst_x(f); int unsigned dy=get_dst_y(f);
    if(dx>X_ID) return PORT_E; else if(dx<X_ID) return PORT_W;
    else if(dy>Y_ID) return PORT_N; else if(dy<Y_ID) return PORT_S;
    else return PORT_L;
  endfunction

  flit_t hold_flit; port_t hold_tgt;

  logic n_v_p,e_v_p,s_v_p,w_v_p,l_v_p; 
  flit_t n_f_p,e_f_p,s_f_p,w_f_p,l_f_p; 
  logic n_r_p,e_r_p,s_r_p,w_r_p,l_r_p;

  yc_skid #(.W(FLIT_W), .DEPTH(SKID_DEPTH)) skid_n(.clk(clk),.rst_n(rst_n),.s_valid(n_v_p),.s_data(n_f_p),.s_ready(n_r_p),.m_valid(n_out_valid),.m_data(n_out_flit),.m_ready(n_out_ready));
  yc_skid #(.W(FLIT_W), .DEPTH(SKID_DEPTH)) skid_e(.clk(clk),.rst_n(rst_n),.s_valid(e_v_p),.s_data(e_f_p),.s_ready(e_r_p),.m_valid(e_out_valid),.m_data(e_out_flit),.m_ready(e_out_ready));
  yc_skid #(.W(FLIT_W), .DEPTH(SKID_DEPTH)) skid_s(.clk(clk),.rst_n(rst_n),.s_valid(s_v_p),.s_data(s_f_p),.s_ready(s_r_p),.m_valid(s_out_valid),.m_data(s_out_flit),.m_ready(s_out_ready));
  yc_skid #(.W(FLIT_W), .DEPTH(SKID_DEPTH)) skid_w(.clk(clk),.rst_n(rst_n),.s_valid(w_v_p),.s_data(w_f_p),.s_ready(w_r_p),.m_valid(w_out_valid),.m_data(w_out_flit),.m_ready(w_out_ready));
  yc_skid #(.W(FLIT_W), .DEPTH(SKID_DEPTH)) skid_l(.clk(clk),.rst_n(rst_n),.s_valid(l_v_p),.s_data(l_f_p),.s_ready(l_r_p),.m_valid(l_out_valid),.m_data(l_out_flit),.m_ready(l_out_ready));

  logic ready_sel_c;
  always_comb begin
    n_v_p=1'b0; e_v_p=1'b0; s_v_p=1'b0; w_v_p=1'b0; l_v_p=1'b0;
    n_f_p='0;   e_f_p='0;   s_f_p='0;   w_f_p='0;   l_f_p='0;
    ready_sel_c = 1'b0;

    if (busy) begin
      unique case (hold_tgt)
        PORT_N: begin ready_sel_c = n_r_p; n_v_p = 1'b1; n_f_p = hold_flit; end
        PORT_E: begin ready_sel_c = e_r_p; e_v_p = 1'b1; e_f_p = hold_flit; end
        PORT_S: begin ready_sel_c = s_r_p; s_v_p = 1'b1; s_f_p = hold_flit; end
        PORT_W: begin ready_sel_c = w_r_p; w_v_p = 1'b1; w_f_p = hold_flit; end
        default: begin ready_sel_c = l_r_p; l_v_p = 1'b1; l_f_p = hold_flit; end
      endcase
    end
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin busy<=1'b0; hold_flit<='0; hold_tgt<=PORT_L; end
    else begin
      if(!busy) begin
        unique case (1'b1)
          gnt[0]: begin hold_flit <= n_in_flit; hold_tgt <= route_xy(n_in_flit); busy <= 1'b1; end
          gnt[1]: begin hold_flit <= e_in_flit; hold_tgt <= route_xy(e_in_flit); busy <= 1'b1; end
          gnt[2]: begin hold_flit <= s_in_flit; hold_tgt <= route_xy(s_in_flit); busy <= 1'b1; end
          gnt[3]: begin hold_flit <= w_in_flit; hold_tgt <= route_xy(w_in_flit); busy <= 1'b1; end
          gnt[4]: begin hold_flit <= l_in_flit; hold_tgt <= route_xy(l_in_flit); busy <= 1'b1; end
          default: ;
        endcase
      end else if (ready_sel_c) begin
        busy <= 1'b0;
      end
    end
  end
endmodule
