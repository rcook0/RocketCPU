// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vyc_soc_roundtrip_tb.h for the primary calling header

#ifndef VERILATED_VYC_SOC_ROUNDTRIP_TB___024UNIT_H_
#define VERILATED_VYC_SOC_ROUNDTRIP_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vyc_soc_roundtrip_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vyc_soc_roundtrip_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vyc_soc_roundtrip_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vyc_soc_roundtrip_tb___024unit(Vyc_soc_roundtrip_tb__Syms* symsp, const char* v__name);
    ~Vyc_soc_roundtrip_tb___024unit();
    VL_UNCOPYABLE(Vyc_soc_roundtrip_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
