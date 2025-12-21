// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYC_SOC_ROUNDTRIP_TB__SYMS_H_
#define VERILATED_VYC_SOC_ROUNDTRIP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vyc_soc_roundtrip_tb.h"

// INCLUDE MODULE CLASSES
#include "Vyc_soc_roundtrip_tb___024root.h"
#include "Vyc_soc_roundtrip_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vyc_soc_roundtrip_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vyc_soc_roundtrip_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vyc_soc_roundtrip_tb___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_yc_soc_roundtrip_tb;
    VerilatedScope __Vscope_yc_soc_roundtrip_tb__unnamedblk1;

    // CONSTRUCTORS
    Vyc_soc_roundtrip_tb__Syms(VerilatedContext* contextp, const char* namep, Vyc_soc_roundtrip_tb* modelp);
    ~Vyc_soc_roundtrip_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
