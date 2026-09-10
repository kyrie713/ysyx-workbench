// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMTOP__SYMS_H_
#define VERILATED_VSIMTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSimTop.h"

// INCLUDE MODULE CLASSES
#include "VSimTop___024root.h"
#include "VSimTop___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VSimTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSimTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    VSimTop___024root              TOP;
    VSimTop___024unit              TOP____024unit;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_SimTop__asic__soc__axi42apb;
    VerilatedScope* __Vscopep_SimTop__asic__soc__cdc__sink__nodeIn_bsource;
    VerilatedScope* __Vscopep_SimTop__asic__soc__cdc__sink__nodeIn_rsource;
    VerilatedScope* __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_arsink;
    VerilatedScope* __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_awsink;
    VerilatedScope* __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_wsink;
    VerilatedScope* __Vscopep_SimTop__asic__soc__cdc__source__nodeIn_bsink;
    VerilatedScope* __Vscopep_SimTop__asic__soc__cdc__source__nodeIn_rsink;
    VerilatedScope* __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_arsource;
    VerilatedScope* __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_awsource;
    VerilatedScope* __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_wsource;
    VerilatedScope* __Vscopep_SimTop__flash;
    VerilatedScope* __Vscopep_SimTop__flash__flash_cmd_i;

    // CONSTRUCTORS
    VSimTop__Syms(VerilatedContext* contextp, const char* namep, VSimTop* modelp);
    ~VSimTop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
