// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vyc_soc_roundtrip_tb.h for the primary calling header

#include "Vyc_soc_roundtrip_tb__pch.h"
#include "Vyc_soc_roundtrip_tb__Syms.h"
#include "Vyc_soc_roundtrip_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___dump_triggers__act(Vyc_soc_roundtrip_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vyc_soc_roundtrip_tb___024root___eval_triggers__act(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__yc_soc_roundtrip_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__yc_soc_roundtrip_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__yc_soc_roundtrip_tb__DOT__clk__0 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__yc_soc_roundtrip_tb__DOT__rst_n__0 
        = vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vyc_soc_roundtrip_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vyc_soc_roundtrip_tb___024root___nba_sequent__TOP__0(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vfunc_get_opc__0__Vfuncout;
    __Vfunc_get_opc__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_opc__0__f;
    __Vfunc_get_opc__0__f = 0;
    CData/*3:0*/ __Vfunc_get_src_x__1__Vfuncout;
    __Vfunc_get_src_x__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_src_x__1__f;
    __Vfunc_get_src_x__1__f = 0;
    CData/*3:0*/ __Vfunc_get_src_y__2__Vfuncout;
    __Vfunc_get_src_y__2__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_src_y__2__f;
    __Vfunc_get_src_y__2__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_x__3__Vfuncout;
    __Vfunc_get_dst_x__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_x__3__f;
    __Vfunc_get_dst_x__3__f = 0;
    CData/*3:0*/ __Vfunc_get_dst_y__4__Vfuncout;
    __Vfunc_get_dst_y__4__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_dst_y__4__f;
    __Vfunc_get_dst_y__4__f = 0;
    // Body
    if (((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n) 
         & (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full))) {
        vlSelfRef.yc_soc_roundtrip_tb__DOT__unnamedblk1__DOT__f 
            = vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__data_q;
        if (VL_LIKELY((((((2U == ([&]() {
                                            __Vfunc_get_opc__0__f 
                                                = vlSelfRef.yc_soc_roundtrip_tb__DOT__unnamedblk1__DOT__f;
                                            __Vfunc_get_opc__0__Vfuncout 
                                                = (0xfU 
                                                   & (IData)(
                                                             (__Vfunc_get_opc__0__f 
                                                              >> 0x38U)));
                                        }(), (IData)(__Vfunc_get_opc__0__Vfuncout))) 
                          & (1U == ([&]() {
                                            __Vfunc_get_src_x__1__f 
                                                = vlSelfRef.yc_soc_roundtrip_tb__DOT__unnamedblk1__DOT__f;
                                            __Vfunc_get_src_x__1__Vfuncout 
                                                = (0xfU 
                                                   & (IData)(
                                                             (__Vfunc_get_src_x__1__f 
                                                              >> 0x2cU)));
                                        }(), (IData)(__Vfunc_get_src_x__1__Vfuncout)))) 
                         & (0U == ([&]() {
                                        __Vfunc_get_src_y__2__f 
                                            = vlSelfRef.yc_soc_roundtrip_tb__DOT__unnamedblk1__DOT__f;
                                        __Vfunc_get_src_y__2__Vfuncout 
                                            = (0xfU 
                                               & (IData)(
                                                         (__Vfunc_get_src_y__2__f 
                                                          >> 0x28U)));
                                    }(), (IData)(__Vfunc_get_src_y__2__Vfuncout)))) 
                        & (0U == ([&]() {
                                    __Vfunc_get_dst_x__3__f 
                                        = vlSelfRef.yc_soc_roundtrip_tb__DOT__unnamedblk1__DOT__f;
                                    __Vfunc_get_dst_x__3__Vfuncout 
                                        = (0xfU & (IData)(
                                                          (__Vfunc_get_dst_x__3__f 
                                                           >> 0x24U)));
                                }(), (IData)(__Vfunc_get_dst_x__3__Vfuncout)))) 
                       & (0U == ([&]() {
                                __Vfunc_get_dst_y__4__f 
                                    = vlSelfRef.yc_soc_roundtrip_tb__DOT__unnamedblk1__DOT__f;
                                __Vfunc_get_dst_y__4__Vfuncout 
                                    = (0xfU & (IData)(
                                                      (__Vfunc_get_dst_y__4__f 
                                                       >> 0x20U)));
                            }(), (IData)(__Vfunc_get_dst_y__4__Vfuncout)))))) {
            VL_WRITEF_NX("PASS: SoC READ_RESP round-trip @ cycle %0d\n",0,
                         32,vlSelfRef.yc_soc_roundtrip_tb__DOT__cycles);
            VL_FINISH_MT("tb/yc_soc_roundtrip_tb.sv", 16, "");
        } else {
            VL_WRITEF_NX("[%0t] %%Error: yc_soc_roundtrip_tb.sv:18: Assertion failed in %Nyc_soc_roundtrip_tb.unnamedblk1: FAIL: unexpected response at CPU\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/yc_soc_roundtrip_tb.sv", 18, "");
            VL_WRITEF_NX("[%0t] %%Fatal: yc_soc_roundtrip_tb.sv:18: Assertion failed in %Nyc_soc_roundtrip_tb.unnamedblk1\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/yc_soc_roundtrip_tb.sv", 18, "", false);
        }
    }
    if (VL_UNLIKELY(VL_LTS_III(32, 0x1770U, vlSelfRef.yc_soc_roundtrip_tb__DOT__cycles))) {
        VL_WRITEF_NX("[%0t] %%Error: yc_soc_roundtrip_tb.sv:21: Assertion failed in %Nyc_soc_roundtrip_tb: FAIL: timeout\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/yc_soc_roundtrip_tb.sv", 21, "");
        VL_WRITEF_NX("[%0t] %%Fatal: yc_soc_roundtrip_tb.sv:21: Assertion failed in %Nyc_soc_roundtrip_tb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/yc_soc_roundtrip_tb.sv", 21, "", false);
    }
    if (vlSelfRef.yc_soc_roundtrip_tb__DOT__rst_n) {
        vlSelfRef.yc_soc_roundtrip_tb__DOT__cycles 
            = ((IData)(1U) + vlSelfRef.yc_soc_roundtrip_tb__DOT__cycles);
    }
}
