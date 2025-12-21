// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vyc_soc_roundtrip_tb.h for the primary calling header

#include "Vyc_soc_roundtrip_tb__pch.h"
#include "Vyc_soc_roundtrip_tb__Syms.h"
#include "Vyc_soc_roundtrip_tb___024root.h"

void Vyc_soc_roundtrip_tb___024root___ctor_var_reset(Vyc_soc_roundtrip_tb___024root* vlSelf);

Vyc_soc_roundtrip_tb___024root::Vyc_soc_roundtrip_tb___024root(Vyc_soc_roundtrip_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vyc_soc_roundtrip_tb___024root___ctor_var_reset(this);
}

void Vyc_soc_roundtrip_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vyc_soc_roundtrip_tb___024root::~Vyc_soc_roundtrip_tb___024root() {
}
