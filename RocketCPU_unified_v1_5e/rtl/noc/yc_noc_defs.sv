timeunit 1ns; timeprecision 1ps;
package yc_noc_defs;
  parameter int XW=4, YW=4, VCW=4, OPCW=4, LENW=8, PAYW=32;
  parameter int FLIT_W = VCW+OPCW+LENW+XW+YW+XW+YW+PAYW;
  typedef logic [FLIT_W-1:0] flit_t;
  localparam logic [VCW-1:0] VC_REQ='h0, VC_RESP='h1;
  localparam logic [OPCW-1:0] OP_NOP=4'h0, OP_READ_REQ=4'h1, OP_READ_RESP=4'h2, OP_WRITE=4'h3;
  localparam int VC_HI=FLIT_W-1, VC_LO=FLIT_W-VCW;
  localparam int OPC_HI=VC_LO-1, OPC_LO=OPC_HI-(OPCW-1);
  localparam int LEN_HI=OPC_LO-1, LEN_LO=LEN_HI-(LENW-1);
  localparam int SRCX_HI=LEN_LO-1, SRCX_LO=SRCX_HI-(XW-1);
  localparam int SRCY_HI=SRCX_LO-1, SRCY_LO=SRCY_HI-(YW-1);
  localparam int DSTX_HI=SRCY_LO-1, DSTX_LO=DSTX_HI-(XW-1);
  localparam int DSTY_HI=DSTX_LO-1, DSTY_LO=DSTY_HI-(YW-1);
  localparam int PAY_HI=DSTY_LO-1, PAY_LO=PAY_HI-(PAYW-1);
  function automatic flit_t build_flit(
    input logic [VCW-1:0]  vc, input logic [OPCW-1:0] opc, input logic [LENW-1:0] len,
    input logic [XW-1:0]   src_x, input logic [YW-1:0]   src_y,
    input logic [XW-1:0]   dst_x, input logic [YW-1:0]   dst_y,
    input logic [PAYW-1:0] payload);
    flit_t f='0;
    f[VC_HI:VC_LO]=vc; f[OPC_HI:OPC_LO]=opc; f[LEN_HI:LEN_LO]=len;
    f[SRCX_HI:SRCX_LO]=src_x; f[SRCY_HI:SRCY_LO]=src_y;
    f[DSTX_HI:DSTX_LO]=dst_x; f[DSTY_HI:DSTY_LO]=dst_y;
    f[PAY_HI:PAY_LO]=payload; return f;
  endfunction
  function automatic logic [XW-1:0] get_src_x(flit_t f); return f[SRCX_HI:SRCX_LO]; endfunction
  function automatic logic [YW-1:0] get_src_y(flit_t f); return f[SRCY_HI:SRCY_LO]; endfunction
  function automatic logic [XW-1:0] get_dst_x(flit_t f); return f[DSTX_HI:DSTX_LO]; endfunction
  function automatic logic [YW-1:0] get_dst_y(flit_t f); return f[DSTY_HI:DSTY_LO]; endfunction
  function automatic logic [VCW-1:0] get_vc(flit_t f);   return f[VC_HI:VC_LO]; endfunction
  function automatic logic [OPCW-1:0] get_opc(flit_t f); return f[OPC_HI:OPC_LO]; endfunction
  function automatic logic [LENW-1:0] get_len(flit_t f); return f[LEN_HI:LEN_LO]; endfunction
  function automatic logic [PAYW-1:0] get_pay(flit_t f); return f[PAY_HI:PAY_LO]; endfunction
endpackage
