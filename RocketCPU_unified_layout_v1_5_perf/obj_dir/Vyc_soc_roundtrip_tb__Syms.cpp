// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vyc_soc_roundtrip_tb__pch.h"
#include "Vyc_soc_roundtrip_tb.h"
#include "Vyc_soc_roundtrip_tb___024root.h"
#include "Vyc_soc_roundtrip_tb___024unit.h"

// FUNCTIONS
Vyc_soc_roundtrip_tb__Syms::~Vyc_soc_roundtrip_tb__Syms()
{
}

Vyc_soc_roundtrip_tb__Syms::Vyc_soc_roundtrip_tb__Syms(VerilatedContext* contextp, const char* namep, Vyc_soc_roundtrip_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1032);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_yc_soc_roundtrip_tb.configure(this, name(), "yc_soc_roundtrip_tb", "yc_soc_roundtrip_tb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_yc_soc_roundtrip_tb__unnamedblk1.configure(this, name(), "yc_soc_roundtrip_tb.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
