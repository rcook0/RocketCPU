// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vyc_soc_roundtrip_tb.h for the primary calling header

#include "Vyc_soc_roundtrip_tb__pch.h"
#include "Vyc_soc_roundtrip_tb__Syms.h"
#include "Vyc_soc_roundtrip_tb___024root.h"

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___eval_initial__TOP(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    vlSelfRef.yc_soc_roundtrip_tb__DOT__cycles = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x74726970U;
    __Vtemp_1[2U] = 0x6f756e64U;
    __Vtemp_1[3U] = 0x6f635f72U;
    __Vtemp_1[4U] = 0x73U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    VL_PRINTF_MT("-Info: tb/yc_soc_roundtrip_tb.sv:9: $dumpvar ignored, as Verilated without --trace\n");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___dump_triggers__stl(Vyc_soc_roundtrip_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vyc_soc_roundtrip_tb___024root___eval_triggers__stl(Vyc_soc_roundtrip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vyc_soc_roundtrip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyc_soc_roundtrip_tb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vyc_soc_roundtrip_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
