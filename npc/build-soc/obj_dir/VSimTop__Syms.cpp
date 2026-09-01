// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSimTop__Syms.h"
#include "VSimTop.h"
#include "VSimTop___024root.h"
#include "VSimTop___024unit.h"

// FUNCTIONS
VSimTop__Syms::~VSimTop__Syms()
{
}

VSimTop__Syms::VSimTop__Syms(VerilatedContext* contextp, const char* namep, VSimTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-11);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_SimTop__asic__soc__axi42apb.configure(this, name(), "SimTop.asic.soc.axi42apb", "axi42apb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cdc__sink__nodeIn_bsource.configure(this, name(), "SimTop.asic.soc.cdc.sink.nodeIn_bsource", "nodeIn_bsource", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cdc__sink__nodeIn_rsource.configure(this, name(), "SimTop.asic.soc.cdc.sink.nodeIn_rsource", "nodeIn_rsource", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cdc__sink__nodeOut_arsink.configure(this, name(), "SimTop.asic.soc.cdc.sink.nodeOut_arsink", "nodeOut_arsink", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cdc__sink__nodeOut_awsink.configure(this, name(), "SimTop.asic.soc.cdc.sink.nodeOut_awsink", "nodeOut_awsink", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cdc__sink__nodeOut_wsink.configure(this, name(), "SimTop.asic.soc.cdc.sink.nodeOut_wsink", "nodeOut_wsink", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cdc__source__nodeIn_bsink.configure(this, name(), "SimTop.asic.soc.cdc.source.nodeIn_bsink", "nodeIn_bsink", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cdc__source__nodeIn_rsink.configure(this, name(), "SimTop.asic.soc.cdc.source.nodeIn_rsink", "nodeIn_rsink", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cdc__source__nodeOut_arsource.configure(this, name(), "SimTop.asic.soc.cdc.source.nodeOut_arsource", "nodeOut_arsource", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cdc__source__nodeOut_awsource.configure(this, name(), "SimTop.asic.soc.cdc.source.nodeOut_awsource", "nodeOut_awsource", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cdc__source__nodeOut_wsource.configure(this, name(), "SimTop.asic.soc.cdc.source.nodeOut_wsource", "nodeOut_wsource", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__asic__soc__cpu__core0__wbu__regfile.configure(this, name(), "SimTop.asic.soc.cpu.core0.wbu.regfile", "regfile", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__flash.configure(this, name(), "SimTop.flash", "flash", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__flash__flash_cmd_i.configure(this, name(), "SimTop.flash.flash_cmd_i", "flash_cmd_i", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_SimTop__asic__soc__cpu__core0__wbu__regfile.varInsert(__Vfinal,"rf", &(TOP.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
    }
}
