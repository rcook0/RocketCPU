// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vyc_soc_roundtrip_tb.h for the primary calling header

#include "Vyc_soc_roundtrip_tb__pch.h"
#include "Vyc_soc_roundtrip_tb___024root.h"

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___eval_static(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___eval_final(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___dump_triggers__stl(Vyc_soc_roundtrip_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vyc_soc_roundtrip_tb___024root___eval_phase__stl(Vyc_soc_roundtrip_tb___024root* vlSelf);

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___eval_settle(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vyc_soc_roundtrip_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/yc_soc_roundtrip_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vyc_soc_roundtrip_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___dump_triggers__stl(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___stl_sequent__TOP__0(Vyc_soc_roundtrip_tb___024root* vlSelf);

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___eval_stl(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vyc_soc_roundtrip_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___stl_sequent__TOP__0(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__req;
    yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__req = 0;
    CData/*4:0*/ yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__req;
    yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__req = 0;
    // Body
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_v_p = 0U;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_v_p = 0U;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_v_p = 0U;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_v_p = 0U;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_f_p = 0ULL;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_f_p = 0ULL;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_f_p = 0ULL;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_f_p = 0ULL;
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_r_p 
        = (1U & ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full)) 
                 | (~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy))));
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_r_p 
        = (1U & ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full)) 
                 | (~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy))));
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_r_p 
        = (1U & ((~ (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full)) 
                 | (0U == (IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st))));
    yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__req 
        = (((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid) 
            << 4U) | ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full) 
                      << 1U));
    yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__req 
        = (((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_valid) 
            << 4U) | ((IData)(vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full) 
                      << 3U));
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
    vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__ready_sel_c = 0U;
    if (vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy) {
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
    }
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
                    goto __Vlabel1;
                }
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__k);
            }
            __Vlabel1: ;
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
                    goto __Vlabel2;
                }
                vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlSelfRef.yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__k);
            }
            __Vlabel2: ;
        }
    }
}

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___eval_triggers__stl(Vyc_soc_roundtrip_tb___024root* vlSelf);

VL_ATTR_COLD bool Vyc_soc_roundtrip_tb___024root___eval_phase__stl(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vyc_soc_roundtrip_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vyc_soc_roundtrip_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___dump_triggers__act(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge yc_soc_roundtrip_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge yc_soc_roundtrip_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___dump_triggers__nba(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge yc_soc_roundtrip_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge yc_soc_roundtrip_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___ctor_var_reset(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->yc_soc_roundtrip_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__cycles = 0;
    vlSelf->yc_soc_roundtrip_tb__DOT__unnamedblk1__DOT__f = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_valid = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_tx_flit = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_valid = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__sp_tx_flit = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__gnt = VL_RAND_RESET_I(5);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_flit = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__hold_tgt = VL_RAND_RESET_I(3);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_v_p = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_v_p = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_f_p = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__l_f_p = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__e_r_p = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__ready_sel_c = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__ptr = VL_RAND_RESET_I(3);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__k = 0;
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__rr__DOT____Vlvbound_h20e91b50__0 = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_e__DOT__g1__DOT__data_q = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r0__DOT__skid_l__DOT__g1__DOT__data_q = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__gnt = VL_RAND_RESET_I(5);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_flit = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__hold_tgt = VL_RAND_RESET_I(3);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_v_p = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_v_p = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_f_p = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_f_p = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__w_r_p = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__l_r_p = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__ready_sel_c = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__ptr = VL_RAND_RESET_I(3);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__k = 0;
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__rr__DOT____Vlvbound_h20e91b50__0 = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_w__DOT__g1__DOT__data_q = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__r1__DOT__skid_l__DOT__g1__DOT__data_q = VL_RAND_RESET_Q(64);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__cnt = VL_RAND_RESET_I(16);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__streaming = VL_RAND_RESET_I(1);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__cpu_niu__DOT__inter = VL_RAND_RESET_I(16);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__st = VL_RAND_RESET_I(2);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__dly = VL_RAND_RESET_I(8);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_x = VL_RAND_RESET_I(4);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__src_y = VL_RAND_RESET_I(4);
    vlSelf->yc_soc_roundtrip_tb__DOT__dut__DOT__spad__DOT__pay = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__yc_soc_roundtrip_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__yc_soc_roundtrip_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
