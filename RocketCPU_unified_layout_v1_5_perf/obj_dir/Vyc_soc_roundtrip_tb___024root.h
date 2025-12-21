// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vyc_soc_roundtrip_tb.h for the primary calling header

#ifndef VERILATED_VYC_SOC_ROUNDTRIP_TB___024ROOT_H_
#define VERILATED_VYC_SOC_ROUNDTRIP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vyc_soc_roundtrip_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vyc_soc_roundtrip_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__clk;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__rst_n;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_valid;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy;
    CData/*4:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt;
    CData/*2:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_v_p;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_v_p;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_r_p;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__ready_sel_c;
    CData/*2:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__ptr;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT____Vlvbound_h20e91b50__0;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy;
    CData/*4:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt;
    CData/*2:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_v_p;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_v_p;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_r_p;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_r_p;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__ready_sel_c;
    CData/*2:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__ptr;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT____Vlvbound_h20e91b50__0;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full;
    CData/*0:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__streaming;
    CData/*1:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st;
    CData/*7:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly;
    CData/*3:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x;
    CData/*3:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__yc_soc_roundtrip_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__yc_soc_roundtrip_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt;
    SData/*15:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter;
    IData/*31:0*/ yc_soc_roundtrip_tb__DOT__cycles;
    IData/*31:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__k;
    IData/*31:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx;
    IData/*31:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__k;
    IData/*31:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx;
    IData/*31:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__unnamedblk1__DOT__f;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_flit;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_flit;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_flit;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_f_p;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_f_p;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__data_q;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__data_q;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_flit;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_f_p;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_f_p;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__data_q;
    QData/*63:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hdef2e930__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vyc_soc_roundtrip_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vyc_soc_roundtrip_tb___024root(Vyc_soc_roundtrip_tb__Syms* symsp, const char* v__name);
    ~Vyc_soc_roundtrip_tb___024root();
    VL_UNCOPYABLE(Vyc_soc_roundtrip_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
