// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vyc_soc_roundtrip_tb__pch.h"

//============================================================
// Constructors

Vyc_soc_roundtrip_tb::Vyc_soc_roundtrip_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vyc_soc_roundtrip_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vyc_soc_roundtrip_tb::Vyc_soc_roundtrip_tb(const char* _vcname__)
    : Vyc_soc_roundtrip_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vyc_soc_roundtrip_tb::~Vyc_soc_roundtrip_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vyc_soc_roundtrip_tb___024root___eval_debug_assertions(Vyc_soc_roundtrip_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vyc_soc_roundtrip_tb___024root___eval_static(Vyc_soc_roundtrip_tb___024root* vlSelf);
void Vyc_soc_roundtrip_tb___024root___eval_initial(Vyc_soc_roundtrip_tb___024root* vlSelf);
void Vyc_soc_roundtrip_tb___024root___eval_settle(Vyc_soc_roundtrip_tb___024root* vlSelf);
void Vyc_soc_roundtrip_tb___024root___eval(Vyc_soc_roundtrip_tb___024root* vlSelf);

void Vyc_soc_roundtrip_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vyc_soc_roundtrip_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vyc_soc_roundtrip_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vyc_soc_roundtrip_tb___024root___eval_static(&(vlSymsp->TOP));
        Vyc_soc_roundtrip_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vyc_soc_roundtrip_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vyc_soc_roundtrip_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vyc_soc_roundtrip_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vyc_soc_roundtrip_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vyc_soc_roundtrip_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vyc_soc_roundtrip_tb___024root___eval_final(Vyc_soc_roundtrip_tb___024root* vlSelf);

VL_ATTR_COLD void Vyc_soc_roundtrip_tb::final() {
    Vyc_soc_roundtrip_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vyc_soc_roundtrip_tb::hierName() const { return vlSymsp->name(); }
const char* Vyc_soc_roundtrip_tb::modelName() const { return "Vyc_soc_roundtrip_tb"; }
unsigned Vyc_soc_roundtrip_tb::threads() const { return 1; }
void Vyc_soc_roundtrip_tb::prepareClone() const { contextp()->prepareClone(); }
void Vyc_soc_roundtrip_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
