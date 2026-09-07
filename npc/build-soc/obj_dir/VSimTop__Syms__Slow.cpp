// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSimTop__pch.h"

extern const VlVarTableEntry VSimTop___024root__VpiVarTable0[];
extern const VlScopeTableEntry VSimTop__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry VSimTop___024root__VpiVarTable0[] = {
    {"rf", offsetof(VSimTop___024root, SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY), 1, 1, {31, 0, 31, 0, 0, 0}},
};
extern const VlScopeTableEntry VSimTop__Syms__VpiScopeTable[] = {
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__axi42apb), "SimTop.asic.soc.axi42apb", "axi42apb", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cdc__sink__nodeIn_bsource), "SimTop.asic.soc.cdc.sink.nodeIn_bsource", "nodeIn_bsource", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cdc__sink__nodeIn_rsource), "SimTop.asic.soc.cdc.sink.nodeIn_rsource", "nodeIn_rsource", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_arsink), "SimTop.asic.soc.cdc.sink.nodeOut_arsink", "nodeOut_arsink", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_awsink), "SimTop.asic.soc.cdc.sink.nodeOut_awsink", "nodeOut_awsink", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_wsink), "SimTop.asic.soc.cdc.sink.nodeOut_wsink", "nodeOut_wsink", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cdc__source__nodeIn_bsink), "SimTop.asic.soc.cdc.source.nodeIn_bsink", "nodeIn_bsink", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cdc__source__nodeIn_rsink), "SimTop.asic.soc.cdc.source.nodeIn_rsink", "nodeIn_rsink", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_arsource), "SimTop.asic.soc.cdc.source.nodeOut_arsource", "nodeOut_arsource", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_awsource), "SimTop.asic.soc.cdc.source.nodeOut_awsource", "nodeOut_awsource", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_wsource), "SimTop.asic.soc.cdc.source.nodeOut_wsource", "nodeOut_wsource", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__asic__soc__cpu__core0__wbu__regfile), "SimTop.asic.soc.cpu.core0.wbu.regfile", "regfile", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__flash), "SimTop.flash", "flash", "<null>", -9, VerilatedScope::SCOPE_OTHER},
    {offsetof(VSimTop__Syms, __Vscopep_SimTop__flash__flash_cmd_i), "SimTop.flash.flash_cmd_i", "flash_cmd_i", "<null>", -9, VerilatedScope::SCOPE_OTHER},
};
#if defined(__GNUC__)
# pragma GCC diagnostic pop
#endif
VSimTop__Syms::VSimTop__Syms(VerilatedContext* contextp, const char* namep, VSimTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(373);
    // Setup sub module instances
    TOP____024unit.ctor(this, "$unit");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-11);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(VSimTop__Syms__VpiScopeTable, 14, this);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_SimTop__asic__soc__cpu__core0__wbu__regfile->varsInsertFromTable(VSimTop___024root__VpiVarTable0, 1, &(TOP));
}

VSimTop__Syms::~VSimTop__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__axi42apb, __Vscopep_SimTop__asic__soc__axi42apb = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cdc__sink__nodeIn_bsource, __Vscopep_SimTop__asic__soc__cdc__sink__nodeIn_bsource = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cdc__sink__nodeIn_rsource, __Vscopep_SimTop__asic__soc__cdc__sink__nodeIn_rsource = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_arsink, __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_arsink = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_awsink, __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_awsink = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_wsink, __Vscopep_SimTop__asic__soc__cdc__sink__nodeOut_wsink = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cdc__source__nodeIn_bsink, __Vscopep_SimTop__asic__soc__cdc__source__nodeIn_bsink = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cdc__source__nodeIn_rsink, __Vscopep_SimTop__asic__soc__cdc__source__nodeIn_rsink = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_arsource, __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_arsource = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_awsource, __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_awsource = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_wsource, __Vscopep_SimTop__asic__soc__cdc__source__nodeOut_wsource = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__asic__soc__cpu__core0__wbu__regfile, __Vscopep_SimTop__asic__soc__cpu__core0__wbu__regfile = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__flash, __Vscopep_SimTop__flash = nullptr);
    VL_DO_CLEAR(delete __Vscopep_SimTop__flash__flash_cmd_i, __Vscopep_SimTop__flash__flash_cmd_i = nullptr);
    // Tear down sub module instances
    TOP____024unit.dtor();
}
