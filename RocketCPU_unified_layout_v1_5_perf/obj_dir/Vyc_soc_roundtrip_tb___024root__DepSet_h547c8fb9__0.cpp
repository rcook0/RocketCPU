// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vyc_soc_roundtrip_tb.h for the primary calling header

#include "Vyc_soc_roundtrip_tb__pch.h"
#include "Vyc_soc_roundtrip_tb___024root.h"

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___eval_initial__TOP(Vyc_soc_roundtrip_tb___024root* vlSelf);
VlCoroutine Vyc_soc_roundtrip_tb___024root___eval_initial__TOP__Vtiming__0(Vyc_soc_roundtrip_tb___024root* vlSelf);
VlCoroutine Vyc_soc_roundtrip_tb___024root___eval_initial__TOP__Vtiming__1(Vyc_soc_roundtrip_tb___024root* vlSelf);

void Vyc_soc_roundtrip_tb___024root___eval_initial(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vyc_soc_roundtrip_tb___024root___eval_initial__TOP(vlSelf);
    Vyc_soc_roundtrip_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vyc_soc_roundtrip_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__yc_soc_roundtrip_tb__DOT__clk__0 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__yc_soc_roundtrip_tb__DOT__rst_n__0 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vyc_soc_roundtrip_tb___024root___eval_initial__TOP__Vtiming__0(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.yc_soc_roundtrip_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/yc_soc_roundtrip_tb.sv", 
                                             4);
        vlSelfRef.yc_soc_roundtrip_tb__DOT__clk = (1U 
                                                   & (~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vyc_soc_roundtrip_tb___024root___eval_initial__TOP__Vtiming__1(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_hdef2e930__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge yc_soc_roundtrip_tb.clk)", 
                                                         "tb/yc_soc_roundtrip_tb.sv", 
                                                         5);
    co_await vlSelfRef.__VtrigSched_hdef2e930__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge yc_soc_roundtrip_tb.clk)", 
                                                         "tb/yc_soc_roundtrip_tb.sv", 
                                                         5);
    co_await vlSelfRef.__VtrigSched_hdef2e930__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge yc_soc_roundtrip_tb.clk)", 
                                                         "tb/yc_soc_roundtrip_tb.sv", 
                                                         5);
    co_await vlSelfRef.__VtrigSched_hdef2e930__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge yc_soc_roundtrip_tb.clk)", 
                                                         "tb/yc_soc_roundtrip_tb.sv", 
                                                         5);
    co_await vlSelfRef.__VtrigSched_hdef2e930__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge yc_soc_roundtrip_tb.clk)", 
                                                         "tb/yc_soc_roundtrip_tb.sv", 
                                                         5);
    vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n = 1U;
}

void Vyc_soc_roundtrip_tb___024root___eval_act(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vyc_soc_roundtrip_tb___024root___nba_sequent__TOP__0(Vyc_soc_roundtrip_tb___024root* vlSelf);
void Vyc_soc_roundtrip_tb___024root___nba_sequent__TOP__1(Vyc_soc_roundtrip_tb___024root* vlSelf);

void Vyc_soc_roundtrip_tb___024root___eval_nba(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vyc_soc_roundtrip_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vyc_soc_roundtrip_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vyc_soc_roundtrip_tb___024root___nba_sequent__TOP__1(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__req;
    yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__req = 0;
    CData/*4:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__req;
    yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__req = 0;
    CData/*2:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__Vfuncout;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__f;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__f = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__dx;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__dx = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__dy;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__dy = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__6__Vfuncout;
    __Vfunc_get_dst_x__6__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__6__f;
    __Vfunc_get_dst_x__6__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__7__Vfuncout;
    __Vfunc_get_dst_y__7__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__7__f;
    __Vfunc_get_dst_y__7__f = 0;
    CData/*2:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__Vfuncout;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__f;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__f = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__dx;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__dx = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__dy;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__dy = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__9__Vfuncout;
    __Vfunc_get_dst_x__9__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__9__f;
    __Vfunc_get_dst_x__9__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__10__Vfuncout;
    __Vfunc_get_dst_y__10__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__10__f;
    __Vfunc_get_dst_y__10__f = 0;
    CData/*2:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__Vfuncout;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__f;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__f = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__dx;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__dx = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__dy;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__dy = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__12__Vfuncout;
    __Vfunc_get_dst_x__12__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__12__f;
    __Vfunc_get_dst_x__12__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__13__Vfuncout;
    __Vfunc_get_dst_y__13__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__13__f;
    __Vfunc_get_dst_y__13__f = 0;
    CData/*2:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__Vfuncout;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__f;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__f = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__dx;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__dx = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__dy;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__dy = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__15__Vfuncout;
    __Vfunc_get_dst_x__15__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__15__f;
    __Vfunc_get_dst_x__15__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__16__Vfuncout;
    __Vfunc_get_dst_y__16__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__16__f;
    __Vfunc_get_dst_y__16__f = 0;
    CData/*2:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__Vfuncout;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__f;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__f = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__dx;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__dx = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__dy;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__dy = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__18__Vfuncout;
    __Vfunc_get_dst_x__18__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__18__f;
    __Vfunc_get_dst_x__18__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__19__Vfuncout;
    __Vfunc_get_dst_y__19__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__19__f;
    __Vfunc_get_dst_y__19__f = 0;
    CData/*2:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__Vfuncout;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__f;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__f = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__dx;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__dx = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__dy;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__dy = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__21__Vfuncout;
    __Vfunc_get_dst_x__21__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__21__f;
    __Vfunc_get_dst_x__21__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__22__Vfuncout;
    __Vfunc_get_dst_y__22__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__22__f;
    __Vfunc_get_dst_y__22__f = 0;
    CData/*2:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__Vfuncout;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__f;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__f = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__dx;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__dx = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__dy;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__dy = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__24__Vfuncout;
    __Vfunc_get_dst_x__24__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__24__f;
    __Vfunc_get_dst_x__24__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__25__Vfuncout;
    __Vfunc_get_dst_y__25__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__25__f;
    __Vfunc_get_dst_y__25__f = 0;
    CData/*2:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__Vfuncout;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__f;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__f = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__dx;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__dx = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__dy;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__dy = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__27__Vfuncout;
    __Vfunc_get_dst_x__27__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__27__f;
    __Vfunc_get_dst_x__27__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__28__Vfuncout;
    __Vfunc_get_dst_y__28__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__28__f;
    __Vfunc_get_dst_y__28__f = 0;
    CData/*2:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__Vfuncout;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__f;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__f = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__dx;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__dx = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__dy;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__dy = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__30__Vfuncout;
    __Vfunc_get_dst_x__30__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__30__f;
    __Vfunc_get_dst_x__30__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__31__Vfuncout;
    __Vfunc_get_dst_y__31__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__31__f;
    __Vfunc_get_dst_y__31__f = 0;
    CData/*2:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__Vfuncout;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__f;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__f = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__dx;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__dx = 0;
    IData/*31:0*/ __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__dy;
    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__dy = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__33__Vfuncout;
    __Vfunc_get_dst_x__33__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__33__f;
    __Vfunc_get_dst_x__33__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__34__Vfuncout;
    __Vfunc_get_dst_y__34__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__34__f;
    __Vfunc_get_dst_y__34__f = 0;
    CData/*3:0*/ __Vfunc_get_opc__37__Vfuncout;
    __Vfunc_get_opc__37__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_opc__37__f;
    __Vfunc_get_opc__37__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__38__Vfuncout;
    __Vfunc_get_dst_x__38__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__38__f;
    __Vfunc_get_dst_x__38__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__39__Vfuncout;
    __Vfunc_get_dst_y__39__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__39__f;
    __Vfunc_get_dst_y__39__f = 0;
    CData/*3:0*/ __Vfunc_get_src_x__40__Vfuncout;
    __Vfunc_get_src_x__40__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_src_x__40__f;
    __Vfunc_get_src_x__40__f = 0;
    CData/*3:0*/ __Vfunc_get_src_y__41__Vfuncout;
    __Vfunc_get_src_y__41__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_src_y__41__f;
    __Vfunc_get_src_y__41__f = 0;
    IData/*31:0*/ __Vfunc_get_pay__42__Vfuncout;
    __Vfunc_get_pay__42__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_pay__42__f;
    __Vfunc_get_pay__42__f = 0;
    QData/*63:0*/ __Vfunc_build_flit__43__Vfuncout;
    __Vfunc_build_flit__43__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_build_flit__43__dst_x;
    __Vfunc_build_flit__43__dst_x = 0;
    CData/*3:0*/ __Vfunc_build_flit__43__dst_y;
    __Vfunc_build_flit__43__dst_y = 0;
    IData/*31:0*/ __Vfunc_build_flit__43__payload;
    __Vfunc_build_flit__43__payload = 0;
    QData/*63:0*/ __Vfunc_build_flit__43__f;
    __Vfunc_build_flit__43__f = 0;
    CData/*0:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy = 0;
    CData/*0:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full = 0;
    CData/*0:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full = 0;
    CData/*0:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy = 0;
    CData/*0:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full = 0;
    CData/*0:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full = 0;
    CData/*0:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid = 0;
    SData/*15:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter = 0;
    SData/*15:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt = 0;
    CData/*3:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x = 0;
    CData/*3:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y = 0;
    IData/*31:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay = 0;
    CData/*7:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly = 0;
    CData/*1:0*/ __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st = 0;
    // Body
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy;
    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy;
    if (vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n) {
        if ((0U != (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
            if ((1U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__ptr = 1U;
            }
            if ((2U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__ptr = 2U;
            }
            if ((4U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__ptr = 3U;
            }
            if ((8U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__ptr = 4U;
            }
            if ((0x10U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__ptr = 0U;
            }
        }
        if ((0U != (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
            if ((1U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__ptr = 1U;
            }
            if ((2U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__ptr = 2U;
            }
            if ((4U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__ptr = 3U;
            }
            if ((8U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__ptr = 4U;
            }
            if ((0x10U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__ptr = 0U;
            }
        }
    } else {
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__ptr = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__ptr = 0U;
    }
    if (vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n) {
        if (vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy) {
            if (vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__ready_sel_c) {
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_flit = 0ULL;
            __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__f = 0ULL;
            {
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__dx 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_x__6__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__f;
                            __Vfunc_get_dst_x__6__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_x__6__f 
                                                   >> 0x24U)));
                        }(), (IData)(__Vfunc_get_dst_x__6__Vfuncout)));
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__dy 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_y__7__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__f;
                            __Vfunc_get_dst_y__7__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_y__7__f 
                                                   >> 0x20U)));
                        }(), (IData)(__Vfunc_get_dst_y__7__Vfuncout)));
                if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__Vfuncout = 1U;
                    goto __Vlabel1;
                } else if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__dy)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__Vfuncout = 0U;
                    goto __Vlabel1;
                } else {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__Vfuncout = 4U;
                    goto __Vlabel1;
                }
                __Vlabel1: ;
            }
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt 
                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__5__Vfuncout;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy = 1U;
        } else if ((2U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_flit 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__data_q;
            __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__f 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__data_q;
            {
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__dx 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_x__9__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__f;
                            __Vfunc_get_dst_x__9__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_x__9__f 
                                                   >> 0x24U)));
                        }(), (IData)(__Vfunc_get_dst_x__9__Vfuncout)));
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__dy 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_y__10__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__f;
                            __Vfunc_get_dst_y__10__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_y__10__f 
                                                   >> 0x20U)));
                        }(), (IData)(__Vfunc_get_dst_y__10__Vfuncout)));
                if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__Vfuncout = 1U;
                    goto __Vlabel2;
                } else if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__dy)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__Vfuncout = 0U;
                    goto __Vlabel2;
                } else {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__Vfuncout = 4U;
                    goto __Vlabel2;
                }
                __Vlabel2: ;
            }
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt 
                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__8__Vfuncout;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy = 1U;
        } else if ((4U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_flit = 0ULL;
            __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__f = 0ULL;
            {
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__dx 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_x__12__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__f;
                            __Vfunc_get_dst_x__12__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_x__12__f 
                                                   >> 0x24U)));
                        }(), (IData)(__Vfunc_get_dst_x__12__Vfuncout)));
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__dy 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_y__13__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__f;
                            __Vfunc_get_dst_y__13__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_y__13__f 
                                                   >> 0x20U)));
                        }(), (IData)(__Vfunc_get_dst_y__13__Vfuncout)));
                if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__Vfuncout = 1U;
                    goto __Vlabel3;
                } else if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__dy)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__Vfuncout = 0U;
                    goto __Vlabel3;
                } else {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__Vfuncout = 4U;
                    goto __Vlabel3;
                }
                __Vlabel3: ;
            }
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt 
                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__11__Vfuncout;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy = 1U;
        } else if ((8U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_flit = 0ULL;
            __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__f = 0ULL;
            {
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__dx 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_x__15__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__f;
                            __Vfunc_get_dst_x__15__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_x__15__f 
                                                   >> 0x24U)));
                        }(), (IData)(__Vfunc_get_dst_x__15__Vfuncout)));
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__dy 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_y__16__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__f;
                            __Vfunc_get_dst_y__16__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_y__16__f 
                                                   >> 0x20U)));
                        }(), (IData)(__Vfunc_get_dst_y__16__Vfuncout)));
                if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__Vfuncout = 1U;
                    goto __Vlabel4;
                } else if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__dy)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__Vfuncout = 0U;
                    goto __Vlabel4;
                } else {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__Vfuncout = 4U;
                    goto __Vlabel4;
                }
                __Vlabel4: ;
            }
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt 
                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__14__Vfuncout;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy = 1U;
        } else if ((0x10U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_flit 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_flit;
            __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__f 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_flit;
            {
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__dx 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_x__18__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__f;
                            __Vfunc_get_dst_x__18__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_x__18__f 
                                                   >> 0x24U)));
                        }(), (IData)(__Vfunc_get_dst_x__18__Vfuncout)));
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__dy 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_y__19__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__f;
                            __Vfunc_get_dst_y__19__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_y__19__f 
                                                   >> 0x20U)));
                        }(), (IData)(__Vfunc_get_dst_y__19__Vfuncout)));
                if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__Vfuncout = 1U;
                    goto __Vlabel5;
                } else if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__dy)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__Vfuncout = 0U;
                    goto __Vlabel5;
                } else {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__Vfuncout = 4U;
                    goto __Vlabel5;
                }
                __Vlabel5: ;
            }
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt 
                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__route_xy__17__Vfuncout;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy = 1U;
        }
    } else {
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_flit = 0ULL;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt = 4U;
    }
    if (vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n) {
        if (vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy) {
            if (vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__ready_sel_c) {
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_flit = 0ULL;
            __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__f = 0ULL;
            {
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__dx 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_x__21__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__f;
                            __Vfunc_get_dst_x__21__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_x__21__f 
                                                   >> 0x24U)));
                        }(), (IData)(__Vfunc_get_dst_x__21__Vfuncout)));
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__dy 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_y__22__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__f;
                            __Vfunc_get_dst_y__22__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_y__22__f 
                                                   >> 0x20U)));
                        }(), (IData)(__Vfunc_get_dst_y__22__Vfuncout)));
                if ((1U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__Vfuncout = 1U;
                    goto __Vlabel6;
                } else if ((1U > __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__Vfuncout = 3U;
                    goto __Vlabel6;
                } else if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__dy)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__Vfuncout = 0U;
                    goto __Vlabel6;
                } else {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__Vfuncout = 4U;
                    goto __Vlabel6;
                }
                __Vlabel6: ;
            }
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt 
                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__20__Vfuncout;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy = 1U;
        } else if ((2U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_flit = 0ULL;
            __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__f = 0ULL;
            {
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__dx 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_x__24__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__f;
                            __Vfunc_get_dst_x__24__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_x__24__f 
                                                   >> 0x24U)));
                        }(), (IData)(__Vfunc_get_dst_x__24__Vfuncout)));
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__dy 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_y__25__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__f;
                            __Vfunc_get_dst_y__25__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_y__25__f 
                                                   >> 0x20U)));
                        }(), (IData)(__Vfunc_get_dst_y__25__Vfuncout)));
                if ((1U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__Vfuncout = 1U;
                    goto __Vlabel7;
                } else if ((1U > __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__Vfuncout = 3U;
                    goto __Vlabel7;
                } else if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__dy)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__Vfuncout = 0U;
                    goto __Vlabel7;
                } else {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__Vfuncout = 4U;
                    goto __Vlabel7;
                }
                __Vlabel7: ;
            }
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt 
                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__23__Vfuncout;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy = 1U;
        } else if ((4U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_flit = 0ULL;
            __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__f = 0ULL;
            {
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__dx 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_x__27__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__f;
                            __Vfunc_get_dst_x__27__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_x__27__f 
                                                   >> 0x24U)));
                        }(), (IData)(__Vfunc_get_dst_x__27__Vfuncout)));
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__dy 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_y__28__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__f;
                            __Vfunc_get_dst_y__28__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_y__28__f 
                                                   >> 0x20U)));
                        }(), (IData)(__Vfunc_get_dst_y__28__Vfuncout)));
                if ((1U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__Vfuncout = 1U;
                    goto __Vlabel8;
                } else if ((1U > __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__Vfuncout = 3U;
                    goto __Vlabel8;
                } else if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__dy)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__Vfuncout = 0U;
                    goto __Vlabel8;
                } else {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__Vfuncout = 4U;
                    goto __Vlabel8;
                }
                __Vlabel8: ;
            }
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt 
                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__26__Vfuncout;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy = 1U;
        } else if ((8U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_flit 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__data_q;
            __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__f 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__data_q;
            {
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__dx 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_x__30__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__f;
                            __Vfunc_get_dst_x__30__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_x__30__f 
                                                   >> 0x24U)));
                        }(), (IData)(__Vfunc_get_dst_x__30__Vfuncout)));
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__dy 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_y__31__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__f;
                            __Vfunc_get_dst_y__31__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_y__31__f 
                                                   >> 0x20U)));
                        }(), (IData)(__Vfunc_get_dst_y__31__Vfuncout)));
                if ((1U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__Vfuncout = 1U;
                    goto __Vlabel9;
                } else if ((1U > __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__Vfuncout = 3U;
                    goto __Vlabel9;
                } else if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__dy)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__Vfuncout = 0U;
                    goto __Vlabel9;
                } else {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__Vfuncout = 4U;
                    goto __Vlabel9;
                }
                __Vlabel9: ;
            }
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt 
                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__29__Vfuncout;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy = 1U;
        } else if ((0x10U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_flit 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_flit;
            __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__f 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_flit;
            {
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__dx 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_x__33__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__f;
                            __Vfunc_get_dst_x__33__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_x__33__f 
                                                   >> 0x24U)));
                        }(), (IData)(__Vfunc_get_dst_x__33__Vfuncout)));
                __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__dy 
                    = VL_EXTEND_II(32,4, ([&]() {
                            __Vfunc_get_dst_y__34__f 
                                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__f;
                            __Vfunc_get_dst_y__34__Vfuncout 
                                = (0xfU & (IData)((__Vfunc_get_dst_y__34__f 
                                                   >> 0x20U)));
                        }(), (IData)(__Vfunc_get_dst_y__34__Vfuncout)));
                if ((1U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__Vfuncout = 1U;
                    goto __Vlabel10;
                } else if ((1U > __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__dx)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__Vfuncout = 3U;
                    goto __Vlabel10;
                } else if ((0U < __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__dy)) {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__Vfuncout = 0U;
                    goto __Vlabel10;
                } else {
                    __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__Vfuncout = 4U;
                    goto __Vlabel10;
                }
                __Vlabel10: ;
            }
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt 
                = __Vfunc_yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__route_xy__32__Vfuncout;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy = 1U;
        }
    } else {
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_flit = 0ULL;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt = 4U;
    }
    if (vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n) {
        if ((2U == (((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_v_p) 
                     << 1U) | (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full)))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__data_q 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_f_p;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full = 1U;
        } else if ((1U == (((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_v_p) 
                            << 1U) | (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full)))) {
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full = 0U;
        } else if ((3U == (((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_v_p) 
                            << 1U) | (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full)))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__data_q 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_f_p;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full = 1U;
        }
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full 
            = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full;
        if ((2U == ((((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_v_p) 
                      & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_r_p)) 
                     << 1U) | ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy)) 
                               & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full))))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__data_q 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_f_p;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full = 1U;
        } else if ((1U == ((((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_v_p) 
                             & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_r_p)) 
                            << 1U) | ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy)) 
                                      & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full))))) {
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full = 0U;
        } else if ((3U == ((((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_v_p) 
                             & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_r_p)) 
                            << 1U) | ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy)) 
                                      & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full))))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__data_q 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_f_p;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full = 1U;
        }
        if (vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__streaming) {
            if (vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid) {
                if ((1U & (~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy)))) {
                    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid = 0U;
                }
            } else {
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter)));
                if ((1U <= (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter))) {
                    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter = 0U;
                    __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid = 1U;
                    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_flit = 0x1010010abcd0000ULL;
                }
            }
        } else if (vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid) {
            if ((1U & (~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy)))) {
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid = 0U;
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__streaming = 0U;
            }
        } else {
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt)));
            if ((4U == (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt))) {
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid = 1U;
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_flit = 0x1010010abcd0000ULL;
            }
        }
        if ((2U == ((((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_v_p) 
                      & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_r_p)) 
                     << 1U) | ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy)) 
                               & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full))))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__data_q 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_f_p;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full = 1U;
        } else if ((1U == ((((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_v_p) 
                             & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_r_p)) 
                            << 1U) | ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy)) 
                                      & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full))))) {
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full = 0U;
        } else if ((3U == ((((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_v_p) 
                             & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_r_p)) 
                            << 1U) | ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy)) 
                                      & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full))))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__data_q 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_f_p;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full = 1U;
        }
    } else {
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__data_q = 0ULL;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full 
            = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full;
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__data_q = 0ULL;
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt = 0U;
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__streaming = 0U;
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_flit = 0ULL;
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__data_q = 0ULL;
    }
    if (vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_valid = 0U;
            if (((((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full) 
                   & (1U == ([&]() {
                                        __Vfunc_get_opc__37__f 
                                            = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q;
                                        __Vfunc_get_opc__37__Vfuncout 
                                            = (0xfU 
                                               & (IData)(
                                                         (__Vfunc_get_opc__37__f 
                                                          >> 0x38U)));
                                    }(), (IData)(__Vfunc_get_opc__37__Vfuncout)))) 
                  & (1U == ([&]() {
                                    __Vfunc_get_dst_x__38__f 
                                        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q;
                                    __Vfunc_get_dst_x__38__Vfuncout 
                                        = (0xfU & (IData)(
                                                          (__Vfunc_get_dst_x__38__f 
                                                           >> 0x24U)));
                                }(), (IData)(__Vfunc_get_dst_x__38__Vfuncout)))) 
                 & (0U == ([&]() {
                                __Vfunc_get_dst_y__39__f 
                                    = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q;
                                __Vfunc_get_dst_y__39__Vfuncout 
                                    = (0xfU & (IData)(
                                                      (__Vfunc_get_dst_y__39__f 
                                                       >> 0x20U)));
                            }(), (IData)(__Vfunc_get_dst_y__39__Vfuncout))))) {
                __Vfunc_get_src_x__40__f = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q;
                __Vfunc_get_src_y__41__f = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q;
                __Vfunc_get_pay__42__f = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q;
                __Vfunc_get_src_x__40__Vfuncout = (0xfU 
                                                   & (IData)(
                                                             (__Vfunc_get_src_x__40__f 
                                                              >> 0x2cU)));
                __Vfunc_get_src_y__41__Vfuncout = (0xfU 
                                                   & (IData)(
                                                             (__Vfunc_get_src_y__41__f 
                                                              >> 0x28U)));
                __Vfunc_get_pay__42__Vfuncout = (IData)(__Vfunc_get_pay__42__f);
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x 
                    = __Vfunc_get_src_x__40__Vfuncout;
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y 
                    = __Vfunc_get_src_y__41__Vfuncout;
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay 
                    = __Vfunc_get_pay__42__Vfuncout;
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly = 0U;
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st))) {
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly)));
            if ((2U <= (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly))) {
                __Vfunc_build_flit__43__payload = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay;
                __Vfunc_build_flit__43__dst_y = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y;
                __Vfunc_build_flit__43__dst_x = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x;
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_valid = 1U;
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st = 2U;
                __Vfunc_build_flit__43__f = 0ULL;
                __Vfunc_build_flit__43__f = (0x1201100000000000ULL 
                                             | (0xfffffffffffULL 
                                                & __Vfunc_build_flit__43__f));
                __Vfunc_build_flit__43__f = ((0xfffff00000000000ULL 
                                              & __Vfunc_build_flit__43__f) 
                                             | (((QData)((IData)(__Vfunc_build_flit__43__dst_x)) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(__Vfunc_build_flit__43__dst_y)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vfunc_build_flit__43__payload)))));
                __Vfunc_build_flit__43__Vfuncout = __Vfunc_build_flit__43__f;
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_flit 
                    = __Vfunc_build_flit__43__Vfuncout;
            }
        } else if ((2U == (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st))) {
            if ((1U & (~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy)))) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_valid = 0U;
                __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st = 0U;
            }
        }
    } else {
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st = 0U;
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_valid = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_flit = 0ULL;
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x = 0U;
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y = 0U;
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay = 0U;
    }
    if (vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n) {
        if ((2U == ((((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_v_p) 
                      & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_r_p)) 
                     << 1U) | ((0U == (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st)) 
                               & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full))))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_f_p;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full = 1U;
        } else if ((1U == ((((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_v_p) 
                             & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_r_p)) 
                            << 1U) | ((0U == (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st)) 
                                      & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full))))) {
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full = 0U;
        } else if ((3U == ((((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_v_p) 
                             & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_r_p)) 
                            << 1U) | ((0U == (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st)) 
                                      & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full))))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_f_p;
            __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full = 1U;
        }
    } else {
        __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full = 0U;
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q = 0ULL;
    }
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy;
    yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__req 
        = (((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid) 
            << 4U) | ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full) 
                      << 1U));
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_v_p = 0U;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_v_p = 0U;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_f_p = 0ULL;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_f_p = 0ULL;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_r_p 
        = (1U & ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full)) 
                 | (~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy))));
    yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__req 
        = (((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_valid) 
            << 4U) | ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full) 
                      << 3U));
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_v_p = 0U;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_f_p = 0ULL;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_r_p 
        = (1U & ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full)) 
                 | (~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy))));
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt = 0U;
    if ((0U != (IData)(yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__req))) {
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__k = 0U;
        {
            while (VL_GTS_III(32, 5U, vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__k)) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
                    = VL_MODDIV_III(32, ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__ptr) 
                                         + vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__k), (IData)(5U));
                if (((4U >= (7U & vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)) 
                     && (1U & ((IData)(yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__req) 
                               >> (7U & vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))))) {
                    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT____Vlvbound_h20e91b50__0 = 1U;
                    if (VL_LIKELY((4U >= (7U & vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) {
                        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt 
                            = (((~ ((IData)(1U) << 
                                    (7U & vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))) 
                                & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt)) 
                               | (0x1fU & ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT____Vlvbound_h20e91b50__0) 
                                           << (7U & vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))));
                    }
                    goto __Vlabel11;
                }
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__k);
            }
            __Vlabel11: ;
        }
    }
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt = 0U;
    if ((0U != (IData)(yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__req))) {
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__k = 0U;
        {
            while (VL_GTS_III(32, 5U, vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__k)) {
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
                    = VL_MODDIV_III(32, ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__ptr) 
                                         + vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__k), (IData)(5U));
                if (((4U >= (7U & vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)) 
                     && (1U & ((IData)(yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__req) 
                               >> (7U & vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))))) {
                    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT____Vlvbound_h20e91b50__0 = 1U;
                    if (VL_LIKELY((4U >= (7U & vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)))) {
                        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt 
                            = (((~ ((IData)(1U) << 
                                    (7U & vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))) 
                                & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt)) 
                               | (0x1fU & ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT____Vlvbound_h20e91b50__0) 
                                           << (7U & vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx))));
                    }
                    goto __Vlabel12;
                }
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__k);
            }
            __Vlabel12: ;
        }
    }
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__ready_sel_c = 0U;
    if (vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy) {
        if ((4U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_v_p = 1U;
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_f_p 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_flit;
        }
        if ((1U & (~ ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt))) {
                    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_v_p = 1U;
                    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_f_p 
                        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_flit;
                }
            }
        }
        vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__ready_sel_c 
            = ((1U & ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt) 
                      >> 2U)) || ((1U & ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt) 
                                         >> 1U)) || 
                                  ((1U & (~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt))) 
                                   || (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_r_p))));
    }
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_v_p = 0U;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_f_p = 0ULL;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full 
        = __Vdly__yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_r_p 
        = (1U & ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full)) 
                 | (0U == (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st))));
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__ready_sel_c = 0U;
    if (vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy) {
        if ((1U & (~ ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt))) {
                if ((1U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt))) {
                    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_v_p = 1U;
                    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_f_p 
                        = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_flit;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt))) {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_v_p = 1U;
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_f_p 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_flit;
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__ready_sel_c 
                = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_r_p;
        } else {
            vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__ready_sel_c 
                = ((1U & (~ ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt) 
                             >> 1U))) || ((1U & (~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt))) 
                                          || (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_r_p)));
        }
    }
}

void Vyc_soc_roundtrip_tb___024root___timing_resume(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hdef2e930__0.resume(
                                                   "@(posedge yc_soc_roundtrip_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vyc_soc_roundtrip_tb___024root___timing_commit(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hdef2e930__0.commit(
                                                   "@(posedge yc_soc_roundtrip_tb.clk)");
    }
}

void Vyc_soc_roundtrip_tb___024root___eval_triggers__act(Vyc_soc_roundtrip_tb___024root* vlSelf);

bool Vyc_soc_roundtrip_tb___024root___eval_phase__act(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vyc_soc_roundtrip_tb___024root___eval_triggers__act(vlSelf);
    Vyc_soc_roundtrip_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vyc_soc_roundtrip_tb___024root___timing_resume(vlSelf);
        Vyc_soc_roundtrip_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vyc_soc_roundtrip_tb___024root___eval_phase__nba(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vyc_soc_roundtrip_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___dump_triggers__nba(Vyc_soc_roundtrip_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___dump_triggers__act(Vyc_soc_roundtrip_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vyc_soc_roundtrip_tb___024root___eval(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vyc_soc_roundtrip_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/yc_soc_roundtrip_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vyc_soc_roundtrip_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/yc_soc_roundtrip_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vyc_soc_roundtrip_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vyc_soc_roundtrip_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vyc_soc_roundtrip_tb___024root___eval_debug_assertions(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
