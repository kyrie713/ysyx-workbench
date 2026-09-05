// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


VL_ATTR_COLD void VSimTop___024root__trace_init_dtype____0(VSimTop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VSimTop___024root__trace_init_dtype____1(VSimTop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VSimTop___024root__trace_init_sub__TOP__0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_sub__TOP__0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+472,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"cpuClock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+474,0,"coreSel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"externalPins_mygpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"externalPins_mygpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+554,0,"externalPins_mygpio_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+555,0,"externalPins_mygpio_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+556,0,"externalPins_mygpio_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"externalPins_mygpio_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+558,0,"externalPins_mygpio_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+559,0,"externalPins_mygpio_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+560,0,"externalPins_mygpio_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+561,0,"externalPins_mygpio_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"externalPins_uart0_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"externalPins_uart0_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "SimTop", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+472,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"cpuClock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+474,0,"coreSel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"externalPins_mygpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"externalPins_mygpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+554,0,"externalPins_mygpio_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+555,0,"externalPins_mygpio_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+556,0,"externalPins_mygpio_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"externalPins_mygpio_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+558,0,"externalPins_mygpio_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+559,0,"externalPins_mygpio_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+560,0,"externalPins_mygpio_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+561,0,"externalPins_mygpio_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"externalPins_uart0_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"externalPins_uart0_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "asic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"cpuClock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+478,0,"resetn_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"uart0_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"uart0_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"spi_sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"spi_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+479,0,"spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"psram_sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+480,0,"psram_nss_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+390,0,"psram_dio_0",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"psram_dio_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"psram_dio_2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"psram_dio_3",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"mygpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"mygpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+554,0,"mygpio_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+555,0,"mygpio_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+556,0,"mygpio_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"mygpio_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+558,0,"mygpio_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+559,0,"mygpio_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+560,0,"mygpio_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+561,0,"mygpio_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+462,0,"soc_reset_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+463,0,"soc_reset_REG_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+562,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+562,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+563,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+563,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_10", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+564,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+564,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_11", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+565,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+565,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_12", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+566,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+566,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_13", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+567,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+567,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_14", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+568,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+568,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_15", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+569,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+569,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+570,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+570,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+571,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+571,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+572,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+572,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_5", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+573,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+573,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_6", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+574,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+574,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_7", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+575,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+575,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_8", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+576,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+576,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_out_pad_9", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+577,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+577,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_0_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+578,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+578,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_0_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+579,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+579,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_0_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+580,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+580,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_0_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+581,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+581,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_0_pad_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+582,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+582,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_0_pad_5", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+583,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+583,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_0_pad_6", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+584,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+584,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_0_pad_7", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+585,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+585,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_1_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+586,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+586,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_1_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+587,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+587,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_1_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+588,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+588,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_1_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+589,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+589,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_1_pad_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+590,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+590,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_1_pad_5", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+591,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+591,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_1_pad_6", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+592,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+592,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_1_pad_7", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+593,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+593,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_2_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+594,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+594,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_2_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+595,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+595,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_2_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+596,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+596,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_2_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+597,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+597,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_2_pad_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+598,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+598,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_2_pad_5", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+599,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+599,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_2_pad_6", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+600,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+600,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_2_pad_7", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+601,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+601,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_3_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+602,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+602,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_3_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+603,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+603,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_3_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+604,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+604,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_3_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+605,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+605,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_3_pad_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+606,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+606,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_3_pad_5", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+607,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+607,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_3_pad_6", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+608,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+608,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_3_pad_7", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+609,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+609,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_4_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+610,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+610,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_4_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+611,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+611,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_4_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+612,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+612,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_4_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+613,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+613,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_4_pad_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+614,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+614,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_4_pad_5", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+615,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+615,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_4_pad_6", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+616,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+616,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_4_pad_7", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+617,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+617,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_5_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+618,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+618,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_5_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+619,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+619,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_5_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+620,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+620,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_5_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+621,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+621,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_5_pad_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+622,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+622,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_5_pad_5", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+623,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+623,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_5_pad_6", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+624,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+624,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_5_pad_7", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+625,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+625,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_6_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+626,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+626,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_6_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+627,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+627,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_6_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+628,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+628,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_6_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+629,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+629,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_6_pad_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+630,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+630,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_6_pad_5", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+631,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+631,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_6_pad_6", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+632,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+632,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_6_pad_7", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+633,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+633,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_7_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+634,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+634,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_7_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+635,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+635,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_7_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+636,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+636,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_7_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_7_pad_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+638,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+638,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_7_pad_5", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+639,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+639,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_7_pad_6", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+640,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+640,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_mygpio_seg_7_pad_7", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+641,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+641,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+481,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+481,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+482,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+482,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_10", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+483,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+483,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_11", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+484,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+484,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_12", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+485,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+485,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_13", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_14", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+487,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+487,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_15", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+488,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+488,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+489,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+489,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+490,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+490,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+491,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+491,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_5", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+492,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+492,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_6", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+493,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+493,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_7", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+494,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+494,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_8", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+495,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+495,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mygpio_soc_mygpio_in_pad_9", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+496,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+496,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"xi_pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"xo_pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"xi_pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"xo_pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "psram_dio_list_pad_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+390,0,"pad",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"c2p_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+390,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+390,0,"pad",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"c2p_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+390,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "psram_dio_list_pad_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"pad",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"c2p_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"pad",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"c2p_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "psram_dio_list_pad_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"pad",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"c2p_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"pad",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"c2p_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "psram_dio_list_pad_pad_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"pad",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"c2p_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"pad",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"c2p_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "psram_nss_o_psram_nss_o_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "psram_nss_o_psram_nss_o_pad_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "psram_nss_o_psram_nss_o_pad_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "psram_sck_o_psram_sck_o_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "resetn_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+478,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+478,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+478,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+478,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "soc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"cpuClock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"uart0_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"uart0_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"spi_sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"spi_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+479,0,"spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"psram_sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+480,0,"psram_nss_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"psram_io_oe_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"psram_io_di_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"psram_io_do_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"mygpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"mygpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+554,0,"mygpio_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+555,0,"mygpio_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+556,0,"mygpio_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"mygpio_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+558,0,"mygpio_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+559,0,"mygpio_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+560,0,"mygpio_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+561,0,"mygpio_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+432,0,"cpu_reset_REG_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+433,0,"cpu_reset_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "DefDevice", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"auto_apply_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+396,0,"auto_apply_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"auto_apply_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"auto_apply_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 28,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"auto_apply_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"auto_apply_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"auto_apply_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+497,0,"auto_apply_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"extra_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"extra_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "muart", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+396,0,"in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+643,0,"in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+497,0,"in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"rtsn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"ctsn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+20,0,"dtr_pad_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"dsr_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"ri_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"dcd_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+498,0,"reg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+499,0,"reg_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"reg_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"reg_dat8_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+166,0,"reg_dat8_w_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+500,0,"reg_dat8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"rts_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "Uregs", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"wb_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+500,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+498,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+499,0,"wb_re_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"stx_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"srx_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"modem_inputs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"rts_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+20,0,"dtr_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"int_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+338,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"srx_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"ier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"iir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"fcr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"mcr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+339,0,"lcr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"msr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+340,0,"dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"scratch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"start_dlc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"lsr_mask_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"msi_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"dlc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"trigger_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"rx_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+342,0,"tx_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+343,0,"dlab",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"cts_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"dsr_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"ri_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"dcd_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+35,0,"loopback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"cts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"dsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"ri",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"dcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"cts_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+37,0,"dsr_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"ri_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"dcd_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"lsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+344,0,"lsr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"lsr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"lsr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+43,0,"lsr3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"lsr4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+345,0,"lsr5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+346,0,"lsr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"lsr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"lsr0r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"lsr1r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"lsr2r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"lsr3r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"lsr4r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"lsr5r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"lsr6r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"lsr7r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+465,0,"lsr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"rls_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"rda_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"ti_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"thre_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"ms_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+347,0,"tf_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"rf_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"rf_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"rf_error_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"rf_overrun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+348,0,"rf_push_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"rf_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"tf_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+350,0,"tstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"counter_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"thre_set_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"block_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+352,0,"block_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+353,0,"serial_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+354,0,"serial_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+466,0,"lsr_mask_condition",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"iir_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+468,0,"msr_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+469,0,"fifo_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"fifo_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"delayed_modem_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"lsr0_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"lsr1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"lsr2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+69,0,"lsr3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+70,0,"lsr4_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"lsr5_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"lsr6_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"lsr7_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"rls_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"thre_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"ms_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"ti_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"rda_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"rls_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"thre_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"ms_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"ti_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"rda_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"rls_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"rda_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"thre_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"ms_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"ti_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "i_uart_sync_flops", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+646,0,"Tp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+646,0,"width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+647,0,"init_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"stage1_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"stage1_clk_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+501,0,"async_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"sync_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"flop_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "receiver", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+339,0,"lcr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"rf_pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+354,0,"srx_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+338,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"rx_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+465,0,"lsr_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"counter_t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"rf_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"rf_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"rf_overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"rf_error_bit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"rstate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+348,0,"rf_push_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+355,0,"rcounter16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+356,0,"rbit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+357,0,"rshift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+358,0,"rparity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+359,0,"rparity_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+360,0,"rframing_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"rbit_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+361,0,"rparity_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"counter_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+92,0,"rf_push_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"rf_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+364,0,"rf_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+365,0,"break_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+366,0,"rcounter16_eq_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+367,0,"rcounter16_eq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+368,0,"rcounter16_eq_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+369,0,"rcounter16_minus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+648,0,"sr_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+649,0,"sr_rec_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+650,0,"sr_rec_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+651,0,"sr_rec_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+652,0,"sr_rec_stop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+653,0,"sr_check_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+654,0,"sr_rec_prepare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+655,0,"sr_end_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"sr_ca_lc_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+656,0,"sr_wait1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+657,0,"sr_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"toc_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"brc_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_PUSH_PREFIX(tracep, "fifo_rx", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+658,0,"fifo_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+659,0,"fifo_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+660,0,"fifo_pointer_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+661,0,"fifo_counter_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+348,0,"push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"fifo_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+465,0,"reset_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"error_bit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+161,0,"data8_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);

    VSimTop___024root__trace_init_dtype____0(vlSelf, tracep, "fifo", 0, c+93, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+373,0,"top_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"word0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"word1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"word2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"word3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+114,0,"word4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"word5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"word6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"word7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"word8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+119,0,"word9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+120,0,"word10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+121,0,"word11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+122,0,"word12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"word13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+124,0,"word14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"word15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_PUSH_PREFIX(tracep, "rfifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+660,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+662,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+659,0,"depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+348,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"dpra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+374,0,"di",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+161,0,"dpo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);

    VSimTop___024root__trace_init_dtype____1(vlSelf, tracep, "ram", 0, c+167, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "transmitter", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+339,0,"lcr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+347,0,"tf_push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+338,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+342,0,"tx_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+465,0,"lsr_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+353,0,"stx_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+350,0,"tstate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"tf_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+376,0,"bit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"shift_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"stx_o_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+379,0,"parity_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"tf_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"bit_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"tf_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+502,0,"tf_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"tf_overrun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+663,0,"s_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+664,0,"s_send_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+665,0,"s_send_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+666,0,"s_send_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+667,0,"s_send_stop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+668,0,"s_pop_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_PUSH_PREFIX(tracep, "fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+662,0,"fifo_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+659,0,"fifo_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+660,0,"fifo_pointer_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+661,0,"fifo_counter_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+347,0,"push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+342,0,"fifo_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+465,0,"reset_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+502,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"top_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "tfifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+660,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+662,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+659,0,"depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+347,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"dpra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"di",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+502,0,"dpo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);

    VSimTop___024root__trace_init_dtype____1(vlSelf, tracep, "ram", 0, c+403, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "DefDevice_1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"auto_apply_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+234,0,"auto_apply_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"auto_apply_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"auto_apply_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"auto_apply_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"auto_apply_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"auto_apply_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"auto_apply_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"extra_sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"extra_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"extra_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+479,0,"extra_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "DefDevice_2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+235,0,"auto_apply_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+236,0,"auto_apply_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"auto_apply_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"auto_apply_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"auto_apply_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"auto_apply_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+669,0,"auto_apply_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+670,0,"auto_apply_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"extra_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"extra_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+554,0,"extra_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+555,0,"extra_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+556,0,"extra_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"extra_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+558,0,"extra_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+559,0,"extra_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+560,0,"extra_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+561,0,"extra_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_PUSH_PREFIX(tracep, "mgpio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+235,0,"in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+236,0,"in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+643,0,"in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+669,0,"in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+670,0,"in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+671,0,"in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"gpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"gpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+554,0,"gpio_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+555,0,"gpio_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+556,0,"gpio_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"gpio_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+558,0,"gpio_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+559,0,"gpio_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+560,0,"gpio_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+561,0,"gpio_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "DefDevice_3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+237,0,"auto_apply_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+238,0,"auto_apply_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"auto_apply_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"auto_apply_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"auto_apply_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"auto_apply_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+504,0,"auto_apply_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"auto_apply_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"extra_sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+480,0,"extra_nss_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"extra_io_oe_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"extra_io_di_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"extra_io_do_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "mpsram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+237,0,"io_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+238,0,"io_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"io_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"io_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"io_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"io_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+504,0,"io_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"io_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"io_qspi_sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+480,0,"io_qspi_nss_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"io_qspi_io_oe_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"io_qspi_io_di_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"io_qspi_io_do_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"addrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"wdataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"wstrbReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+422,0,"setup",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "npsram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+672,0,"nss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+463,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"nmi_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"nmi_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"nmi_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"nmi_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"nmi_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+386,0,"nmi_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"psram_sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+480,0,"psram_nss_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"psram_io_oe_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"psram_io_di_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"psram_io_do_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"psram_irq_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+673,0,"FSM_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+674,0,"FSM_WE_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+675,0,"FSM_WE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+676,0,"FSM_RD_ST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+677,0,"FSM_RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+127,0,"r_cfg_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+128,0,"r_cfg_chd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"r_cfg_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"s_cfg_reg_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+387,0,"s_mem_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"s_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"s_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"r_rd_st",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"r_wr_st",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"r_xfer_data_bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"r_fsm_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"r_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"r_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"s_psram_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"s_psram_sio_oen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"s_disp_addr_ofst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"s_disp_xfer_bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"s_disp_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"s_init_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"s_core_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+388,0,"s_mem_valid_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+389,0,"nmi_valid_real",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"nmi_valid_real_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_psram_core", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+463,0,"rst_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+127,0,"cfg_wait_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+128,0,"cfg_chd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"cfg_init_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"mem_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"mem_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"mem_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"xfer_data_bit_cnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"rd_st_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"wr_st_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"init_done_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"idle_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"psram_sclk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"psram_ce_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+390,0,"psram_mosi_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"psram_miso_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"psram_sio2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"psram_sio3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"psram_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"psram_miso_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"psram_sio2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"psram_sio3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"psram_sio_oen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+678,0,"FSM_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+679,0,"FSM_RSTEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"FSM_RSTEN2RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"FSM_RST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+682,0,"FSM_RST2QE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+683,0,"FSM_QE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+684,0,"FSM_QE2IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+685,0,"FSM_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+686,0,"FSM_SEND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+687,0,"FSM_SEND_QPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+688,0,"FSM_RD_PRE_QPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+689,0,"FSM_RD_QPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+690,0,"FSM_WR_QPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+691,0,"FSM_RD2IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+692,0,"FSM_WR2IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+143,0,"r_fsm_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"r_fsm_state_tgt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+145,0,"r_boot_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+146,0,"r_xfer_ca",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"r_xfer_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"r_xfer_ca_bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"r_xfer_data_bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"r_xfer_byte_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"r_ce_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"r_rd_wait_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+152,0,"r_cfg_chd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+153,0,"r_dev_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+154,0,"r_wr_st",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+155,0,"r_rd_st",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"r_init_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+156,0,"s_xfer_new_byte_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"s_xfer_new_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_load_new_byte", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"xfer_data_bit_cnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+156,0,"xfer_new_byte_upd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"xfer_new_byte_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_wr_dispatcher", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"addr_ofst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"xfer_bit_cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "apbxbar", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+191,0,"auto_anon_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"auto_anon_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"auto_anon_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"auto_anon_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"auto_anon_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"auto_anon_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+457,0,"auto_anon_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"auto_anon_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+235,0,"auto_anon_out_3_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+236,0,"auto_anon_out_3_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"auto_anon_out_3_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"auto_anon_out_3_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"auto_anon_out_3_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"auto_anon_out_3_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+669,0,"auto_anon_out_3_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+670,0,"auto_anon_out_3_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+237,0,"auto_anon_out_2_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+238,0,"auto_anon_out_2_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"auto_anon_out_2_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"auto_anon_out_2_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"auto_anon_out_2_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"auto_anon_out_2_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+504,0,"auto_anon_out_2_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"auto_anon_out_2_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"auto_anon_out_1_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+396,0,"auto_anon_out_1_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"auto_anon_out_1_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"auto_anon_out_1_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 28,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"auto_anon_out_1_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"auto_anon_out_1_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"auto_anon_out_1_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+497,0,"auto_anon_out_1_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+233,0,"auto_anon_out_0_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+234,0,"auto_anon_out_0_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"auto_anon_out_0_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"auto_anon_out_0_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 29,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"auto_anon_out_0_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"auto_anon_out_0_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"auto_anon_out_0_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"auto_anon_out_0_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"sel_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+424,0,"sel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+425,0,"sel_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+426,0,"sel_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "axi42apb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"auto_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"auto_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"auto_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"auto_in_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"auto_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"auto_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"auto_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"auto_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"auto_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"auto_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+459,0,"auto_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"auto_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"auto_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"auto_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"auto_in_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"auto_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"auto_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"auto_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"auto_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+191,0,"auto_out_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"auto_out_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"auto_out_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"auto_out_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"auto_out_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"auto_out_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+457,0,"auto_out_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"auto_out_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+459,0,"nodeIn_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"nodeIn_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"nodeOut_penable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+206,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"accept_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"accept_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"is_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+506,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"araddr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"awaddr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"wdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"wstrb_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"nodeIn_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "axi4xbar", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"auto_anon_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"auto_anon_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"auto_anon_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"auto_anon_in_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"auto_anon_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"auto_anon_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"auto_anon_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"auto_anon_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"auto_anon_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"auto_anon_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+459,0,"auto_anon_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"auto_anon_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"auto_anon_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"auto_anon_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"auto_anon_in_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"auto_anon_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"auto_anon_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"auto_anon_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"auto_anon_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"auto_anon_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"auto_anon_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"auto_anon_out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"auto_anon_out_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"auto_anon_out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"auto_anon_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"auto_anon_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"auto_anon_out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"auto_anon_out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"auto_anon_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+459,0,"auto_anon_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"auto_anon_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"auto_anon_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"auto_anon_out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"auto_anon_out_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"auto_anon_out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"auto_anon_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"auto_anon_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"auto_anon_out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cdc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"auto_sink_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"auto_sink_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"auto_sink_out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"auto_sink_out_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"auto_sink_out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"auto_sink_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"auto_sink_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"auto_sink_out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"auto_sink_out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"auto_sink_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+459,0,"auto_sink_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"auto_sink_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"auto_sink_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"auto_sink_out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"auto_sink_out_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"auto_sink_out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"auto_sink_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"auto_sink_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"auto_sink_out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"auto_source_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"auto_source_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"auto_source_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"auto_source_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+436,0,"auto_source_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"auto_source_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"auto_source_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"auto_source_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"auto_source_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"auto_source_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"auto_source_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+253,0,"auto_source_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"auto_source_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"auto_source_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"auto_source_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"auto_source_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"auto_source_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"io_in_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"io_in_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"io_out_clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"io_out_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "sink", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"auto_in_awbits0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"auto_in_awbits0_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"auto_in_awbits1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"auto_in_awbits1_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+258,0,"auto_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"auto_in_awsource",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"auto_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"auto_in_awsink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"auto_in_wbits0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"auto_in_wbits0_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"auto_in_wbits1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"auto_in_wbits1_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+262,0,"auto_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"auto_in_wsource",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"auto_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"auto_in_wsink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"auto_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"auto_in_bsource",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"auto_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"auto_in_bsink",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"auto_in_arbits0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"auto_in_arbits0_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"auto_in_arbits1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"auto_in_arbits1_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+267,0,"auto_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"auto_in_arsource",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"auto_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"auto_in_arsink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"auto_in_rbits0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"auto_in_rbits1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"auto_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"auto_in_rsource",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"auto_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"auto_in_rsink",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"auto_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"auto_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"auto_out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"auto_out_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"auto_out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"auto_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"auto_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"auto_out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"auto_out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"auto_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+459,0,"auto_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"auto_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"auto_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"auto_out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"auto_out_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"auto_out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"auto_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"auto_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"auto_out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nodeIn_bsource", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+459,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"io_deq_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"io_deq_sink",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"enq_in_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+441,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+442,0,"enq_q_io_deq_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "enq_q", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+219,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+507,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+442,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+220,0,"valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "nodeIn_rsource", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"io_enq_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"io_deq_bits0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"io_deq_bits1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"io_deq_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"io_deq_sink",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"enq_in_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"io_deq_bits1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+444,0,"enq_q_io_deq_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "enq_q", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+221,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+508,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"io_enq_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+444,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"io_deq_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"elts_0_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"elts_1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "nodeOut_arsink", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"io_enq_bits0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"io_enq_bits0_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"io_enq_bits1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"io_enq_bits1_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+267,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"io_enq_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"io_enq_sink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"io_deq_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"io_deq_bits_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"io_deq_bits_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+445,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+446,0,"deq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "io_deq_q", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+446,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+509,0,"io_enq_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+447,0,"io_enq_bits_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"io_deq_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"io_deq_bits_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"elts_0_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"elts_0_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+225,0,"elts_1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"elts_1_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "nodeOut_awsink", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"io_enq_bits0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"io_enq_bits0_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"io_enq_bits1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"io_enq_bits1_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+258,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"io_enq_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"io_enq_sink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"io_deq_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"io_deq_bits_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"io_deq_bits_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+448,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+449,0,"deq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "io_deq_q", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+449,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+510,0,"io_enq_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+450,0,"io_enq_bits_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"io_deq_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"io_deq_bits_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"elts_0_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"elts_0_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+228,0,"elts_1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+229,0,"elts_1_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "nodeOut_wsink", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"io_enq_bits0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"io_enq_bits0_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"io_enq_bits1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"io_enq_bits1_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+262,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"io_enq_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"io_enq_sink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"io_deq_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"io_deq_bits_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+451,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+452,0,"deq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "io_deq_q", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+452,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+511,0,"io_enq_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+512,0,"io_enq_bits_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"io_deq_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"io_deq_bits_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+230,0,"valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"elts_0_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"elts_0_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+231,0,"elts_1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"elts_1_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "source", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"auto_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"auto_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"auto_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"auto_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+436,0,"auto_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"auto_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"auto_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"auto_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"auto_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"auto_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"auto_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+253,0,"auto_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"auto_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"auto_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"auto_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"auto_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"auto_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"auto_out_awbits0_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"auto_out_awbits0_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"auto_out_awbits1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"auto_out_awbits1_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+258,0,"auto_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"auto_out_awsource",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"auto_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"auto_out_awsink",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"auto_out_wbits0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"auto_out_wbits0_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"auto_out_wbits1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"auto_out_wbits1_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+262,0,"auto_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"auto_out_wsource",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"auto_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"auto_out_wsink",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"auto_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"auto_out_bsource",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"auto_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"auto_out_bsink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"auto_out_arbits0_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"auto_out_arbits0_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"auto_out_arbits1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"auto_out_arbits1_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+267,0,"auto_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"auto_out_arsource",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"auto_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"auto_out_arsink",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"auto_out_rbits0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"auto_out_rbits1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"auto_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"auto_out_rsource",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"auto_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"auto_out_rsink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "nodeIn_bsink", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"io_enq_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"io_enq_sink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+441,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"deq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "nodeIn_rsink", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"io_enq_bits0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"io_enq_bits1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"io_enq_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"io_enq_sink",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"io_deq_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"deq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "nodeOut_arsource", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+253,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"io_enq_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"io_enq_bits_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"io_deq_bits0_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"io_deq_bits0_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"io_deq_bits1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"io_deq_bits1_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+267,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"io_deq_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"io_deq_sink",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+453,0,"enq_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+270,0,"enq_in_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+267,0,"enq_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+445,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"io_deq_bits1_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"io_deq_bits1_rsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "nodeOut_awsource", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"io_enq_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"io_enq_bits_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"io_deq_bits0_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"io_deq_bits0_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"io_deq_bits1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"io_deq_bits1_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+258,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"io_deq_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"io_deq_sink",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+454,0,"enq_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+270,0,"enq_in_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+258,0,"enq_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+448,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"io_deq_bits1_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"io_deq_bits1_rsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "nodeOut_wsource", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+436,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"io_enq_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"io_enq_bits_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"io_deq_bits0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"io_deq_bits0_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"io_deq_bits1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"io_deq_bits1_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+262,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"io_deq_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"io_deq_sink",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+455,0,"enq_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+270,0,"enq_in_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+262,0,"enq_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+451,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"io_deq_bits1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"io_deq_bits1_rstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cpu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"auto_master_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"auto_master_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"auto_master_out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"auto_master_out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+436,0,"auto_master_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"auto_master_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"auto_master_out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"auto_master_out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"auto_master_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"auto_master_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"auto_master_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+253,0,"auto_master_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"auto_master_out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"auto_master_out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"auto_master_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"auto_master_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"auto_master_out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "bridge0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"io_ifu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+272,0,"io_ifu_reqValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+513,0,"io_ifu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+456,0,"io_ifu_respValid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"io_lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+273,0,"io_lsu_reqValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"io_lsu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+514,0,"io_lsu_respValid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+274,0,"io_lsu_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"io_lsu_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"io_lsu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"io_lsu_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+436,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+253,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+276,0,"isValidLoad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"isValidStore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+277,0,"stateI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+278,0,"stateD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"io_master_bready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+279,0,"lsuRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+456,0,"instReturn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+280,0,"io_ifu_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cmp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"io_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"io_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"io_out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"io_out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+436,0,"io_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"io_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"io_out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"io_out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"io_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"io_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"io_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+253,0,"io_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"io_out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"io_out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"io_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"io_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"io_out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"io_in_0_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"io_in_0_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"io_in_0_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"io_in_0_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+436,0,"io_in_0_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"io_in_0_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"io_in_0_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"io_in_0_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"io_in_0_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"io_in_0_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"io_in_0_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+253,0,"io_in_0_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"io_in_0_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"io_in_0_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"io_in_0_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"io_in_0_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"io_in_0_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "core0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+272,0,"io_ifu_reqValid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"io_ifu_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+456,0,"io_ifu_respValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+513,0,"io_ifu_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+273,0,"io_lsu_reqValid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"io_lsu_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+274,0,"io_lsu_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"io_lsu_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"io_lsu_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"io_lsu_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+514,0,"io_lsu_respValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"io_lsu_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"PC_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"ALU_OUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+515,0,"R1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"R2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"load_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"RegWriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+516,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+282,0,"Reg_WE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+283,0,"I_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+287,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"R_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+289,0,"I_TYPE_ARITH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+290,0,"L_TYPE_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+291,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+292,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+293,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+294,0,"MemWEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+295,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+296,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+297,0,"U_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+298,0,"R_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"l_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+300,0,"l_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+301,0,"I_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+302,0,"S_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+303,0,"S_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+304,0,"I_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+305,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+306,0,"ifu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+307,0,"lsu_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+308,0,"commit_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "exu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"R_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+293,0,"I_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+291,0,"S_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+295,0,"B_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+296,0,"J_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+292,0,"U_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+298,0,"R_add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+301,0,"I_add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+283,0,"I_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+300,0,"l_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"l_lw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+515,0,"rdata_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"rdata_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+287,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"ALU_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "idu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+309,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"R_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+289,0,"I_TYPE_ARITH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+290,0,"L_TYPE_LOAD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+291,0,"S_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+292,0,"U_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+293,0,"I_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+294,0,"MemWEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+295,0,"B_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+296,0,"J_TYPE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+283,0,"I_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+297,0,"U_lui",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+298,0,"R_add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"l_lw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+300,0,"l_lbu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+301,0,"I_add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+302,0,"S_sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+303,0,"S_sb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+304,0,"I_ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+287,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"r1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"r2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+313,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"immS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"immB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ifu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+694,0,"RANDOM_REQ_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+695,0,"MAX_REQ_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+272,0,"ifu_reqValid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"ifu_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+456,0,"ifu_respValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+513,0,"ifu_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+305,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+306,0,"inst_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+308,0,"inst_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+696,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+697,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+698,0,"EXEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+318,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+305,0,"inst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+319,0,"lfsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"req_delay_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lsu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+694,0,"RANDOM_REQ_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+695,0,"MAX_REQ_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+306,0,"inst_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"R2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"ALU_OUT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"l_lw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+300,0,"l_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+303,0,"S_sb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+302,0,"S_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+273,0,"lsu_reqValid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"lsu_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+274,0,"lsu_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"lsu_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"lsu_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"lsu_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+514,0,"lsu_respValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"lsu_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"load_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+307,0,"lsu_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+696,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+697,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+698,0,"RESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"load_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"lfsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"req_delay_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+325,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"is_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "wbu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+699,0,"RESET_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+308,0,"inst_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"ALU_OUT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"load_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"R_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+289,0,"I_TYPE_ARITH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+293,0,"I_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+292,0,"U_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+296,0,"J_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+283,0,"I_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"l_lw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+300,0,"l_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"r1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"r2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+515,0,"R1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"R2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+516,0,"a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"PC_plus_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"RegWriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+282,0,"Reg_WE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "regfile", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+661,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+700,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+282,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"raddr_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"raddr_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+515,0,"rdata_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"rdata_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+516,0,"debug_a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "rf", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+517+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "spi_soc_spi_miso_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+479,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+479,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+479,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+479,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "spi_spi_mosi_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "spi_spi_sck_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "spi_spi_ss_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uart0_soc_uart0_rx_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"pad",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"p2c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uart0_uart0_tx_pad", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"pad",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+477,0,"c2p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "espPsram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+660,0,"nss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"sck_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"nss_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+390,0,"dio_0",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"dio_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"dio_2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"dio_3",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "psram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+701,0,"ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"csn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"sio",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+702,0,"MEM_DEPTH_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+703,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+663,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+664,0,"S_CMD_SPI_RECV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+665,0,"S_CMD_QPI_RECV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+666,0,"S_ADDR_RECEIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+667,0,"S_DUMMY_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+668,0,"S_DATA_XFER_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+704,0,"S_DATA_XFER_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"r_fsm_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+240,0,"command_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+241,0,"current_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+242,0,"bit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+243,0,"byte_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"dummy_cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+245,0,"io_output_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"qspi_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+247,0,"qspi_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"qspi_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "flash", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"sck",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"mosi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+479,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+329,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+331,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+332,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+550,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+551,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+552,0,"data_bswap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "flash_cmd_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+551,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+550,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_init_dtype_sub____0(VSimTop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VSimTop___024root__trace_init_dtype____0(VSimTop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_dtype____0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSimTop___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VSimTop___024root__trace_init_dtype_sub____0(VSimTop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_dtype_sub____0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 15, 0);
    for (int i = 0; i < 16; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (15 - i), 2,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_init_dtype_sub____1(VSimTop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VSimTop___024root__trace_init_dtype____1(VSimTop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_dtype____1\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSimTop___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VSimTop___024root__trace_init_dtype_sub____1(VSimTop___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_dtype_sub____1\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 15, 0);
    for (int i = 0; i < 16; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (15 - i), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_init_top(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_top\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSimTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VSimTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSimTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSimTop___024root__trace_register(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_register\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VSimTop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VSimTop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VSimTop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VSimTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSimTop___024root__trace_const_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSimTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_const_0\n"); );
    // Body
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VSimTop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSimTop___024root__trace_const_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_const_0_sub_0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+553,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out),16);
    bufp->fullCData(oldp+554,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0),8);
    bufp->fullCData(oldp+555,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1),8);
    bufp->fullCData(oldp+556,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2),8);
    bufp->fullCData(oldp+557,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3),8);
    bufp->fullCData(oldp+558,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4),8);
    bufp->fullCData(oldp+559,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5),8);
    bufp->fullCData(oldp+560,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6),8);
    bufp->fullCData(oldp+561,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7),8);
    bufp->fullBit(oldp+562,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out))));
    bufp->fullBit(oldp+563,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 1U))));
    bufp->fullBit(oldp+564,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+565,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+566,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+567,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+568,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+569,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+570,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 2U))));
    bufp->fullBit(oldp+571,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 3U))));
    bufp->fullBit(oldp+572,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 4U))));
    bufp->fullBit(oldp+573,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 5U))));
    bufp->fullBit(oldp+574,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 6U))));
    bufp->fullBit(oldp+575,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 7U))));
    bufp->fullBit(oldp+576,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 8U))));
    bufp->fullBit(oldp+577,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 9U))));
    bufp->fullBit(oldp+578,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0))));
    bufp->fullBit(oldp+579,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 1U))));
    bufp->fullBit(oldp+580,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 2U))));
    bufp->fullBit(oldp+581,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 3U))));
    bufp->fullBit(oldp+582,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 4U))));
    bufp->fullBit(oldp+583,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 5U))));
    bufp->fullBit(oldp+584,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 6U))));
    bufp->fullBit(oldp+585,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 7U))));
    bufp->fullBit(oldp+586,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1))));
    bufp->fullBit(oldp+587,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 1U))));
    bufp->fullBit(oldp+588,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 2U))));
    bufp->fullBit(oldp+589,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 3U))));
    bufp->fullBit(oldp+590,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 4U))));
    bufp->fullBit(oldp+591,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 5U))));
    bufp->fullBit(oldp+592,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 6U))));
    bufp->fullBit(oldp+593,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 7U))));
    bufp->fullBit(oldp+594,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2))));
    bufp->fullBit(oldp+595,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 1U))));
    bufp->fullBit(oldp+596,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 2U))));
    bufp->fullBit(oldp+597,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 3U))));
    bufp->fullBit(oldp+598,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 4U))));
    bufp->fullBit(oldp+599,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 5U))));
    bufp->fullBit(oldp+600,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 6U))));
    bufp->fullBit(oldp+601,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 7U))));
    bufp->fullBit(oldp+602,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3))));
    bufp->fullBit(oldp+603,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 1U))));
    bufp->fullBit(oldp+604,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 2U))));
    bufp->fullBit(oldp+605,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 3U))));
    bufp->fullBit(oldp+606,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 4U))));
    bufp->fullBit(oldp+607,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 5U))));
    bufp->fullBit(oldp+608,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 6U))));
    bufp->fullBit(oldp+609,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 7U))));
    bufp->fullBit(oldp+610,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4))));
    bufp->fullBit(oldp+611,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 1U))));
    bufp->fullBit(oldp+612,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 2U))));
    bufp->fullBit(oldp+613,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 3U))));
    bufp->fullBit(oldp+614,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 4U))));
    bufp->fullBit(oldp+615,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 5U))));
    bufp->fullBit(oldp+616,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 6U))));
    bufp->fullBit(oldp+617,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 7U))));
    bufp->fullBit(oldp+618,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5))));
    bufp->fullBit(oldp+619,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 1U))));
    bufp->fullBit(oldp+620,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 2U))));
    bufp->fullBit(oldp+621,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 3U))));
    bufp->fullBit(oldp+622,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 4U))));
    bufp->fullBit(oldp+623,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 5U))));
    bufp->fullBit(oldp+624,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 6U))));
    bufp->fullBit(oldp+625,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 7U))));
    bufp->fullBit(oldp+626,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6))));
    bufp->fullBit(oldp+627,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 1U))));
    bufp->fullBit(oldp+628,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 2U))));
    bufp->fullBit(oldp+629,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 3U))));
    bufp->fullBit(oldp+630,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 4U))));
    bufp->fullBit(oldp+631,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 5U))));
    bufp->fullBit(oldp+632,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 6U))));
    bufp->fullBit(oldp+633,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 7U))));
    bufp->fullBit(oldp+634,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7))));
    bufp->fullBit(oldp+635,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 1U))));
    bufp->fullBit(oldp+636,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 2U))));
    bufp->fullBit(oldp+637,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 3U))));
    bufp->fullBit(oldp+638,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 4U))));
    bufp->fullBit(oldp+639,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 5U))));
    bufp->fullBit(oldp+640,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 6U))));
    bufp->fullBit(oldp+641,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 7U))));
    bufp->fullBit(oldp+642,(1U));
    bufp->fullCData(oldp+643,(1U),3);
    bufp->fullBit(oldp+644,(0U));
    bufp->fullCData(oldp+645,(8U),4);
    bufp->fullIData(oldp+646,(1U),32);
    bufp->fullBit(oldp+647,(1U));
    bufp->fullCData(oldp+648,(0U),4);
    bufp->fullCData(oldp+649,(1U),4);
    bufp->fullCData(oldp+650,(2U),4);
    bufp->fullCData(oldp+651,(3U),4);
    bufp->fullCData(oldp+652,(4U),4);
    bufp->fullCData(oldp+653,(5U),4);
    bufp->fullCData(oldp+654,(6U),4);
    bufp->fullCData(oldp+655,(7U),4);
    bufp->fullCData(oldp+656,(9U),4);
    bufp->fullCData(oldp+657,(0x0aU),4);
    bufp->fullIData(oldp+658,(0x0000000bU),32);
    bufp->fullIData(oldp+659,(0x00000010U),32);
    bufp->fullIData(oldp+660,(4U),32);
    bufp->fullIData(oldp+661,(5U),32);
    bufp->fullIData(oldp+662,(8U),32);
    bufp->fullCData(oldp+663,(0U),3);
    bufp->fullCData(oldp+664,(1U),3);
    bufp->fullCData(oldp+665,(2U),3);
    bufp->fullCData(oldp+666,(3U),3);
    bufp->fullCData(oldp+667,(4U),3);
    bufp->fullCData(oldp+668,(5U),3);
    bufp->fullBit(oldp+669,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_pready));
    bufp->fullIData(oldp+670,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_prdata),32);
    bufp->fullBit(oldp+671,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__in_pslverr));
    bufp->fullIData(oldp+672,(3U),32);
    bufp->fullCData(oldp+673,(0U),6);
    bufp->fullCData(oldp+674,(1U),6);
    bufp->fullCData(oldp+675,(2U),6);
    bufp->fullCData(oldp+676,(3U),6);
    bufp->fullCData(oldp+677,(4U),6);
    bufp->fullCData(oldp+678,(0U),5);
    bufp->fullCData(oldp+679,(1U),5);
    bufp->fullCData(oldp+680,(2U),5);
    bufp->fullCData(oldp+681,(3U),5);
    bufp->fullCData(oldp+682,(4U),5);
    bufp->fullCData(oldp+683,(5U),5);
    bufp->fullCData(oldp+684,(6U),5);
    bufp->fullCData(oldp+685,(7U),5);
    bufp->fullCData(oldp+686,(8U),5);
    bufp->fullCData(oldp+687,(9U),5);
    bufp->fullCData(oldp+688,(0x0aU),5);
    bufp->fullCData(oldp+689,(0x0bU),5);
    bufp->fullCData(oldp+690,(0x0cU),5);
    bufp->fullCData(oldp+691,(0x0dU),5);
    bufp->fullCData(oldp+692,(0x0eU),5);
    bufp->fullCData(oldp+693,(0U),8);
    bufp->fullIData(oldp+694,(0U),32);
    bufp->fullIData(oldp+695,(3U),32);
    bufp->fullCData(oldp+696,(0U),2);
    bufp->fullCData(oldp+697,(1U),2);
    bufp->fullCData(oldp+698,(2U),2);
    bufp->fullIData(oldp+699,(0x30000000U),32);
    bufp->fullIData(oldp+700,(0x00000020U),32);
    bufp->fullIData(oldp+701,(0U),32);
    bufp->fullIData(oldp+702,(0x00800000U),32);
    bufp->fullIData(oldp+703,(0x00000018U),32);
    bufp->fullCData(oldp+704,(6U),3);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSimTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_0\n"); );
    // Body
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VSimTop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_dtype____0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 16>& __VdtypeVar);
VL_ATTR_COLD void VSimTop___024root__trace_full_dtype____1(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar);
extern const VlWide<16>/*511:0*/ VSimTop__ConstPool__CONST_haf0ddab7_0;

VL_ATTR_COLD void VSimTop___024root__trace_full_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_0_sub_0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__i),32);
    bufp->fullIData(oldp+1,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT),32);
    bufp->fullIData(oldp+3,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+4,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wmask),4);
    bufp->fullIData(oldp+5,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_araddr),32);
    bufp->fullIData(oldp+6,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2),32);
    bufp->fullIData(oldp+7,((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw)
                               ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg
                               : (0x000000ffU & ((- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu))) 
                                                 & ((2U 
                                                     & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                                      ? 
                                                     (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                                      >> 0x00000018U)
                                                      : 
                                                     (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                                      >> 0x00000010U))
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                                      ? 
                                                     (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                                      >> 8U)
                                                      : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg))))) 
                             & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_done))))),32);
    bufp->fullIData(oldp+8,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load)
                              ? (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw)
                                   ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg
                                   : (0x000000ffU & 
                                      ((- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu))) 
                                       & ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                           ? ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                               ? (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                                  >> 0x00000018U)
                                               : (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                                  >> 0x00000010U))
                                           : ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                               ? (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                                  >> 8U)
                                               : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg))))) 
                                 & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_done))))
                              : (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE) 
                                  | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr))
                                  ? ((IData)(4U) + vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)
                                  : (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT 
                                     & (- (IData)(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE) 
                                                   | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH) 
                                                      | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE))))))))),32);
    bufp->fullIData(oldp+9,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A),32);
    bufp->fullIData(oldp+10,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B),32);
    bufp->fullIData(oldp+11,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr)
                               ? (0xfffffffeU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                               : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)
                                   ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
                                   : ((IData)(4U) + vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)))),32);
    bufp->fullBit(oldp+12,(((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                            & (((9U > (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                                 ? (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                    >> 0x0000001fU)
                                 : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                               & (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))))));
    bufp->fullBit(oldp+13,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)))));
    bufp->fullBit(oldp+14,(((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                            & ((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                               & ((9U <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                     >> 1U))))));
    bufp->fullBit(oldp+15,(((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                            & ((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                               & ((9U <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                     >> 2U))))));
    bufp->fullBit(oldp+16,(((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                            & ((9U <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                               & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                   >> 3U) & (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)))))));
    bufp->fullCData(oldp+17,((0x0000000fU & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen))))))),4);
    bufp->fullCData(oldp+18,((((((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                 & ((9U <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                    & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                        >> 3U) & (0U 
                                                  != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))))) 
                                << 3U) | (((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                           & ((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                              & ((9U 
                                                  <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                    >> 2U)))) 
                                          << 2U)) | 
                              ((((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                 & ((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                    & ((9U <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                          >> 1U)))) 
                                << 1U) | ((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                          & (((9U > (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                                               ? (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                                  >> 0x0000001fU)
                                               : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))))))),4);
    bufp->fullBit(oldp+19,((1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U)))));
    bufp->fullBit(oldp+20,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+21,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 1U))));
    bufp->fullBit(oldp+23,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+24,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+25,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+26,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+27,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+28,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullCData(oldp+29,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+30,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+31,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+32,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullCData(oldp+33,((0x0000000fU & (0xe841U 
                                             >> ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr) 
                                                 << 2U)))),4);
    bufp->fullBit(oldp+34,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 4U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                  >> 3U))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                  >> 2U))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                  >> 1U))));
    bufp->fullBit(oldp+39,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))));
    bufp->fullCData(oldp+40,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr),8);
    bufp->fullBit(oldp+41,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+42,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2));
    bufp->fullBit(oldp+43,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3));
    bufp->fullBit(oldp+44,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4));
    bufp->fullBit(oldp+45,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+46,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+47,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+48,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+49,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+50,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+51,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+52,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+53,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+54,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+55,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+56,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+57,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+58,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+59,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+60,((0U != (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] 
                                   | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] 
                                      | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] 
                                         | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] 
                                            | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] 
                                               | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] 
                                                  | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] 
                                                     | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] 
                                                        | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] 
                                                           | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] 
                                                              | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10U] 
                                                                 | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11U] 
                                                                    | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12U] 
                                                                       | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13U] 
                                                                          | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14U] 
                                                                             | vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U]))))))))))))))))));
    bufp->fullCData(oldp+61,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullSData(oldp+62,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+63,((1U & (~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt))))));
    bufp->fullCData(oldp+64,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+65,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+66,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+67,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+68,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+69,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+70,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+71,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+72,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+73,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+74,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+75,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+76,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+77,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+78,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+79,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                            & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+80,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                            & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+81,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                            & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+82,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                            & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+83,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                            & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+84,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+85,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+86,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+87,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+88,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+89,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullBit(oldp+90,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+91,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+92,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    VSimTop___024root__trace_full_dtype____0(vlSelf, bufp, 93, vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo);
    bufp->fullCData(oldp+109,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+110,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U]),3);
    bufp->fullCData(oldp+111,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U]),3);
    bufp->fullCData(oldp+112,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U]),3);
    bufp->fullCData(oldp+113,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U]),3);
    bufp->fullCData(oldp+114,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U]),3);
    bufp->fullCData(oldp+115,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U]),3);
    bufp->fullCData(oldp+116,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U]),3);
    bufp->fullCData(oldp+117,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U]),3);
    bufp->fullCData(oldp+118,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U]),3);
    bufp->fullCData(oldp+119,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U]),3);
    bufp->fullCData(oldp+120,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10U]),3);
    bufp->fullCData(oldp+121,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11U]),3);
    bufp->fullCData(oldp+122,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12U]),3);
    bufp->fullCData(oldp+123,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13U]),3);
    bufp->fullCData(oldp+124,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14U]),3);
    bufp->fullCData(oldp+125,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U]),3);
    bufp->fullBit(oldp+126,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+127,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait),5);
    bufp->fullCData(oldp+128,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd),3);
    bufp->fullBit(oldp+129,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init));
    bufp->fullBit(oldp+130,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready));
    bufp->fullIData(oldp+131,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data),32);
    bufp->fullBit(oldp+132,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st));
    bufp->fullBit(oldp+133,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st));
    bufp->fullCData(oldp+134,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt),8);
    bufp->fullCData(oldp+135,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state),6);
    bufp->fullIData(oldp+136,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr),24);
    bufp->fullIData(oldp+137,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata),32);
    bufp->fullBit(oldp+138,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce));
    bufp->fullBit(oldp+139,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen));
    bufp->fullBit(oldp+140,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
    bufp->fullBit(oldp+141,((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))));
    bufp->fullBit(oldp+142,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay));
    bufp->fullCData(oldp+143,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state),5);
    bufp->fullCData(oldp+144,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt),5);
    bufp->fullIData(oldp+145,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt),18);
    bufp->fullIData(oldp+146,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca),32);
    bufp->fullCData(oldp+147,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt),8);
    bufp->fullCData(oldp+148,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt),8);
    bufp->fullCData(oldp+149,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data),8);
    bufp->fullCData(oldp+150,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt),5);
    bufp->fullCData(oldp+151,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt),4);
    bufp->fullCData(oldp+152,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd),3);
    bufp->fullBit(oldp+153,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst));
    bufp->fullBit(oldp+154,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st));
    bufp->fullBit(oldp+155,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st));
    bufp->fullBit(oldp+156,(((4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
                             | ((0x0cU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
                                | (0x14U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))))));
    bufp->fullCData(oldp+157,((0x000000ffU & (((- (IData)(
                                                          (4U 
                                                           == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                                               & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                                                  >> 8U)) 
                                              | (((- (IData)(
                                                             (0x0cU 
                                                              == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                                                  & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                                                     >> 0x00000010U)) 
                                                 | ((- (IData)(
                                                               (0x14U 
                                                                == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                                                    & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                                                       >> 0x00000018U)))))),8);
    bufp->fullBit(oldp+158,((1U & ((~ ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                       | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                          & (0x00800000U 
                                             == (0x01800000U 
                                                 & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)))));
    bufp->fullBit(oldp+159,((1U & ((~ ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                       | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                          & (0x01000000U 
                                             == (0x01800000U 
                                                 & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)))));
    bufp->fullSData(oldp+160,((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                        [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]) 
                                << 3U) | vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->fullCData(oldp+161,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullIData(oldp+162,(((8U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                ? ((((0x0000ff00U & 
                                      (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                       << 8U)) | (0x000000ffU 
                                                  & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                                     >> 8U))) 
                                    << 0x00000010U) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                          >> 8U)) | 
                                      (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                       >> 0x00000018U)))
                                : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata)),32);
    bufp->fullBit(oldp+163,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+164,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg),32);
    bufp->fullCData(oldp+165,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_pstrb),4);
    bufp->fullCData(oldp+166,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w_reg),8);
    VSimTop___024root__trace_full_dtype____1(vlSelf, bufp, 167, vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram);
    bufp->fullIData(oldp+183,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg),32);
    bufp->fullIData(oldp+184,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg),32);
    bufp->fullCData(oldp+185,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg),4);
    bufp->fullBit(oldp+186,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active));
    bufp->fullBit(oldp+187,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel));
    bufp->fullCData(oldp+188,((3U & ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                      ? ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                          : ((- (IData)(
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg) 
                                                             >> 1U))))) 
                                             & (- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)))))))
                                      : ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                          : (1U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg) 
                                                                  >> 1U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))))))))))),2);
    bufp->fullCData(oldp+189,(((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                ? ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                    ? ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                        ? 0x20U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                    ? 0x20U
                                                    : 0x10U))
                                    : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33))
                                : ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                                    : ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                        ? ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                            ? 0x10U
                                            : 8U) : 
                                       ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                         ? 8U : 0x20U))))),8);
    bufp->fullIData(oldp+190,(((0xffff0000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg) 
                               | (0x0000ffffU & ((8U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                    ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                     ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg
                                                     : 
                                                    (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
                                                     >> 0x00000010U)))
                                                   : 
                                                  ((0x0000ff00U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg) 
                                                   | (0x000000ffU 
                                                      & ((2U 
                                                          & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                          ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                           ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg
                                                           : 
                                                          (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
                                                           >> 0x00000018U))))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                   ? 
                                                  ((0x0000ff00U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg) 
                                                   | (0x000000ffU 
                                                      & ((2U 
                                                          & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                          ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                           ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg
                                                           : 
                                                          (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
                                                           >> 0x00000010U)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                     ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg
                                                     : 
                                                    ((0x0000ff00U 
                                                      & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg) 
                                                     | (0x000000ffU 
                                                        & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
                                                           >> 8U))))
                                                    : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg)))))),32);
    bufp->fullBit(oldp+191,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel));
    bufp->fullBit(oldp+192,((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+193,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready));
    bufp->fullBit(oldp+194,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0));
    bufp->fullIData(oldp+195,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr),32);
    bufp->fullCData(oldp+196,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size),3);
    bufp->fullBit(oldp+197,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0));
    bufp->fullIData(oldp+198,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data),32);
    bufp->fullCData(oldp+199,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb),4);
    bufp->fullBit(oldp+200,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG))));
    bufp->fullBit(oldp+201,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready));
    bufp->fullBit(oldp+202,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0));
    bufp->fullIData(oldp+203,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr),32);
    bufp->fullCData(oldp+204,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size),3);
    bufp->fullBit(oldp+205,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG))));
    bufp->fullCData(oldp+206,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+207,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__araddr_reg),32);
    bufp->fullIData(oldp+208,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullCData(oldp+209,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg),4);
    bufp->fullIData(oldp+210,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)))));
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)))));
    bufp->fullBit(oldp+213,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0));
    bufp->fullBit(oldp+214,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)))));
    bufp->fullIData(oldp+215,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data),32);
    bufp->fullIData(oldp+216,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata),32);
    bufp->fullBit(oldp+217,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0));
    bufp->fullBit(oldp+218,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG));
    bufp->fullBit(oldp+219,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)))));
    bufp->fullBit(oldp+220,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1));
    bufp->fullBit(oldp+221,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)))));
    bufp->fullBit(oldp+222,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1));
    bufp->fullIData(oldp+223,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_1_data),32);
    bufp->fullBit(oldp+224,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1));
    bufp->fullIData(oldp+225,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_addr),32);
    bufp->fullCData(oldp+226,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_size),3);
    bufp->fullBit(oldp+227,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1));
    bufp->fullIData(oldp+228,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_addr),32);
    bufp->fullCData(oldp+229,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_size),3);
    bufp->fullBit(oldp+230,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1));
    bufp->fullIData(oldp+231,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_data),32);
    bufp->fullCData(oldp+232,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_strb),4);
    bufp->fullBit(oldp+233,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0))));
    bufp->fullBit(oldp+234,(((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0))));
    bufp->fullBit(oldp+235,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3))));
    bufp->fullBit(oldp+236,(((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3))));
    bufp->fullBit(oldp+237,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel) 
                             & (0U == (0x30000000U 
                                       & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))));
    bufp->fullBit(oldp+238,((IData)(((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
                                     & (0U == (0x30000000U 
                                               & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))))));
    bufp->fullCData(oldp+239,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state),3);
    bufp->fullCData(oldp+240,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte),8);
    bufp->fullIData(oldp+241,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__current_address),24);
    bufp->fullCData(oldp+242,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter),6);
    bufp->fullCData(oldp+243,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter),3);
    bufp->fullCData(oldp+244,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter),6);
    bufp->fullBit(oldp+245,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable));
    bufp->fullCData(oldp+246,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in),4);
    bufp->fullCData(oldp+247,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out),4);
    bufp->fullBit(oldp+248,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode));
    bufp->fullBit(oldp+249,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) 
                             | ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                                | (5U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))));
    bufp->fullCData(oldp+250,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_size),3);
    bufp->fullBit(oldp+251,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) 
                             | ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                                | (4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))));
    bufp->fullBit(oldp+252,((6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))));
    bufp->fullBit(oldp+253,(((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                             | (((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                                 & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_reqValid)) 
                                | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead)))));
    bufp->fullCData(oldp+254,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arsize),3);
    bufp->fullBit(oldp+255,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rready));
    bufp->fullIData(oldp+256,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr),32);
    bufp->fullCData(oldp+257,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize),3);
    bufp->fullBit(oldp+258,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_valid));
    bufp->fullCData(oldp+259,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count),2);
    bufp->fullIData(oldp+260,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata),32);
    bufp->fullCData(oldp+261,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb),4);
    bufp->fullBit(oldp+262,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_valid));
    bufp->fullCData(oldp+263,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count),2);
    bufp->fullCData(oldp+264,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count),2);
    bufp->fullIData(oldp+265,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr),32);
    bufp->fullCData(oldp+266,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize),3);
    bufp->fullBit(oldp+267,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_valid));
    bufp->fullCData(oldp+268,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count),2);
    bufp->fullCData(oldp+269,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count),2);
    bufp->fullBit(oldp+270,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG));
    bufp->fullIData(oldp+271,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC),32);
    bufp->fullBit(oldp+272,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_reqValid));
    bufp->fullBit(oldp+273,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_reqValid));
    bufp->fullCData(oldp+274,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_size),2);
    bufp->fullBit(oldp+275,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wen));
    bufp->fullBit(oldp+276,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad));
    bufp->fullCData(oldp+277,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI),2);
    bufp->fullCData(oldp+278,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD),3);
    bufp->fullBit(oldp+279,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead));
    bufp->fullIData(oldp+280,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r),32);
    bufp->fullIData(oldp+281,(((IData)(4U) + vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)),32);
    bufp->fullBit(oldp+282,((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE) 
                              | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE) 
                                 | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE) 
                                    | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)))) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid))));
    bufp->fullBit(oldp+283,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr));
    bufp->fullCData(oldp+284,((0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                              >> 0x0000000fU))),5);
    bufp->fullCData(oldp+285,((0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                              >> 0x00000014U))),5);
    bufp->fullCData(oldp+286,((0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                              >> 7U))),5);
    bufp->fullIData(oldp+287,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__imm),32);
    bufp->fullBit(oldp+288,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE));
    bufp->fullBit(oldp+289,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH));
    bufp->fullBit(oldp+290,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD));
    bufp->fullBit(oldp+291,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE));
    bufp->fullBit(oldp+292,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE));
    bufp->fullBit(oldp+293,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE));
    bufp->fullBit(oldp+294,((IData)(((0x00000020U == 
                                      (0x00000078U 
                                       & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)))));
    bufp->fullBit(oldp+295,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE));
    bufp->fullBit(oldp+296,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE));
    bufp->fullBit(oldp+297,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui));
    bufp->fullBit(oldp+298,((IData)(((0x00000030U == 
                                      (0xfe007070U 
                                       & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))));
    bufp->fullBit(oldp+299,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw));
    bufp->fullBit(oldp+300,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu));
    bufp->fullBit(oldp+301,((IData)(((0x00000010U == 
                                      (0x00000070U 
                                       & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)))));
    bufp->fullBit(oldp+302,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sw));
    bufp->fullBit(oldp+303,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sb));
    bufp->fullBit(oldp+304,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_ebreak));
    bufp->fullIData(oldp+305,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg),32);
    bufp->fullBit(oldp+306,((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))));
    bufp->fullBit(oldp+307,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_done));
    bufp->fullBit(oldp+308,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid));
    bufp->fullIData(oldp+309,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst),32);
    bufp->fullCData(oldp+310,((0x0000007fU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)),7);
    bufp->fullCData(oldp+311,((7U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+312,((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                               >> 0x00000019U)),7);
    bufp->fullIData(oldp+313,((((- (IData)((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                   >> 0x00000014U))),32);
    bufp->fullIData(oldp+314,((((- (IData)((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (
                                                   (0x00000fe0U 
                                                    & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                         >> 7U))))),32);
    bufp->fullIData(oldp+315,((((- (IData)((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (
                                                   (0x00000800U 
                                                    & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                       << 4U)) 
                                                   | ((0x000007e0U 
                                                       & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001eU 
                                                         & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                            >> 7U)))))),32);
    bufp->fullIData(oldp+316,((0xfffff000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)),32);
    bufp->fullIData(oldp+317,((((- (IData)((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                            >> 0x0000001fU))) 
                                << 0x00000014U) | (
                                                   (((0x000001feU 
                                                      & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                           >> 0x00000014U))) 
                                                    << 0x0000000bU) 
                                                   | (0x000007feU 
                                                      & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                         >> 0x00000014U))))),32);
    bufp->fullCData(oldp+318,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state),2);
    bufp->fullSData(oldp+319,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__lfsr),16);
    bufp->fullIData(oldp+320,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count),32);
    bufp->fullCData(oldp+321,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+322,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg),32);
    bufp->fullSData(oldp+323,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lfsr),16);
    bufp->fullIData(oldp+324,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count),32);
    bufp->fullBit(oldp+325,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load));
    bufp->fullBit(oldp+326,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store));
    bufp->fullBit(oldp+327,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load) 
                             | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store))));
    bufp->fullCData(oldp+328,(vlSelfRef.SimTop__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+329,(vlSelfRef.SimTop__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+330,(vlSelfRef.SimTop__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+331,(vlSelfRef.SimTop__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+332,(vlSelfRef.SimTop__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+333,(((1U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+334,(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck));
    bufp->fullBit(oldp+335,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss));
    bufp->fullBit(oldp+336,(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_mosi));
    bufp->fullBit(oldp+337,(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o));
    bufp->fullBit(oldp+338,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+339,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+340,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+341,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+342,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+343,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+344,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+345,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+346,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+347,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+348,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse));
    bufp->fullCData(oldp+349,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+350,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+351,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+352,((0x000000ffU & VSimTop__ConstPool__CONST_haf0ddab7_0
                               [(0x0000000fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))])),8);
    bufp->fullBit(oldp+353,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+354,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i));
    bufp->fullCData(oldp+355,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+356,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+357,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+358,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+359,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+360,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+361,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+362,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+363,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+364,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+365,((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+366,((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+367,((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+368,((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+369,((0x0000000fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                              - (IData)(1U)))),4);
    bufp->fullSData(oldp+370,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+371,((0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                              >> 2U))),8);
    bufp->fullCData(oldp+372,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+373,((0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+374,((0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                              >> 3U))),8);
    bufp->fullCData(oldp+375,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+376,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+377,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+378,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+379,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+380,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+381,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+382,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+383,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+384,((0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+385,(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad));
    bufp->fullBit(oldp+386,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready));
    bufp->fullBit(oldp+387,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel));
    bufp->fullBit(oldp+388,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re));
    bufp->fullBit(oldp+389,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real));
    bufp->fullBit(oldp+390,(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_0));
    bufp->fullBit(oldp+391,(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_1));
    bufp->fullBit(oldp+392,(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_2));
    bufp->fullBit(oldp+393,(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_3));
    bufp->fullCData(oldp+394,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i),4);
    bufp->fullBit(oldp+395,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel));
    bufp->fullBit(oldp+396,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_penable));
    bufp->fullIData(oldp+397,((0x1fffffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)),29);
    bufp->fullBit(oldp+398,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_penable))));
    bufp->fullIData(oldp+399,((0x1fffffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)),32);
    bufp->fullCData(oldp+400,((7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)),3);
    bufp->fullCData(oldp+401,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+402,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i),8);
    VSimTop___024root__trace_full_dtype____1(vlSelf, bufp, 403, vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram);
    bufp->fullIData(oldp+419,((0x3fffffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)),30);
    bufp->fullIData(oldp+420,((0x3fffffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)),32);
    bufp->fullIData(oldp+421,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr),32);
    bufp->fullBit(oldp+422,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup));
    bufp->fullBit(oldp+423,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+424,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)))));
    bufp->fullBit(oldp+425,((0U == (3U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                          >> 0x0000001cU)))));
    bufp->fullBit(oldp+426,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3));
    bufp->fullCData(oldp+427,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count),2);
    bufp->fullCData(oldp+428,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count),2);
    bufp->fullCData(oldp+429,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count),2);
    bufp->fullCData(oldp+430,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count),2);
    bufp->fullCData(oldp+431,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count),2);
    bufp->fullBit(oldp+432,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1));
    bufp->fullBit(oldp+433,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG));
    bufp->fullBit(oldp+434,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1)))));
    bufp->fullBit(oldp+435,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_awready));
    bufp->fullBit(oldp+436,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready));
    bufp->fullBit(oldp+437,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid));
    bufp->fullBit(oldp+438,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arready));
    bufp->fullBit(oldp+439,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid));
    bufp->fullIData(oldp+440,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+441,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal));
    bufp->fullBit(oldp+442,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+443,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal));
    bufp->fullBit(oldp+444,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+445,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal));
    bufp->fullBit(oldp+446,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_valid));
    bufp->fullCData(oldp+447,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_size),3);
    bufp->fullBit(oldp+448,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal));
    bufp->fullBit(oldp+449,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_valid));
    bufp->fullCData(oldp+450,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_size),3);
    bufp->fullBit(oldp+451,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal));
    bufp->fullBit(oldp+452,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_valid));
    bufp->fullBit(oldp+453,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready));
    bufp->fullBit(oldp+454,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready));
    bufp->fullBit(oldp+455,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready));
    bufp->fullBit(oldp+456,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_respValid));
    bufp->fullBit(oldp+457,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19)))));
    bufp->fullIData(oldp+458,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_prdata),32);
    bufp->fullBit(oldp+459,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_bvalid));
    bufp->fullBit(oldp+460,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rvalid));
    bufp->fullIData(oldp+461,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rdata),32);
    bufp->fullBit(oldp+462,(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG));
    bufp->fullBit(oldp+463,(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1));
    bufp->fullBit(oldp+464,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1)))));
    bufp->fullBit(oldp+465,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask));
    bufp->fullBit(oldp+466,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+467,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+468,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+469,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+470,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+471,(vlSelfRef.clock));
    bufp->fullBit(oldp+472,(vlSelfRef.reset));
    bufp->fullBit(oldp+473,(vlSelfRef.cpuClock));
    bufp->fullBit(oldp+474,(vlSelfRef.coreSel));
    bufp->fullSData(oldp+475,(vlSelfRef.externalPins_mygpio_in),16);
    bufp->fullBit(oldp+476,(vlSelfRef.externalPins_uart0_rx));
    bufp->fullBit(oldp+477,(vlSelfRef.externalPins_uart0_tx));
    bufp->fullBit(oldp+478,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->fullBit(oldp+479,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss) 
                                   | (((2U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state)) 
                                       & (0U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter)))
                                       ? (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                          >> 7U) : 
                                      (vlSelfRef.SimTop__DOT__flash__DOT__data 
                                       >> 0x0000001fU))))));
    bufp->fullCData(oldp+480,(((4U & (((~ ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                           | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                              & (0x01000000U 
                                                 == 
                                                 (0x01800000U 
                                                  & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                       | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)) 
                                      << 2U)) | ((2U 
                                                  & (((~ 
                                                       ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                                        | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                                           & (0x00800000U 
                                                              == 
                                                              (0x01800000U 
                                                               & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                                      | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)))),3);
    bufp->fullBit(oldp+481,((1U & (IData)(vlSelfRef.externalPins_mygpio_in))));
    bufp->fullBit(oldp+482,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 1U))));
    bufp->fullBit(oldp+483,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 0x0000000aU))));
    bufp->fullBit(oldp+484,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+485,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+486,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 0x0000000dU))));
    bufp->fullBit(oldp+487,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 0x0000000eU))));
    bufp->fullBit(oldp+488,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+489,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 2U))));
    bufp->fullBit(oldp+490,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 3U))));
    bufp->fullBit(oldp+491,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 4U))));
    bufp->fullBit(oldp+492,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 5U))));
    bufp->fullBit(oldp+493,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 6U))));
    bufp->fullBit(oldp+494,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 7U))));
    bufp->fullBit(oldp+495,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 8U))));
    bufp->fullBit(oldp+496,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                   >> 9U))));
    bufp->fullIData(oldp+497,((((((4U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                   ? ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                       ? ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                           ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch)
                                           : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))
                                       : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr) 
                                          & (- (IData)(
                                                       (1U 
                                                        & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))))
                                   : ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                       ? ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                           ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)
                                           : (0x000000c0U 
                                              | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir)))
                                       : ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                           ? ((0x00000080U 
                                               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                               ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl) 
                                                  >> 8U)
                                               : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier))
                                           : ((0x00000080U 
                                               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                               ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)
                                               : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                              [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                 << 0x00000018U) | 
                                ((0x00ff0000U & (((4U 
                                                   & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                     ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch)
                                                     : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))
                                                    : 
                                                   ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))))
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                     ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)
                                                     : 
                                                    (0x000000c0U 
                                                     | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? 
                                                     ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl) 
                                                      >> 8U)
                                                      : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier))
                                                     : 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)
                                                      : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                     [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                 << 0x00000010U)) 
                                 | ((0x0000ff00U & 
                                     (((4U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                        ? ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                            ? ((1U 
                                                & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch)
                                                : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))
                                            : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr) 
                                               & (- (IData)(
                                                            (1U 
                                                             & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))))
                                        : ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                            ? ((1U 
                                                & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)
                                                : (0x000000c0U 
                                                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir)))
                                            : ((1U 
                                                & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                ? (
                                                   (0x00000080U 
                                                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                    ? 
                                                   ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl) 
                                                    >> 8U)
                                                    : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier))
                                                : (
                                                   (0x00000080U 
                                                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                    ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)
                                                    : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                   [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((4U 
                                                     & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                       ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch)
                                                       : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))
                                                      : 
                                                     ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))))
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                       ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)
                                                       : 
                                                      (0x000000c0U 
                                                       | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir)))
                                                      : 
                                                     ((1U 
                                                       & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                       ? 
                                                      ((0x00000080U 
                                                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? 
                                                       ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl) 
                                                        >> 8U)
                                                        : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier))
                                                       : 
                                                      ((0x00000080U 
                                                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)
                                                        : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                       [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))))))) 
                               & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel))))),32);
    bufp->fullBit(oldp+498,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i));
    bufp->fullBit(oldp+499,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_re_i));
    bufp->fullCData(oldp+500,((0x000000ffU & ((4U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                               ? ((2U 
                                                   & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                    ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))))
                                               : ((2U 
                                                   & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                    ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                    [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))))),8);
    bufp->fullBit(oldp+501,(vlSelfRef.externalPins_uart0_rx));
    bufp->fullCData(oldp+502,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
                              [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom]),8);
    bufp->fullBit(oldp+503,((((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)) 
                              | (8U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2))));
    bufp->fullBit(oldp+504,((1U & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active)) 
                                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready)))));
    bufp->fullIData(oldp+505,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel)
                                ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data
                                : ((0U == (0x000000ffU 
                                           & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))
                                    ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait)
                                    : ((4U == (0x000000ffU 
                                               & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))
                                        ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd)
                                        : ((- (IData)(
                                                      (8U 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)))) 
                                           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init)))))),32);
    bufp->fullCData(oldp+506,(((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))
                                : ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                                    ? 2U : ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19)
                                                 ? 2U
                                                 : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))))),2);
    bufp->fullBit(oldp+507,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_bvalid))));
    bufp->fullBit(oldp+508,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG) 
                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rvalid))));
    bufp->fullIData(oldp+509,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_addr),32);
    bufp->fullIData(oldp+510,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_addr),32);
    bufp->fullIData(oldp+511,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data),32);
    bufp->fullCData(oldp+512,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb),4);
    bufp->fullIData(oldp+513,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_respValid)
                                ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata
                                : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r)),32);
    bufp->fullBit(oldp+514,((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid) 
                              & (6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))) 
                             | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid) 
                                & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))));
    bufp->fullIData(oldp+515,(((0U == (0x0000001fU 
                                       & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                          >> 0x0000000fU)))
                                ? 0U : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
                               [(0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                >> 0x0000000fU))])),32);
    bufp->fullIData(oldp+516,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[10U]),32);
    bufp->fullIData(oldp+517,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+518,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+519,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+520,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+521,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+522,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+523,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+524,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+525,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+526,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+527,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+528,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+529,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+530,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+531,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+532,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+533,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+534,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+535,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+536,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+537,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+538,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+539,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+540,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+541,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+542,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+543,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+544,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+545,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+546,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+547,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+548,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0]),32);
    bufp->fullCData(oldp+549,(((4U & (((~ ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                           | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                              & (0x01000000U 
                                                 == 
                                                 (0x01800000U 
                                                  & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                       | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)) 
                                      << 2U)) | ((2U 
                                                  & (((~ 
                                                       ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                                        | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                                           & (0x00800000U 
                                                              == 
                                                              (0x01800000U 
                                                               & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                                      | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)))),4);
    bufp->fullIData(oldp+550,(vlSelfRef.SimTop__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+551,(((0x00fffffeU & (vlSelfRef.SimTop__DOT__flash__DOT__addr 
                                               << 1U)) 
                               | (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_mosi))),32);
    bufp->fullIData(oldp+552,(((((0x0000ff00U & (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                 << 8U)) 
                                 | (0x000000ffU & (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                   >> 8U))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                       >> 8U)) 
                                                   | (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                      >> 0x00000018U)))),32);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_dtype____0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_dtype____0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[15]),3);
    bufp->fullCData(oldp+1,(__VdtypeVar[14]),3);
    bufp->fullCData(oldp+2,(__VdtypeVar[13]),3);
    bufp->fullCData(oldp+3,(__VdtypeVar[12]),3);
    bufp->fullCData(oldp+4,(__VdtypeVar[11]),3);
    bufp->fullCData(oldp+5,(__VdtypeVar[10]),3);
    bufp->fullCData(oldp+6,(__VdtypeVar[9]),3);
    bufp->fullCData(oldp+7,(__VdtypeVar[8]),3);
    bufp->fullCData(oldp+8,(__VdtypeVar[7]),3);
    bufp->fullCData(oldp+9,(__VdtypeVar[6]),3);
    bufp->fullCData(oldp+10,(__VdtypeVar[5]),3);
    bufp->fullCData(oldp+11,(__VdtypeVar[4]),3);
    bufp->fullCData(oldp+12,(__VdtypeVar[3]),3);
    bufp->fullCData(oldp+13,(__VdtypeVar[2]),3);
    bufp->fullCData(oldp+14,(__VdtypeVar[1]),3);
    bufp->fullCData(oldp+15,(__VdtypeVar[0]),3);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_dtype____1(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_dtype____1\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[15]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[14]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[13]),8);
    bufp->fullCData(oldp+3,(__VdtypeVar[12]),8);
    bufp->fullCData(oldp+4,(__VdtypeVar[11]),8);
    bufp->fullCData(oldp+5,(__VdtypeVar[10]),8);
    bufp->fullCData(oldp+6,(__VdtypeVar[9]),8);
    bufp->fullCData(oldp+7,(__VdtypeVar[8]),8);
    bufp->fullCData(oldp+8,(__VdtypeVar[7]),8);
    bufp->fullCData(oldp+9,(__VdtypeVar[6]),8);
    bufp->fullCData(oldp+10,(__VdtypeVar[5]),8);
    bufp->fullCData(oldp+11,(__VdtypeVar[4]),8);
    bufp->fullCData(oldp+12,(__VdtypeVar[3]),8);
    bufp->fullCData(oldp+13,(__VdtypeVar[2]),8);
    bufp->fullCData(oldp+14,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+15,(__VdtypeVar[0]),8);
}
