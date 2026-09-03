// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


VL_ATTR_COLD void VSimTop___024root__trace_init_sub__TOP__0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+478,"reset", false,-1);
    tracep->declBit(c+479,"cpuClock", false,-1);
    tracep->declBit(c+480,"coreSel", false,-1);
    tracep->declBus(c+481,"externalPins_mygpio_out", false,-1, 15,0);
    tracep->declBus(c+482,"externalPins_mygpio_in", false,-1, 15,0);
    tracep->declBus(c+483,"externalPins_mygpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+484,"externalPins_mygpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+485,"externalPins_mygpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+486,"externalPins_mygpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+487,"externalPins_mygpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+488,"externalPins_mygpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+489,"externalPins_mygpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+490,"externalPins_mygpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+491,"externalPins_uart0_rx", false,-1);
    tracep->declBit(c+492,"externalPins_uart0_tx", false,-1);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+478,"reset", false,-1);
    tracep->declBit(c+479,"cpuClock", false,-1);
    tracep->declBit(c+480,"coreSel", false,-1);
    tracep->declBus(c+481,"externalPins_mygpio_out", false,-1, 15,0);
    tracep->declBus(c+482,"externalPins_mygpio_in", false,-1, 15,0);
    tracep->declBus(c+483,"externalPins_mygpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+484,"externalPins_mygpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+485,"externalPins_mygpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+486,"externalPins_mygpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+487,"externalPins_mygpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+488,"externalPins_mygpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+489,"externalPins_mygpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+490,"externalPins_mygpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+491,"externalPins_uart0_rx", false,-1);
    tracep->declBit(c+492,"externalPins_uart0_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+477,"clock_pad_i", false,-1);
    tracep->declBit(c+477,"clock_pad_o", false,-1);
    tracep->declBit(c+479,"cpuClock", false,-1);
    tracep->declBit(c+493,"resetn_pad_i", false,-1);
    tracep->declBit(c+491,"uart0_rx", false,-1);
    tracep->declBit(c+492,"uart0_tx", false,-1);
    tracep->declBit(c+351,"spi_sck", false,-1);
    tracep->declBit(c+352,"spi_ss", false,-1);
    tracep->declBit(c+353,"spi_mosi", false,-1);
    tracep->declBit(c+494,"spi_miso", false,-1);
    tracep->declBit(c+354,"psram_sck_o", false,-1);
    tracep->declBus(c+402,"psram_nss_o", false,-1, 2,0);
    tracep->declBit(c+411,"psram_dio_0", false,-1);
    tracep->declBit(c+412,"psram_dio_1", false,-1);
    tracep->declBit(c+413,"psram_dio_2", false,-1);
    tracep->declBit(c+414,"psram_dio_3", false,-1);
    tracep->declBus(c+481,"mygpio_out", false,-1, 15,0);
    tracep->declBus(c+482,"mygpio_in", false,-1, 15,0);
    tracep->declBus(c+483,"mygpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+484,"mygpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+485,"mygpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+486,"mygpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+487,"mygpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+488,"mygpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+489,"mygpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+490,"mygpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+468,"soc_reset_REG", false,-1);
    tracep->declBit(c+469,"soc_reset_REG_1", false,-1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad ");
    tracep->declBit(c+562,"pad", false,-1);
    tracep->declBit(c+562,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_1 ");
    tracep->declBit(c+563,"pad", false,-1);
    tracep->declBit(c+563,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_10 ");
    tracep->declBit(c+564,"pad", false,-1);
    tracep->declBit(c+564,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_11 ");
    tracep->declBit(c+565,"pad", false,-1);
    tracep->declBit(c+565,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_12 ");
    tracep->declBit(c+566,"pad", false,-1);
    tracep->declBit(c+566,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_13 ");
    tracep->declBit(c+567,"pad", false,-1);
    tracep->declBit(c+567,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_14 ");
    tracep->declBit(c+568,"pad", false,-1);
    tracep->declBit(c+568,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_15 ");
    tracep->declBit(c+569,"pad", false,-1);
    tracep->declBit(c+569,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_2 ");
    tracep->declBit(c+570,"pad", false,-1);
    tracep->declBit(c+570,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_3 ");
    tracep->declBit(c+571,"pad", false,-1);
    tracep->declBit(c+571,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_4 ");
    tracep->declBit(c+572,"pad", false,-1);
    tracep->declBit(c+572,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_5 ");
    tracep->declBit(c+573,"pad", false,-1);
    tracep->declBit(c+573,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_6 ");
    tracep->declBit(c+574,"pad", false,-1);
    tracep->declBit(c+574,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_7 ");
    tracep->declBit(c+575,"pad", false,-1);
    tracep->declBit(c+575,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_8 ");
    tracep->declBit(c+576,"pad", false,-1);
    tracep->declBit(c+576,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_out_pad_9 ");
    tracep->declBit(c+577,"pad", false,-1);
    tracep->declBit(c+577,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_0_pad ");
    tracep->declBit(c+578,"pad", false,-1);
    tracep->declBit(c+578,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_0_pad_1 ");
    tracep->declBit(c+579,"pad", false,-1);
    tracep->declBit(c+579,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_0_pad_2 ");
    tracep->declBit(c+580,"pad", false,-1);
    tracep->declBit(c+580,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_0_pad_3 ");
    tracep->declBit(c+581,"pad", false,-1);
    tracep->declBit(c+581,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_0_pad_4 ");
    tracep->declBit(c+582,"pad", false,-1);
    tracep->declBit(c+582,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_0_pad_5 ");
    tracep->declBit(c+583,"pad", false,-1);
    tracep->declBit(c+583,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_0_pad_6 ");
    tracep->declBit(c+584,"pad", false,-1);
    tracep->declBit(c+584,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_0_pad_7 ");
    tracep->declBit(c+585,"pad", false,-1);
    tracep->declBit(c+585,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_1_pad ");
    tracep->declBit(c+586,"pad", false,-1);
    tracep->declBit(c+586,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_1_pad_1 ");
    tracep->declBit(c+587,"pad", false,-1);
    tracep->declBit(c+587,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_1_pad_2 ");
    tracep->declBit(c+588,"pad", false,-1);
    tracep->declBit(c+588,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_1_pad_3 ");
    tracep->declBit(c+589,"pad", false,-1);
    tracep->declBit(c+589,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_1_pad_4 ");
    tracep->declBit(c+590,"pad", false,-1);
    tracep->declBit(c+590,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_1_pad_5 ");
    tracep->declBit(c+591,"pad", false,-1);
    tracep->declBit(c+591,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_1_pad_6 ");
    tracep->declBit(c+592,"pad", false,-1);
    tracep->declBit(c+592,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_1_pad_7 ");
    tracep->declBit(c+593,"pad", false,-1);
    tracep->declBit(c+593,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_2_pad ");
    tracep->declBit(c+594,"pad", false,-1);
    tracep->declBit(c+594,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_2_pad_1 ");
    tracep->declBit(c+595,"pad", false,-1);
    tracep->declBit(c+595,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_2_pad_2 ");
    tracep->declBit(c+596,"pad", false,-1);
    tracep->declBit(c+596,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_2_pad_3 ");
    tracep->declBit(c+597,"pad", false,-1);
    tracep->declBit(c+597,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_2_pad_4 ");
    tracep->declBit(c+598,"pad", false,-1);
    tracep->declBit(c+598,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_2_pad_5 ");
    tracep->declBit(c+599,"pad", false,-1);
    tracep->declBit(c+599,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_2_pad_6 ");
    tracep->declBit(c+600,"pad", false,-1);
    tracep->declBit(c+600,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_2_pad_7 ");
    tracep->declBit(c+601,"pad", false,-1);
    tracep->declBit(c+601,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_3_pad ");
    tracep->declBit(c+602,"pad", false,-1);
    tracep->declBit(c+602,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_3_pad_1 ");
    tracep->declBit(c+603,"pad", false,-1);
    tracep->declBit(c+603,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_3_pad_2 ");
    tracep->declBit(c+604,"pad", false,-1);
    tracep->declBit(c+604,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_3_pad_3 ");
    tracep->declBit(c+605,"pad", false,-1);
    tracep->declBit(c+605,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_3_pad_4 ");
    tracep->declBit(c+606,"pad", false,-1);
    tracep->declBit(c+606,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_3_pad_5 ");
    tracep->declBit(c+607,"pad", false,-1);
    tracep->declBit(c+607,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_3_pad_6 ");
    tracep->declBit(c+608,"pad", false,-1);
    tracep->declBit(c+608,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_3_pad_7 ");
    tracep->declBit(c+609,"pad", false,-1);
    tracep->declBit(c+609,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_4_pad ");
    tracep->declBit(c+610,"pad", false,-1);
    tracep->declBit(c+610,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_4_pad_1 ");
    tracep->declBit(c+611,"pad", false,-1);
    tracep->declBit(c+611,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_4_pad_2 ");
    tracep->declBit(c+612,"pad", false,-1);
    tracep->declBit(c+612,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_4_pad_3 ");
    tracep->declBit(c+613,"pad", false,-1);
    tracep->declBit(c+613,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_4_pad_4 ");
    tracep->declBit(c+614,"pad", false,-1);
    tracep->declBit(c+614,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_4_pad_5 ");
    tracep->declBit(c+615,"pad", false,-1);
    tracep->declBit(c+615,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_4_pad_6 ");
    tracep->declBit(c+616,"pad", false,-1);
    tracep->declBit(c+616,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_4_pad_7 ");
    tracep->declBit(c+617,"pad", false,-1);
    tracep->declBit(c+617,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_5_pad ");
    tracep->declBit(c+618,"pad", false,-1);
    tracep->declBit(c+618,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_5_pad_1 ");
    tracep->declBit(c+619,"pad", false,-1);
    tracep->declBit(c+619,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_5_pad_2 ");
    tracep->declBit(c+620,"pad", false,-1);
    tracep->declBit(c+620,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_5_pad_3 ");
    tracep->declBit(c+621,"pad", false,-1);
    tracep->declBit(c+621,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_5_pad_4 ");
    tracep->declBit(c+622,"pad", false,-1);
    tracep->declBit(c+622,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_5_pad_5 ");
    tracep->declBit(c+623,"pad", false,-1);
    tracep->declBit(c+623,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_5_pad_6 ");
    tracep->declBit(c+624,"pad", false,-1);
    tracep->declBit(c+624,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_5_pad_7 ");
    tracep->declBit(c+625,"pad", false,-1);
    tracep->declBit(c+625,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_6_pad ");
    tracep->declBit(c+626,"pad", false,-1);
    tracep->declBit(c+626,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_6_pad_1 ");
    tracep->declBit(c+627,"pad", false,-1);
    tracep->declBit(c+627,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_6_pad_2 ");
    tracep->declBit(c+628,"pad", false,-1);
    tracep->declBit(c+628,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_6_pad_3 ");
    tracep->declBit(c+629,"pad", false,-1);
    tracep->declBit(c+629,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_6_pad_4 ");
    tracep->declBit(c+630,"pad", false,-1);
    tracep->declBit(c+630,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_6_pad_5 ");
    tracep->declBit(c+631,"pad", false,-1);
    tracep->declBit(c+631,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_6_pad_6 ");
    tracep->declBit(c+632,"pad", false,-1);
    tracep->declBit(c+632,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_6_pad_7 ");
    tracep->declBit(c+633,"pad", false,-1);
    tracep->declBit(c+633,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_7_pad ");
    tracep->declBit(c+634,"pad", false,-1);
    tracep->declBit(c+634,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_7_pad_1 ");
    tracep->declBit(c+635,"pad", false,-1);
    tracep->declBit(c+635,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_7_pad_2 ");
    tracep->declBit(c+636,"pad", false,-1);
    tracep->declBit(c+636,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_7_pad_3 ");
    tracep->declBit(c+637,"pad", false,-1);
    tracep->declBit(c+637,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_7_pad_4 ");
    tracep->declBit(c+638,"pad", false,-1);
    tracep->declBit(c+638,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_7_pad_5 ");
    tracep->declBit(c+639,"pad", false,-1);
    tracep->declBit(c+639,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_7_pad_6 ");
    tracep->declBit(c+640,"pad", false,-1);
    tracep->declBit(c+640,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_mygpio_seg_7_pad_7 ");
    tracep->declBit(c+641,"pad", false,-1);
    tracep->declBit(c+641,"c2p", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad ");
    tracep->declBit(c+495,"pad", false,-1);
    tracep->declBit(c+495,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_1 ");
    tracep->declBit(c+496,"pad", false,-1);
    tracep->declBit(c+496,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_10 ");
    tracep->declBit(c+497,"pad", false,-1);
    tracep->declBit(c+497,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_11 ");
    tracep->declBit(c+498,"pad", false,-1);
    tracep->declBit(c+498,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_12 ");
    tracep->declBit(c+499,"pad", false,-1);
    tracep->declBit(c+499,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_13 ");
    tracep->declBit(c+500,"pad", false,-1);
    tracep->declBit(c+500,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_14 ");
    tracep->declBit(c+501,"pad", false,-1);
    tracep->declBit(c+501,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_15 ");
    tracep->declBit(c+502,"pad", false,-1);
    tracep->declBit(c+502,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_2 ");
    tracep->declBit(c+503,"pad", false,-1);
    tracep->declBit(c+503,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_3 ");
    tracep->declBit(c+504,"pad", false,-1);
    tracep->declBit(c+504,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_4 ");
    tracep->declBit(c+505,"pad", false,-1);
    tracep->declBit(c+505,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_5 ");
    tracep->declBit(c+506,"pad", false,-1);
    tracep->declBit(c+506,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_6 ");
    tracep->declBit(c+507,"pad", false,-1);
    tracep->declBit(c+507,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_7 ");
    tracep->declBit(c+508,"pad", false,-1);
    tracep->declBit(c+508,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_8 ");
    tracep->declBit(c+509,"pad", false,-1);
    tracep->declBit(c+509,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mygpio_soc_mygpio_in_pad_9 ");
    tracep->declBit(c+510,"pad", false,-1);
    tracep->declBit(c+510,"p2c", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pad ");
    tracep->declBit(c+477,"xi_pad", false,-1);
    tracep->declBit(c+477,"xo_pad", false,-1);
    tracep->declBit(c+642,"en", false,-1);
    tracep->declBit(c+477,"clk", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+477,"xi_pad", false,-1);
    tracep->declBit(c+477,"xo_pad", false,-1);
    tracep->declBit(c+642,"en", false,-1);
    tracep->declBit(c+477,"clk", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram_dio_list_pad_pad ");
    tracep->declBit(c+411,"pad", false,-1);
    tracep->declBit(c+13,"c2p", false,-1);
    tracep->declBit(c+14,"c2p_en", false,-1);
    tracep->declBit(c+411,"p2c", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+411,"pad", false,-1);
    tracep->declBit(c+13,"c2p", false,-1);
    tracep->declBit(c+14,"c2p_en", false,-1);
    tracep->declBit(c+411,"p2c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram_dio_list_pad_pad_1 ");
    tracep->declBit(c+412,"pad", false,-1);
    tracep->declBit(c+15,"c2p", false,-1);
    tracep->declBit(c+14,"c2p_en", false,-1);
    tracep->declBit(c+412,"p2c", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+412,"pad", false,-1);
    tracep->declBit(c+15,"c2p", false,-1);
    tracep->declBit(c+14,"c2p_en", false,-1);
    tracep->declBit(c+412,"p2c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram_dio_list_pad_pad_2 ");
    tracep->declBit(c+413,"pad", false,-1);
    tracep->declBit(c+16,"c2p", false,-1);
    tracep->declBit(c+14,"c2p_en", false,-1);
    tracep->declBit(c+413,"p2c", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+413,"pad", false,-1);
    tracep->declBit(c+16,"c2p", false,-1);
    tracep->declBit(c+14,"c2p_en", false,-1);
    tracep->declBit(c+413,"p2c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram_dio_list_pad_pad_3 ");
    tracep->declBit(c+414,"pad", false,-1);
    tracep->declBit(c+17,"c2p", false,-1);
    tracep->declBit(c+14,"c2p_en", false,-1);
    tracep->declBit(c+414,"p2c", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+414,"pad", false,-1);
    tracep->declBit(c+17,"c2p", false,-1);
    tracep->declBit(c+14,"c2p_en", false,-1);
    tracep->declBit(c+414,"p2c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram_nss_o_psram_nss_o_pad ");
    tracep->declBit(c+403,"pad", false,-1);
    tracep->declBit(c+403,"c2p", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+403,"pad", false,-1);
    tracep->declBit(c+403,"c2p", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram_nss_o_psram_nss_o_pad_1 ");
    tracep->declBit(c+158,"pad", false,-1);
    tracep->declBit(c+158,"c2p", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+158,"pad", false,-1);
    tracep->declBit(c+158,"c2p", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram_nss_o_psram_nss_o_pad_2 ");
    tracep->declBit(c+159,"pad", false,-1);
    tracep->declBit(c+159,"c2p", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+159,"pad", false,-1);
    tracep->declBit(c+159,"c2p", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram_sck_o_psram_sck_o_pad ");
    tracep->declBit(c+354,"pad", false,-1);
    tracep->declBit(c+354,"c2p", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+354,"pad", false,-1);
    tracep->declBit(c+354,"c2p", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("resetn_pad ");
    tracep->declBit(c+493,"pad", false,-1);
    tracep->declBit(c+493,"p2c", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+493,"pad", false,-1);
    tracep->declBit(c+493,"p2c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("soc ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+479,"cpuClock", false,-1);
    tracep->declBit(c+491,"uart0_rx", false,-1);
    tracep->declBit(c+492,"uart0_tx", false,-1);
    tracep->declBit(c+351,"spi_sck", false,-1);
    tracep->declBit(c+352,"spi_ss", false,-1);
    tracep->declBit(c+353,"spi_mosi", false,-1);
    tracep->declBit(c+494,"spi_miso", false,-1);
    tracep->declBit(c+354,"psram_sck_o", false,-1);
    tracep->declBus(c+402,"psram_nss_o", false,-1, 2,0);
    tracep->declBus(c+18,"psram_io_oe_o", false,-1, 3,0);
    tracep->declBus(c+415,"psram_io_di_i", false,-1, 3,0);
    tracep->declBus(c+19,"psram_io_do_o", false,-1, 3,0);
    tracep->declBus(c+643,"mygpio_out", false,-1, 15,0);
    tracep->declBus(c+482,"mygpio_in", false,-1, 15,0);
    tracep->declBus(c+644,"mygpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+645,"mygpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+646,"mygpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+647,"mygpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+648,"mygpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+649,"mygpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+650,"mygpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+651,"mygpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+437,"cpu_reset_REG_1", false,-1);
    tracep->declBit(c+438,"cpu_reset_REG", false,-1);
    tracep->pushNamePrefix("DefDevice ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+416,"auto_apply_in_psel", false,-1);
    tracep->declBit(c+417,"auto_apply_in_penable", false,-1);
    tracep->declBit(c+163,"auto_apply_in_pwrite", false,-1);
    tracep->declBus(c+418,"auto_apply_in_paddr", false,-1, 28,0);
    tracep->declBus(c+164,"auto_apply_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_apply_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+419,"auto_apply_in_pready", false,-1);
    tracep->declBus(c+511,"auto_apply_in_prdata", false,-1, 31,0);
    tracep->declBit(c+491,"extra_rx", false,-1);
    tracep->declBit(c+492,"extra_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+416,"in_psel", false,-1);
    tracep->declBit(c+417,"in_penable", false,-1);
    tracep->declBus(c+652,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+419,"in_pready", false,-1);
    tracep->declBit(c+653,"in_pslverr", false,-1);
    tracep->declBus(c+420,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+163,"in_pwrite", false,-1);
    tracep->declBus(c+511,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+164,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+491,"uart_rx", false,-1);
    tracep->declBit(c+492,"uart_tx", false,-1);
    tracep->declBit(c+20,"rtsn", false,-1);
    tracep->declBit(c+653,"ctsn", false,-1);
    tracep->declBit(c+21,"dtr_pad_o", false,-1);
    tracep->declBit(c+653,"dsr_pad_i", false,-1);
    tracep->declBit(c+653,"ri_pad_i", false,-1);
    tracep->declBit(c+653,"dcd_pad_i", false,-1);
    tracep->declBit(c+22,"interrupt", false,-1);
    tracep->declBit(c+512,"reg_we", false,-1);
    tracep->declBit(c+513,"reg_re", false,-1);
    tracep->declBus(c+421,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+422,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+166,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+462,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+23,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+477,"clk", false,-1);
    tracep->declBit(c+470,"wb_rst_i", false,-1);
    tracep->declBus(c+421,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+423,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+462,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+512,"wb_we_i", false,-1);
    tracep->declBit(c+513,"wb_re_i", false,-1);
    tracep->declBit(c+492,"stx_pad_o", false,-1);
    tracep->declBit(c+491,"srx_pad_i", false,-1);
    tracep->declBus(c+654,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+23,"rts_pad_o", false,-1);
    tracep->declBit(c+21,"dtr_pad_o", false,-1);
    tracep->declBit(c+22,"int_o", false,-1);
    tracep->declBit(c+355,"enable", false,-1);
    tracep->declBit(c+24,"srx_pad", false,-1);
    tracep->declBus(c+25,"ier", false,-1, 3,0);
    tracep->declBus(c+26,"iir", false,-1, 3,0);
    tracep->declBus(c+27,"fcr", false,-1, 1,0);
    tracep->declBus(c+28,"mcr", false,-1, 4,0);
    tracep->declBus(c+356,"lcr", false,-1, 7,0);
    tracep->declBus(c+29,"msr", false,-1, 7,0);
    tracep->declBus(c+357,"dl", false,-1, 15,0);
    tracep->declBus(c+30,"scratch", false,-1, 7,0);
    tracep->declBit(c+31,"start_dlc", false,-1);
    tracep->declBit(c+32,"lsr_mask_d", false,-1);
    tracep->declBit(c+33,"msi_reset", false,-1);
    tracep->declBus(c+358,"dlc", false,-1, 15,0);
    tracep->declBus(c+34,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+35,"rx_reset", false,-1);
    tracep->declBit(c+359,"tx_reset", false,-1);
    tracep->declBit(c+360,"dlab", false,-1);
    tracep->declBit(c+642,"cts_pad_i", false,-1);
    tracep->declBit(c+653,"dsr_pad_i", false,-1);
    tracep->declBit(c+653,"ri_pad_i", false,-1);
    tracep->declBit(c+653,"dcd_pad_i", false,-1);
    tracep->declBit(c+36,"loopback", false,-1);
    tracep->declBit(c+653,"cts", false,-1);
    tracep->declBit(c+642,"dsr", false,-1);
    tracep->declBit(c+642,"ri", false,-1);
    tracep->declBit(c+642,"dcd", false,-1);
    tracep->declBit(c+37,"cts_c", false,-1);
    tracep->declBit(c+38,"dsr_c", false,-1);
    tracep->declBit(c+39,"ri_c", false,-1);
    tracep->declBit(c+40,"dcd_c", false,-1);
    tracep->declBus(c+41,"lsr", false,-1, 7,0);
    tracep->declBit(c+361,"lsr0", false,-1);
    tracep->declBit(c+42,"lsr1", false,-1);
    tracep->declBit(c+43,"lsr2", false,-1);
    tracep->declBit(c+44,"lsr3", false,-1);
    tracep->declBit(c+45,"lsr4", false,-1);
    tracep->declBit(c+362,"lsr5", false,-1);
    tracep->declBit(c+363,"lsr6", false,-1);
    tracep->declBit(c+46,"lsr7", false,-1);
    tracep->declBit(c+47,"lsr0r", false,-1);
    tracep->declBit(c+48,"lsr1r", false,-1);
    tracep->declBit(c+49,"lsr2r", false,-1);
    tracep->declBit(c+50,"lsr3r", false,-1);
    tracep->declBit(c+51,"lsr4r", false,-1);
    tracep->declBit(c+52,"lsr5r", false,-1);
    tracep->declBit(c+53,"lsr6r", false,-1);
    tracep->declBit(c+54,"lsr7r", false,-1);
    tracep->declBit(c+471,"lsr_mask", false,-1);
    tracep->declBit(c+55,"rls_int", false,-1);
    tracep->declBit(c+56,"rda_int", false,-1);
    tracep->declBit(c+57,"ti_int", false,-1);
    tracep->declBit(c+58,"thre_int", false,-1);
    tracep->declBit(c+59,"ms_int", false,-1);
    tracep->declBit(c+364,"tf_push", false,-1);
    tracep->declBit(c+60,"rf_pop", false,-1);
    tracep->declBus(c+160,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+61,"rf_error_bit", false,-1);
    tracep->declBit(c+42,"rf_overrun", false,-1);
    tracep->declBit(c+365,"rf_push_pulse", false,-1);
    tracep->declBus(c+62,"rf_count", false,-1, 4,0);
    tracep->declBus(c+366,"tf_count", false,-1, 4,0);
    tracep->declBus(c+367,"tstate", false,-1, 2,0);
    tracep->declBus(c+368,"rstate", false,-1, 3,0);
    tracep->declBus(c+63,"counter_t", false,-1, 9,0);
    tracep->declBit(c+64,"thre_set_en", false,-1);
    tracep->declBus(c+65,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+369,"block_value", false,-1, 7,0);
    tracep->declBit(c+370,"serial_out", false,-1);
    tracep->declBit(c+371,"serial_in", false,-1);
    tracep->declBit(c+472,"lsr_mask_condition", false,-1);
    tracep->declBit(c+473,"iir_read", false,-1);
    tracep->declBit(c+474,"msr_read", false,-1);
    tracep->declBit(c+475,"fifo_read", false,-1);
    tracep->declBit(c+476,"fifo_write", false,-1);
    tracep->declBus(c+66,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+67,"lsr0_d", false,-1);
    tracep->declBit(c+68,"lsr1_d", false,-1);
    tracep->declBit(c+69,"lsr2_d", false,-1);
    tracep->declBit(c+70,"lsr3_d", false,-1);
    tracep->declBit(c+71,"lsr4_d", false,-1);
    tracep->declBit(c+72,"lsr5_d", false,-1);
    tracep->declBit(c+73,"lsr6_d", false,-1);
    tracep->declBit(c+74,"lsr7_d", false,-1);
    tracep->declBit(c+75,"rls_int_d", false,-1);
    tracep->declBit(c+76,"thre_int_d", false,-1);
    tracep->declBit(c+77,"ms_int_d", false,-1);
    tracep->declBit(c+78,"ti_int_d", false,-1);
    tracep->declBit(c+79,"rda_int_d", false,-1);
    tracep->declBit(c+80,"rls_int_rise", false,-1);
    tracep->declBit(c+81,"thre_int_rise", false,-1);
    tracep->declBit(c+82,"ms_int_rise", false,-1);
    tracep->declBit(c+83,"ti_int_rise", false,-1);
    tracep->declBit(c+84,"rda_int_rise", false,-1);
    tracep->declBit(c+85,"rls_int_pnd", false,-1);
    tracep->declBit(c+86,"rda_int_pnd", false,-1);
    tracep->declBit(c+87,"thre_int_pnd", false,-1);
    tracep->declBit(c+88,"ms_int_pnd", false,-1);
    tracep->declBit(c+89,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+655,"Tp", false,-1, 31,0);
    tracep->declBus(c+655,"width", false,-1, 31,0);
    tracep->declBus(c+656,"init_value", false,-1, 0,0);
    tracep->declBit(c+470,"rst_i", false,-1);
    tracep->declBit(c+477,"clk_i", false,-1);
    tracep->declBit(c+653,"stage1_rst_i", false,-1);
    tracep->declBit(c+642,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+491,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+24,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+90,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+477,"clk", false,-1);
    tracep->declBit(c+470,"wb_rst_i", false,-1);
    tracep->declBus(c+356,"lcr", false,-1, 7,0);
    tracep->declBit(c+60,"rf_pop", false,-1);
    tracep->declBit(c+371,"srx_pad_i", false,-1);
    tracep->declBit(c+355,"enable", false,-1);
    tracep->declBit(c+35,"rx_reset", false,-1);
    tracep->declBit(c+471,"lsr_mask", false,-1);
    tracep->declBus(c+63,"counter_t", false,-1, 9,0);
    tracep->declBus(c+62,"rf_count", false,-1, 4,0);
    tracep->declBus(c+160,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+42,"rf_overrun", false,-1);
    tracep->declBit(c+61,"rf_error_bit", false,-1);
    tracep->declBus(c+368,"rstate", false,-1, 3,0);
    tracep->declBit(c+365,"rf_push_pulse", false,-1);
    tracep->declBus(c+372,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+373,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+374,"rshift", false,-1, 7,0);
    tracep->declBit(c+375,"rparity", false,-1);
    tracep->declBit(c+376,"rparity_error", false,-1);
    tracep->declBit(c+377,"rframing_error", false,-1);
    tracep->declBit(c+91,"rbit_in", false,-1);
    tracep->declBit(c+378,"rparity_xor", false,-1);
    tracep->declBus(c+379,"counter_b", false,-1, 7,0);
    tracep->declBit(c+92,"rf_push_q", false,-1);
    tracep->declBus(c+380,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+381,"rf_push", false,-1);
    tracep->declBit(c+382,"break_error", false,-1);
    tracep->declBit(c+383,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+384,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+385,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+386,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+657,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+658,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+659,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+660,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+661,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+662,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+663,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+664,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+654,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+665,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+666,"sr_push", false,-1, 3,0);
    tracep->declBus(c+387,"toc_value", false,-1, 9,0);
    tracep->declBus(c+388,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+667,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+668,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+669,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+670,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+477,"clk", false,-1);
    tracep->declBit(c+470,"wb_rst_i", false,-1);
    tracep->declBit(c+365,"push", false,-1);
    tracep->declBit(c+60,"pop", false,-1);
    tracep->declBus(c+380,"data_in", false,-1, 10,0);
    tracep->declBit(c+35,"fifo_reset", false,-1);
    tracep->declBit(c+471,"reset_status", false,-1);
    tracep->declBus(c+160,"data_out", false,-1, 10,0);
    tracep->declBit(c+42,"overrun", false,-1);
    tracep->declBus(c+62,"count", false,-1, 4,0);
    tracep->declBit(c+61,"error_bit", false,-1);
    tracep->declBus(c+161,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+93+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+389,"top", false,-1, 3,0);
    tracep->declBus(c+109,"bottom", false,-1, 3,0);
    tracep->declBus(c+390,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+110,"word0", false,-1, 2,0);
    tracep->declBus(c+111,"word1", false,-1, 2,0);
    tracep->declBus(c+112,"word2", false,-1, 2,0);
    tracep->declBus(c+113,"word3", false,-1, 2,0);
    tracep->declBus(c+114,"word4", false,-1, 2,0);
    tracep->declBus(c+115,"word5", false,-1, 2,0);
    tracep->declBus(c+116,"word6", false,-1, 2,0);
    tracep->declBus(c+117,"word7", false,-1, 2,0);
    tracep->declBus(c+118,"word8", false,-1, 2,0);
    tracep->declBus(c+119,"word9", false,-1, 2,0);
    tracep->declBus(c+120,"word10", false,-1, 2,0);
    tracep->declBus(c+121,"word11", false,-1, 2,0);
    tracep->declBus(c+122,"word12", false,-1, 2,0);
    tracep->declBus(c+123,"word13", false,-1, 2,0);
    tracep->declBus(c+124,"word14", false,-1, 2,0);
    tracep->declBus(c+125,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+669,"addr_width", false,-1, 31,0);
    tracep->declBus(c+671,"data_width", false,-1, 31,0);
    tracep->declBus(c+668,"depth", false,-1, 31,0);
    tracep->declBit(c+477,"clk", false,-1);
    tracep->declBit(c+365,"we", false,-1);
    tracep->declBus(c+389,"a", false,-1, 3,0);
    tracep->declBus(c+109,"dpra", false,-1, 3,0);
    tracep->declBus(c+391,"di", false,-1, 7,0);
    tracep->declBus(c+161,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+167+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+477,"clk", false,-1);
    tracep->declBit(c+470,"wb_rst_i", false,-1);
    tracep->declBus(c+356,"lcr", false,-1, 7,0);
    tracep->declBit(c+364,"tf_push", false,-1);
    tracep->declBus(c+423,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+355,"enable", false,-1);
    tracep->declBit(c+359,"tx_reset", false,-1);
    tracep->declBit(c+471,"lsr_mask", false,-1);
    tracep->declBit(c+370,"stx_pad_o", false,-1);
    tracep->declBus(c+367,"tstate", false,-1, 2,0);
    tracep->declBus(c+366,"tf_count", false,-1, 4,0);
    tracep->declBus(c+392,"counter", false,-1, 4,0);
    tracep->declBus(c+393,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+394,"shift_out", false,-1, 6,0);
    tracep->declBit(c+395,"stx_o_tmp", false,-1);
    tracep->declBit(c+396,"parity_xor", false,-1);
    tracep->declBit(c+397,"tf_pop", false,-1);
    tracep->declBit(c+398,"bit_out", false,-1);
    tracep->declBus(c+423,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+404,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+126,"tf_overrun", false,-1);
    tracep->declBus(c+672,"s_idle", false,-1, 2,0);
    tracep->declBus(c+652,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+673,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+674,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+675,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+676,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+671,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+668,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+669,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+670,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+477,"clk", false,-1);
    tracep->declBit(c+470,"wb_rst_i", false,-1);
    tracep->declBit(c+364,"push", false,-1);
    tracep->declBit(c+397,"pop", false,-1);
    tracep->declBus(c+423,"data_in", false,-1, 7,0);
    tracep->declBit(c+359,"fifo_reset", false,-1);
    tracep->declBit(c+471,"reset_status", false,-1);
    tracep->declBus(c+404,"data_out", false,-1, 7,0);
    tracep->declBit(c+126,"overrun", false,-1);
    tracep->declBus(c+366,"count", false,-1, 4,0);
    tracep->declBus(c+399,"top", false,-1, 3,0);
    tracep->declBus(c+400,"bottom", false,-1, 3,0);
    tracep->declBus(c+401,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+669,"addr_width", false,-1, 31,0);
    tracep->declBus(c+671,"data_width", false,-1, 31,0);
    tracep->declBus(c+668,"depth", false,-1, 31,0);
    tracep->declBit(c+477,"clk", false,-1);
    tracep->declBit(c+364,"we", false,-1);
    tracep->declBus(c+399,"a", false,-1, 3,0);
    tracep->declBus(c+400,"dpra", false,-1, 3,0);
    tracep->declBus(c+423,"di", false,-1, 7,0);
    tracep->declBus(c+404,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+183+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("DefDevice_1 ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+249,"auto_apply_in_psel", false,-1);
    tracep->declBit(c+250,"auto_apply_in_penable", false,-1);
    tracep->declBit(c+163,"auto_apply_in_pwrite", false,-1);
    tracep->declBus(c+424,"auto_apply_in_paddr", false,-1, 29,0);
    tracep->declBus(c+164,"auto_apply_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_apply_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+514,"auto_apply_in_pready", false,-1);
    tracep->declBus(c+162,"auto_apply_in_prdata", false,-1, 31,0);
    tracep->declBit(c+351,"extra_sck", false,-1);
    tracep->declBit(c+352,"extra_ss", false,-1);
    tracep->declBit(c+353,"extra_mosi", false,-1);
    tracep->declBit(c+494,"extra_miso", false,-1);
    tracep->pushNamePrefix("_GEN_11 ");
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->pushNamePrefix("clgen ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("DefDevice_2 ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+251,"auto_apply_in_psel", false,-1);
    tracep->declBit(c+252,"auto_apply_in_penable", false,-1);
    tracep->declBit(c+163,"auto_apply_in_pwrite", false,-1);
    tracep->declBus(c+424,"auto_apply_in_paddr", false,-1, 29,0);
    tracep->declBus(c+164,"auto_apply_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_apply_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+677,"auto_apply_in_pready", false,-1);
    tracep->declBus(c+678,"auto_apply_in_prdata", false,-1, 31,0);
    tracep->declBus(c+643,"extra_out", false,-1, 15,0);
    tracep->declBus(c+482,"extra_in", false,-1, 15,0);
    tracep->declBus(c+644,"extra_seg_0", false,-1, 7,0);
    tracep->declBus(c+645,"extra_seg_1", false,-1, 7,0);
    tracep->declBus(c+646,"extra_seg_2", false,-1, 7,0);
    tracep->declBus(c+647,"extra_seg_3", false,-1, 7,0);
    tracep->declBus(c+648,"extra_seg_4", false,-1, 7,0);
    tracep->declBus(c+649,"extra_seg_5", false,-1, 7,0);
    tracep->declBus(c+650,"extra_seg_6", false,-1, 7,0);
    tracep->declBus(c+651,"extra_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBus(c+425,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+251,"in_psel", false,-1);
    tracep->declBit(c+252,"in_penable", false,-1);
    tracep->declBus(c+652,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+163,"in_pwrite", false,-1);
    tracep->declBus(c+164,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+677,"in_pready", false,-1);
    tracep->declBus(c+678,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+679,"in_pslverr", false,-1);
    tracep->declBus(c+643,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+482,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+644,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+645,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+646,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+647,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+648,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+649,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+650,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+651,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DefDevice_3 ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+253,"auto_apply_in_psel", false,-1);
    tracep->declBit(c+254,"auto_apply_in_penable", false,-1);
    tracep->declBit(c+163,"auto_apply_in_pwrite", false,-1);
    tracep->declBus(c+426,"auto_apply_in_paddr", false,-1, 31,0);
    tracep->declBus(c+164,"auto_apply_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_apply_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+515,"auto_apply_in_pready", false,-1);
    tracep->declBus(c+405,"auto_apply_in_prdata", false,-1, 31,0);
    tracep->declBit(c+354,"extra_sck_o", false,-1);
    tracep->declBus(c+402,"extra_nss_o", false,-1, 2,0);
    tracep->declBus(c+18,"extra_io_oe_o", false,-1, 3,0);
    tracep->declBus(c+415,"extra_io_di_i", false,-1, 3,0);
    tracep->declBus(c+19,"extra_io_do_o", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+253,"io_in_psel", false,-1);
    tracep->declBit(c+254,"io_in_penable", false,-1);
    tracep->declBit(c+163,"io_in_pwrite", false,-1);
    tracep->declBus(c+426,"io_in_paddr", false,-1, 31,0);
    tracep->declBus(c+164,"io_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"io_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+515,"io_in_pready", false,-1);
    tracep->declBus(c+405,"io_in_prdata", false,-1, 31,0);
    tracep->declBit(c+354,"io_qspi_sck_o", false,-1);
    tracep->declBus(c+402,"io_qspi_nss_o", false,-1, 2,0);
    tracep->declBus(c+18,"io_qspi_io_oe_o", false,-1, 3,0);
    tracep->declBus(c+415,"io_qspi_io_di_i", false,-1, 3,0);
    tracep->declBus(c+19,"io_qspi_io_do_o", false,-1, 3,0);
    tracep->declBus(c+199,"addrReg", false,-1, 31,0);
    tracep->declBus(c+200,"wdataReg", false,-1, 31,0);
    tracep->declBus(c+201,"wstrbReg", false,-1, 3,0);
    tracep->declBit(c+202,"active", false,-1);
    tracep->declBit(c+427,"setup", false,-1);
    tracep->pushNamePrefix("npsram ");
    tracep->declBus(c+680,"nss", false,-1, 31,0);
    tracep->declBit(c+477,"clk_i", false,-1);
    tracep->declBit(c+469,"rst_n_i", false,-1);
    tracep->declBit(c+202,"nmi_valid", false,-1);
    tracep->declBus(c+199,"nmi_addr", false,-1, 31,0);
    tracep->declBus(c+200,"nmi_wdata", false,-1, 31,0);
    tracep->declBus(c+201,"nmi_wstrb", false,-1, 3,0);
    tracep->declBus(c+405,"nmi_rdata", false,-1, 31,0);
    tracep->declBit(c+406,"nmi_ready", false,-1);
    tracep->declBit(c+354,"psram_sck_o", false,-1);
    tracep->declBus(c+402,"psram_nss_o", false,-1, 2,0);
    tracep->declBus(c+18,"psram_io_oe_o", false,-1, 3,0);
    tracep->declBus(c+415,"psram_io_di_i", false,-1, 3,0);
    tracep->declBus(c+19,"psram_io_do_o", false,-1, 3,0);
    tracep->declBit(c+653,"psram_irq_o", false,-1);
    tracep->declBus(c+681,"FSM_IDLE", false,-1, 5,0);
    tracep->declBus(c+682,"FSM_WE_ST", false,-1, 5,0);
    tracep->declBus(c+683,"FSM_WE", false,-1, 5,0);
    tracep->declBus(c+684,"FSM_RD_ST", false,-1, 5,0);
    tracep->declBus(c+685,"FSM_RD", false,-1, 5,0);
    tracep->declBus(c+127,"r_cfg_wait", false,-1, 4,0);
    tracep->declBus(c+128,"r_cfg_chd", false,-1, 2,0);
    tracep->declBit(c+129,"r_cfg_init", false,-1);
    tracep->declBit(c+203,"s_cfg_reg_sel", false,-1);
    tracep->declBit(c+407,"s_mem_sel", false,-1);
    tracep->declBit(c+130,"s_mem_ready", false,-1);
    tracep->declBus(c+131,"s_mem_rdata", false,-1, 31,0);
    tracep->declBit(c+132,"r_rd_st", false,-1);
    tracep->declBit(c+133,"r_wr_st", false,-1);
    tracep->declBus(c+134,"r_xfer_data_bit_cnt", false,-1, 7,0);
    tracep->declBus(c+135,"r_fsm_state", false,-1, 5,0);
    tracep->declBus(c+136,"r_mem_addr", false,-1, 23,0);
    tracep->declBus(c+137,"r_mem_wdata", false,-1, 31,0);
    tracep->declBit(c+138,"s_psram_ce", false,-1);
    tracep->declBit(c+139,"s_psram_sio_oen", false,-1);
    tracep->declBus(c+204,"s_disp_addr_ofst", false,-1, 1,0);
    tracep->declBus(c+205,"s_disp_xfer_bit_cnt", false,-1, 7,0);
    tracep->declBus(c+206,"s_disp_wdata", false,-1, 31,0);
    tracep->declBit(c+140,"s_init_done", false,-1);
    tracep->declBit(c+141,"s_core_idle", false,-1);
    tracep->declBit(c+408,"s_mem_valid_re", false,-1);
    tracep->declBit(c+409,"nmi_valid_real", false,-1);
    tracep->declBit(c+142,"nmi_valid_real_delay", false,-1);
    tracep->pushNamePrefix("u_psram_core ");
    tracep->declBit(c+477,"clk_i", false,-1);
    tracep->declBit(c+469,"rst_n_i", false,-1);
    tracep->declBus(c+127,"cfg_wait_i", false,-1, 4,0);
    tracep->declBus(c+128,"cfg_chd_i", false,-1, 2,0);
    tracep->declBit(c+129,"cfg_init_i", false,-1);
    tracep->declBit(c+130,"mem_ready_o", false,-1);
    tracep->declBus(c+136,"mem_addr_i", false,-1, 23,0);
    tracep->declBus(c+137,"mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+131,"mem_rdata_o", false,-1, 31,0);
    tracep->declBus(c+134,"xfer_data_bit_cnt_i", false,-1, 7,0);
    tracep->declBit(c+132,"rd_st_i", false,-1);
    tracep->declBit(c+133,"wr_st_i", false,-1);
    tracep->declBit(c+140,"init_done_o", false,-1);
    tracep->declBit(c+141,"idle_o", false,-1);
    tracep->declBit(c+354,"psram_sclk_o", false,-1);
    tracep->declBit(c+138,"psram_ce_o", false,-1);
    tracep->declBit(c+411,"psram_mosi_i", false,-1);
    tracep->declBit(c+412,"psram_miso_i", false,-1);
    tracep->declBit(c+413,"psram_sio2_i", false,-1);
    tracep->declBit(c+414,"psram_sio3_i", false,-1);
    tracep->declBit(c+13,"psram_mosi_o", false,-1);
    tracep->declBit(c+15,"psram_miso_o", false,-1);
    tracep->declBit(c+16,"psram_sio2_o", false,-1);
    tracep->declBit(c+17,"psram_sio3_o", false,-1);
    tracep->declBit(c+139,"psram_sio_oen_o", false,-1);
    tracep->declBus(c+686,"FSM_INIT", false,-1, 4,0);
    tracep->declBus(c+687,"FSM_RSTEN", false,-1, 4,0);
    tracep->declBus(c+688,"FSM_RSTEN2RST", false,-1, 4,0);
    tracep->declBus(c+689,"FSM_RST", false,-1, 4,0);
    tracep->declBus(c+690,"FSM_RST2QE", false,-1, 4,0);
    tracep->declBus(c+691,"FSM_QE", false,-1, 4,0);
    tracep->declBus(c+692,"FSM_QE2IDLE", false,-1, 4,0);
    tracep->declBus(c+693,"FSM_IDLE", false,-1, 4,0);
    tracep->declBus(c+694,"FSM_SEND", false,-1, 4,0);
    tracep->declBus(c+695,"FSM_SEND_QPI", false,-1, 4,0);
    tracep->declBus(c+696,"FSM_RD_PRE_QPI", false,-1, 4,0);
    tracep->declBus(c+697,"FSM_RD_QPI", false,-1, 4,0);
    tracep->declBus(c+698,"FSM_WR_QPI", false,-1, 4,0);
    tracep->declBus(c+699,"FSM_RD2IDLE", false,-1, 4,0);
    tracep->declBus(c+700,"FSM_WR2IDLE", false,-1, 4,0);
    tracep->declBus(c+143,"r_fsm_state", false,-1, 4,0);
    tracep->declBus(c+144,"r_fsm_state_tgt", false,-1, 4,0);
    tracep->declBus(c+145,"r_boot_cnt", false,-1, 17,0);
    tracep->declBus(c+146,"r_xfer_ca", false,-1, 31,0);
    tracep->declBus(c+131,"r_xfer_data", false,-1, 31,0);
    tracep->declBus(c+147,"r_xfer_ca_bit_cnt", false,-1, 7,0);
    tracep->declBus(c+148,"r_xfer_data_bit_cnt", false,-1, 7,0);
    tracep->declBus(c+149,"r_xfer_byte_data", false,-1, 7,0);
    tracep->declBus(c+150,"r_ce_cnt", false,-1, 4,0);
    tracep->declBus(c+151,"r_rd_wait_cnt", false,-1, 3,0);
    tracep->declBus(c+152,"r_cfg_chd", false,-1, 2,0);
    tracep->declBit(c+153,"r_dev_rst", false,-1);
    tracep->declBit(c+154,"r_wr_st", false,-1);
    tracep->declBit(c+155,"r_rd_st", false,-1);
    tracep->declBit(c+140,"r_init_done", false,-1);
    tracep->declBit(c+156,"s_xfer_new_byte_upd", false,-1);
    tracep->declBus(c+157,"s_xfer_new_byte", false,-1, 7,0);
    tracep->pushNamePrefix("u_load_new_byte ");
    tracep->declBus(c+148,"xfer_data_bit_cnt_i", false,-1, 7,0);
    tracep->declBus(c+131,"wr_data_i", false,-1, 31,0);
    tracep->declBit(c+156,"xfer_new_byte_upd_o", false,-1);
    tracep->declBus(c+157,"xfer_new_byte_o", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_wr_dispatcher ");
    tracep->declBus(c+201,"wstrb_i", false,-1, 3,0);
    tracep->declBus(c+200,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+204,"addr_ofst_o", false,-1, 1,0);
    tracep->declBus(c+205,"xfer_bit_cnt_o", false,-1, 7,0);
    tracep->declBus(c+206,"wdata_o", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+207,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+208,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+163,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+426,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+164,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+463,"auto_anon_in_pready", false,-1);
    tracep->declBus(c+464,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+251,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+252,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+163,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+424,"auto_anon_out_3_paddr", false,-1, 29,0);
    tracep->declBus(c+164,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+677,"auto_anon_out_3_pready", false,-1);
    tracep->declBus(c+678,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+253,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+254,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+163,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+426,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+164,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+515,"auto_anon_out_2_pready", false,-1);
    tracep->declBus(c+405,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+416,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+417,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+163,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+418,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+164,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+419,"auto_anon_out_1_pready", false,-1);
    tracep->declBus(c+511,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+249,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+250,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+163,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+424,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+164,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+514,"auto_anon_out_0_pready", false,-1);
    tracep->declBus(c+162,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+428,"sel_0", false,-1);
    tracep->declBit(c+429,"sel_1", false,-1);
    tracep->declBit(c+430,"sel_2", false,-1);
    tracep->declBit(c+431,"sel_3", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+209,"auto_in_awready", false,-1);
    tracep->declBit(c+210,"auto_in_awvalid", false,-1);
    tracep->declBus(c+211,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+701,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+212,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_in_wready", false,-1);
    tracep->declBit(c+213,"auto_in_wvalid", false,-1);
    tracep->declBus(c+214,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+215,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+216,"auto_in_bready", false,-1);
    tracep->declBit(c+465,"auto_in_bvalid", false,-1);
    tracep->declBit(c+217,"auto_in_arready", false,-1);
    tracep->declBit(c+218,"auto_in_arvalid", false,-1);
    tracep->declBus(c+219,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+701,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+220,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+221,"auto_in_rready", false,-1);
    tracep->declBit(c+466,"auto_in_rvalid", false,-1);
    tracep->declBus(c+467,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+207,"auto_out_psel", false,-1);
    tracep->declBit(c+208,"auto_out_penable", false,-1);
    tracep->declBit(c+163,"auto_out_pwrite", false,-1);
    tracep->declBus(c+426,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+164,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+165,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+463,"auto_out_pready", false,-1);
    tracep->declBus(c+464,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+465,"nodeIn_bvalid", false,-1);
    tracep->declBit(c+466,"nodeIn_rvalid", false,-1);
    tracep->declBit(c+208,"nodeOut_penable", false,-1);
    tracep->declBus(c+222,"state", false,-1, 1,0);
    tracep->declBit(c+217,"accept_read", false,-1);
    tracep->declBit(c+209,"accept_write", false,-1);
    tracep->declBit(c+163,"is_write", false,-1);
    tracep->declBus(c+516,"casez_tmp", false,-1, 1,0);
    tracep->declBus(c+223,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+224,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+164,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+225,"wstrb_reg", false,-1, 3,0);
    tracep->declBus(c+226,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+209,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+210,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+211,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+701,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+212,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+213,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+214,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+215,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+216,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+465,"auto_anon_in_bvalid", false,-1);
    tracep->declBit(c+217,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+218,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+219,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+701,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+220,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+221,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+466,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+467,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBit(c+209,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+210,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+211,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+701,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+212,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+213,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+214,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+215,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+216,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+465,"auto_anon_out_bvalid", false,-1);
    tracep->declBit(c+217,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+218,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+219,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+701,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+220,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBit(c+221,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+466,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+467,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cdc ");
    tracep->declBit(c+209,"auto_sink_out_awready", false,-1);
    tracep->declBit(c+210,"auto_sink_out_awvalid", false,-1);
    tracep->declBus(c+211,"auto_sink_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+701,"auto_sink_out_awlen", false,-1, 7,0);
    tracep->declBus(c+212,"auto_sink_out_awsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_sink_out_wready", false,-1);
    tracep->declBit(c+213,"auto_sink_out_wvalid", false,-1);
    tracep->declBus(c+214,"auto_sink_out_wdata", false,-1, 31,0);
    tracep->declBus(c+215,"auto_sink_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+216,"auto_sink_out_bready", false,-1);
    tracep->declBit(c+465,"auto_sink_out_bvalid", false,-1);
    tracep->declBit(c+217,"auto_sink_out_arready", false,-1);
    tracep->declBit(c+218,"auto_sink_out_arvalid", false,-1);
    tracep->declBus(c+219,"auto_sink_out_araddr", false,-1, 31,0);
    tracep->declBus(c+701,"auto_sink_out_arlen", false,-1, 7,0);
    tracep->declBus(c+220,"auto_sink_out_arsize", false,-1, 2,0);
    tracep->declBit(c+221,"auto_sink_out_rready", false,-1);
    tracep->declBit(c+466,"auto_sink_out_rvalid", false,-1);
    tracep->declBus(c+467,"auto_sink_out_rdata", false,-1, 31,0);
    tracep->declBit(c+440,"auto_source_in_awready", false,-1);
    tracep->declBit(c+265,"auto_source_in_awvalid", false,-1);
    tracep->declBus(c+3,"auto_source_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+266,"auto_source_in_awsize", false,-1, 2,0);
    tracep->declBit(c+441,"auto_source_in_wready", false,-1);
    tracep->declBit(c+267,"auto_source_in_wvalid", false,-1);
    tracep->declBus(c+4,"auto_source_in_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"auto_source_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+268,"auto_source_in_bready", false,-1);
    tracep->declBit(c+442,"auto_source_in_bvalid", false,-1);
    tracep->declBit(c+443,"auto_source_in_arready", false,-1);
    tracep->declBit(c+269,"auto_source_in_arvalid", false,-1);
    tracep->declBus(c+6,"auto_source_in_araddr", false,-1, 31,0);
    tracep->declBus(c+270,"auto_source_in_arsize", false,-1, 2,0);
    tracep->declBit(c+271,"auto_source_in_rready", false,-1);
    tracep->declBit(c+444,"auto_source_in_rvalid", false,-1);
    tracep->declBus(c+445,"auto_source_in_rdata", false,-1, 31,0);
    tracep->declBit(c+479,"io_in_clock", false,-1);
    tracep->declBit(c+439,"io_in_reset", false,-1);
    tracep->declBit(c+477,"io_out_clock", false,-1);
    tracep->declBit(c+470,"io_out_reset", false,-1);
    tracep->pushNamePrefix("sink ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBus(c+3,"auto_in_awbits0_addr", false,-1, 31,0);
    tracep->declBus(c+266,"auto_in_awbits0_size", false,-1, 2,0);
    tracep->declBus(c+272,"auto_in_awbits1_addr", false,-1, 31,0);
    tracep->declBus(c+273,"auto_in_awbits1_size", false,-1, 2,0);
    tracep->declBit(c+274,"auto_in_awvalid", false,-1);
    tracep->declBus(c+275,"auto_in_awsource", false,-1, 1,0);
    tracep->declBit(c+227,"auto_in_awready", false,-1);
    tracep->declBus(c+432,"auto_in_awsink", false,-1, 1,0);
    tracep->declBus(c+4,"auto_in_wbits0_data", false,-1, 31,0);
    tracep->declBus(c+5,"auto_in_wbits0_strb", false,-1, 3,0);
    tracep->declBus(c+276,"auto_in_wbits1_data", false,-1, 31,0);
    tracep->declBus(c+277,"auto_in_wbits1_strb", false,-1, 3,0);
    tracep->declBit(c+278,"auto_in_wvalid", false,-1);
    tracep->declBus(c+279,"auto_in_wsource", false,-1, 1,0);
    tracep->declBit(c+228,"auto_in_wready", false,-1);
    tracep->declBus(c+433,"auto_in_wsink", false,-1, 1,0);
    tracep->declBit(c+229,"auto_in_bvalid", false,-1);
    tracep->declBus(c+434,"auto_in_bsource", false,-1, 1,0);
    tracep->declBit(c+268,"auto_in_bready", false,-1);
    tracep->declBus(c+280,"auto_in_bsink", false,-1, 1,0);
    tracep->declBus(c+6,"auto_in_arbits0_addr", false,-1, 31,0);
    tracep->declBus(c+270,"auto_in_arbits0_size", false,-1, 2,0);
    tracep->declBus(c+281,"auto_in_arbits1_addr", false,-1, 31,0);
    tracep->declBus(c+282,"auto_in_arbits1_size", false,-1, 2,0);
    tracep->declBit(c+283,"auto_in_arvalid", false,-1);
    tracep->declBus(c+284,"auto_in_arsource", false,-1, 1,0);
    tracep->declBit(c+230,"auto_in_arready", false,-1);
    tracep->declBus(c+435,"auto_in_arsink", false,-1, 1,0);
    tracep->declBus(c+231,"auto_in_rbits0_data", false,-1, 31,0);
    tracep->declBus(c+232,"auto_in_rbits1_data", false,-1, 31,0);
    tracep->declBit(c+233,"auto_in_rvalid", false,-1);
    tracep->declBus(c+436,"auto_in_rsource", false,-1, 1,0);
    tracep->declBit(c+271,"auto_in_rready", false,-1);
    tracep->declBus(c+285,"auto_in_rsink", false,-1, 1,0);
    tracep->declBit(c+209,"auto_out_awready", false,-1);
    tracep->declBit(c+210,"auto_out_awvalid", false,-1);
    tracep->declBus(c+211,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+701,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+212,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_out_wready", false,-1);
    tracep->declBit(c+213,"auto_out_wvalid", false,-1);
    tracep->declBus(c+214,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+215,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+216,"auto_out_bready", false,-1);
    tracep->declBit(c+465,"auto_out_bvalid", false,-1);
    tracep->declBit(c+217,"auto_out_arready", false,-1);
    tracep->declBit(c+218,"auto_out_arvalid", false,-1);
    tracep->declBus(c+219,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+701,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+220,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+221,"auto_out_rready", false,-1);
    tracep->declBit(c+466,"auto_out_rvalid", false,-1);
    tracep->declBus(c+467,"auto_out_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("nodeIn_bsource ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+465,"io_enq_valid", false,-1);
    tracep->declBit(c+229,"io_deq_valid", false,-1);
    tracep->declBus(c+434,"io_deq_source", false,-1, 1,0);
    tracep->declBit(c+268,"io_deq_ready", false,-1);
    tracep->declBus(c+280,"io_deq_sink", false,-1, 1,0);
    tracep->declBit(c+234,"enq_in_REG", false,-1);
    tracep->declBus(c+434,"count", false,-1, 1,0);
    tracep->declBit(c+446,"equal", false,-1);
    tracep->declBit(c+447,"enq_q_io_deq_ready", false,-1);
    tracep->pushNamePrefix("enq_q ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+517,"io_enq_valid", false,-1);
    tracep->declBit(c+447,"io_deq_ready", false,-1);
    tracep->declBit(c+229,"io_deq_valid", false,-1);
    tracep->declBit(c+229,"valid_0", false,-1);
    tracep->declBit(c+236,"valid_1", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rsource ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+466,"io_enq_valid", false,-1);
    tracep->declBus(c+467,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+231,"io_deq_bits0_data", false,-1, 31,0);
    tracep->declBus(c+232,"io_deq_bits1_data", false,-1, 31,0);
    tracep->declBit(c+233,"io_deq_valid", false,-1);
    tracep->declBus(c+436,"io_deq_source", false,-1, 1,0);
    tracep->declBit(c+271,"io_deq_ready", false,-1);
    tracep->declBus(c+285,"io_deq_sink", false,-1, 1,0);
    tracep->declBit(c+234,"enq_in_REG", false,-1);
    tracep->declBus(c+436,"count", false,-1, 1,0);
    tracep->declBit(c+448,"equal", false,-1);
    tracep->declBus(c+232,"io_deq_bits1_rdata", false,-1, 31,0);
    tracep->declBit(c+449,"enq_q_io_deq_ready", false,-1);
    tracep->pushNamePrefix("enq_q ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+518,"io_enq_valid", false,-1);
    tracep->declBus(c+467,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBit(c+449,"io_deq_ready", false,-1);
    tracep->declBit(c+233,"io_deq_valid", false,-1);
    tracep->declBus(c+231,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBit(c+233,"valid_0", false,-1);
    tracep->declBit(c+238,"valid_1", false,-1);
    tracep->declBus(c+231,"elts_0_data", false,-1, 31,0);
    tracep->declBus(c+239,"elts_1_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_arsink ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBus(c+6,"io_enq_bits0_addr", false,-1, 31,0);
    tracep->declBus(c+270,"io_enq_bits0_size", false,-1, 2,0);
    tracep->declBus(c+281,"io_enq_bits1_addr", false,-1, 31,0);
    tracep->declBus(c+282,"io_enq_bits1_size", false,-1, 2,0);
    tracep->declBit(c+283,"io_enq_valid", false,-1);
    tracep->declBus(c+284,"io_enq_source", false,-1, 1,0);
    tracep->declBit(c+230,"io_enq_ready", false,-1);
    tracep->declBus(c+435,"io_enq_sink", false,-1, 1,0);
    tracep->declBit(c+217,"io_deq_ready", false,-1);
    tracep->declBit(c+218,"io_deq_valid", false,-1);
    tracep->declBus(c+219,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+701,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+220,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+435,"count", false,-1, 1,0);
    tracep->declBit(c+450,"equal", false,-1);
    tracep->declBit(c+451,"deq_valid", false,-1);
    tracep->pushNamePrefix("io_deq_q ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+230,"io_enq_ready", false,-1);
    tracep->declBit(c+451,"io_enq_valid", false,-1);
    tracep->declBus(c+519,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+452,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBit(c+217,"io_deq_ready", false,-1);
    tracep->declBit(c+218,"io_deq_valid", false,-1);
    tracep->declBus(c+219,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+220,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+218,"valid_0", false,-1);
    tracep->declBit(c+240,"valid_1", false,-1);
    tracep->declBus(c+219,"elts_0_addr", false,-1, 31,0);
    tracep->declBus(c+220,"elts_0_size", false,-1, 2,0);
    tracep->declBus(c+241,"elts_1_addr", false,-1, 31,0);
    tracep->declBus(c+242,"elts_1_size", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awsink ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBus(c+3,"io_enq_bits0_addr", false,-1, 31,0);
    tracep->declBus(c+266,"io_enq_bits0_size", false,-1, 2,0);
    tracep->declBus(c+272,"io_enq_bits1_addr", false,-1, 31,0);
    tracep->declBus(c+273,"io_enq_bits1_size", false,-1, 2,0);
    tracep->declBit(c+274,"io_enq_valid", false,-1);
    tracep->declBus(c+275,"io_enq_source", false,-1, 1,0);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBus(c+432,"io_enq_sink", false,-1, 1,0);
    tracep->declBit(c+209,"io_deq_ready", false,-1);
    tracep->declBit(c+210,"io_deq_valid", false,-1);
    tracep->declBus(c+211,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+701,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+212,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+432,"count", false,-1, 1,0);
    tracep->declBit(c+453,"equal", false,-1);
    tracep->declBit(c+454,"deq_valid", false,-1);
    tracep->pushNamePrefix("io_deq_q ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+454,"io_enq_valid", false,-1);
    tracep->declBus(c+520,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+455,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBit(c+209,"io_deq_ready", false,-1);
    tracep->declBit(c+210,"io_deq_valid", false,-1);
    tracep->declBus(c+211,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+212,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+210,"valid_0", false,-1);
    tracep->declBit(c+243,"valid_1", false,-1);
    tracep->declBus(c+211,"elts_0_addr", false,-1, 31,0);
    tracep->declBus(c+212,"elts_0_size", false,-1, 2,0);
    tracep->declBus(c+244,"elts_1_addr", false,-1, 31,0);
    tracep->declBus(c+245,"elts_1_size", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wsink ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBus(c+4,"io_enq_bits0_data", false,-1, 31,0);
    tracep->declBus(c+5,"io_enq_bits0_strb", false,-1, 3,0);
    tracep->declBus(c+276,"io_enq_bits1_data", false,-1, 31,0);
    tracep->declBus(c+277,"io_enq_bits1_strb", false,-1, 3,0);
    tracep->declBit(c+278,"io_enq_valid", false,-1);
    tracep->declBus(c+279,"io_enq_source", false,-1, 1,0);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBus(c+433,"io_enq_sink", false,-1, 1,0);
    tracep->declBit(c+209,"io_deq_ready", false,-1);
    tracep->declBit(c+213,"io_deq_valid", false,-1);
    tracep->declBus(c+214,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+215,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBus(c+433,"count", false,-1, 1,0);
    tracep->declBit(c+456,"equal", false,-1);
    tracep->declBit(c+457,"deq_valid", false,-1);
    tracep->pushNamePrefix("io_deq_q ");
    tracep->declBit(c+477,"clock", false,-1);
    tracep->declBit(c+470,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+457,"io_enq_valid", false,-1);
    tracep->declBus(c+521,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+522,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+209,"io_deq_ready", false,-1);
    tracep->declBit(c+213,"io_deq_valid", false,-1);
    tracep->declBus(c+214,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+215,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+213,"valid_0", false,-1);
    tracep->declBit(c+246,"valid_1", false,-1);
    tracep->declBus(c+214,"elts_0_data", false,-1, 31,0);
    tracep->declBus(c+215,"elts_0_strb", false,-1, 3,0);
    tracep->declBus(c+247,"elts_1_data", false,-1, 31,0);
    tracep->declBus(c+248,"elts_1_strb", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("source ");
    tracep->declBit(c+479,"clock", false,-1);
    tracep->declBit(c+439,"reset", false,-1);
    tracep->declBit(c+440,"auto_in_awready", false,-1);
    tracep->declBit(c+265,"auto_in_awvalid", false,-1);
    tracep->declBus(c+3,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+266,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+441,"auto_in_wready", false,-1);
    tracep->declBit(c+267,"auto_in_wvalid", false,-1);
    tracep->declBus(c+4,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+268,"auto_in_bready", false,-1);
    tracep->declBit(c+442,"auto_in_bvalid", false,-1);
    tracep->declBit(c+443,"auto_in_arready", false,-1);
    tracep->declBit(c+269,"auto_in_arvalid", false,-1);
    tracep->declBus(c+6,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+270,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+271,"auto_in_rready", false,-1);
    tracep->declBit(c+444,"auto_in_rvalid", false,-1);
    tracep->declBus(c+445,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+3,"auto_out_awbits0_addr", false,-1, 31,0);
    tracep->declBus(c+266,"auto_out_awbits0_size", false,-1, 2,0);
    tracep->declBus(c+272,"auto_out_awbits1_addr", false,-1, 31,0);
    tracep->declBus(c+273,"auto_out_awbits1_size", false,-1, 2,0);
    tracep->declBit(c+274,"auto_out_awvalid", false,-1);
    tracep->declBus(c+275,"auto_out_awsource", false,-1, 1,0);
    tracep->declBit(c+227,"auto_out_awready", false,-1);
    tracep->declBus(c+432,"auto_out_awsink", false,-1, 1,0);
    tracep->declBus(c+4,"auto_out_wbits0_data", false,-1, 31,0);
    tracep->declBus(c+5,"auto_out_wbits0_strb", false,-1, 3,0);
    tracep->declBus(c+276,"auto_out_wbits1_data", false,-1, 31,0);
    tracep->declBus(c+277,"auto_out_wbits1_strb", false,-1, 3,0);
    tracep->declBit(c+278,"auto_out_wvalid", false,-1);
    tracep->declBus(c+279,"auto_out_wsource", false,-1, 1,0);
    tracep->declBit(c+228,"auto_out_wready", false,-1);
    tracep->declBus(c+433,"auto_out_wsink", false,-1, 1,0);
    tracep->declBit(c+229,"auto_out_bvalid", false,-1);
    tracep->declBus(c+434,"auto_out_bsource", false,-1, 1,0);
    tracep->declBit(c+268,"auto_out_bready", false,-1);
    tracep->declBus(c+280,"auto_out_bsink", false,-1, 1,0);
    tracep->declBus(c+6,"auto_out_arbits0_addr", false,-1, 31,0);
    tracep->declBus(c+270,"auto_out_arbits0_size", false,-1, 2,0);
    tracep->declBus(c+281,"auto_out_arbits1_addr", false,-1, 31,0);
    tracep->declBus(c+282,"auto_out_arbits1_size", false,-1, 2,0);
    tracep->declBit(c+283,"auto_out_arvalid", false,-1);
    tracep->declBus(c+284,"auto_out_arsource", false,-1, 1,0);
    tracep->declBit(c+230,"auto_out_arready", false,-1);
    tracep->declBus(c+435,"auto_out_arsink", false,-1, 1,0);
    tracep->declBus(c+231,"auto_out_rbits0_data", false,-1, 31,0);
    tracep->declBus(c+232,"auto_out_rbits1_data", false,-1, 31,0);
    tracep->declBit(c+233,"auto_out_rvalid", false,-1);
    tracep->declBus(c+436,"auto_out_rsource", false,-1, 1,0);
    tracep->declBit(c+271,"auto_out_rready", false,-1);
    tracep->declBus(c+285,"auto_out_rsink", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bsink ");
    tracep->declBit(c+479,"clock", false,-1);
    tracep->declBit(c+439,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_valid", false,-1);
    tracep->declBus(c+434,"io_enq_source", false,-1, 1,0);
    tracep->declBit(c+268,"io_enq_ready", false,-1);
    tracep->declBus(c+280,"io_enq_sink", false,-1, 1,0);
    tracep->declBit(c+268,"io_deq_ready", false,-1);
    tracep->declBit(c+442,"io_deq_valid", false,-1);
    tracep->declBus(c+280,"count", false,-1, 1,0);
    tracep->declBit(c+446,"equal", false,-1);
    tracep->declBit(c+442,"deq_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("nodeIn_rsink ");
    tracep->declBit(c+479,"clock", false,-1);
    tracep->declBit(c+439,"reset", false,-1);
    tracep->declBus(c+231,"io_enq_bits0_data", false,-1, 31,0);
    tracep->declBus(c+232,"io_enq_bits1_data", false,-1, 31,0);
    tracep->declBit(c+233,"io_enq_valid", false,-1);
    tracep->declBus(c+436,"io_enq_source", false,-1, 1,0);
    tracep->declBit(c+271,"io_enq_ready", false,-1);
    tracep->declBus(c+285,"io_enq_sink", false,-1, 1,0);
    tracep->declBit(c+271,"io_deq_ready", false,-1);
    tracep->declBit(c+444,"io_deq_valid", false,-1);
    tracep->declBus(c+445,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+285,"count", false,-1, 1,0);
    tracep->declBit(c+448,"equal", false,-1);
    tracep->declBit(c+444,"deq_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("nodeOut_arsource ");
    tracep->declBit(c+479,"clock", false,-1);
    tracep->declBit(c+439,"reset", false,-1);
    tracep->declBit(c+443,"io_enq_ready", false,-1);
    tracep->declBit(c+269,"io_enq_valid", false,-1);
    tracep->declBus(c+6,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+270,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+6,"io_deq_bits0_addr", false,-1, 31,0);
    tracep->declBus(c+270,"io_deq_bits0_size", false,-1, 2,0);
    tracep->declBus(c+281,"io_deq_bits1_addr", false,-1, 31,0);
    tracep->declBus(c+282,"io_deq_bits1_size", false,-1, 2,0);
    tracep->declBit(c+283,"io_deq_valid", false,-1);
    tracep->declBus(c+284,"io_deq_source", false,-1, 1,0);
    tracep->declBit(c+230,"io_deq_ready", false,-1);
    tracep->declBus(c+435,"io_deq_sink", false,-1, 1,0);
    tracep->declBit(c+458,"enq_in_ready", false,-1);
    tracep->declBit(c+286,"enq_in_REG", false,-1);
    tracep->declBit(c+283,"enq_in_valid", false,-1);
    tracep->declBus(c+284,"count", false,-1, 1,0);
    tracep->declBit(c+450,"equal", false,-1);
    tracep->declBus(c+281,"io_deq_bits1_raddr", false,-1, 31,0);
    tracep->declBus(c+282,"io_deq_bits1_rsize", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("nodeOut_awsource ");
    tracep->declBit(c+479,"clock", false,-1);
    tracep->declBit(c+439,"reset", false,-1);
    tracep->declBit(c+440,"io_enq_ready", false,-1);
    tracep->declBit(c+265,"io_enq_valid", false,-1);
    tracep->declBus(c+3,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+266,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+3,"io_deq_bits0_addr", false,-1, 31,0);
    tracep->declBus(c+266,"io_deq_bits0_size", false,-1, 2,0);
    tracep->declBus(c+272,"io_deq_bits1_addr", false,-1, 31,0);
    tracep->declBus(c+273,"io_deq_bits1_size", false,-1, 2,0);
    tracep->declBit(c+274,"io_deq_valid", false,-1);
    tracep->declBus(c+275,"io_deq_source", false,-1, 1,0);
    tracep->declBit(c+227,"io_deq_ready", false,-1);
    tracep->declBus(c+432,"io_deq_sink", false,-1, 1,0);
    tracep->declBit(c+459,"enq_in_ready", false,-1);
    tracep->declBit(c+286,"enq_in_REG", false,-1);
    tracep->declBit(c+274,"enq_in_valid", false,-1);
    tracep->declBus(c+275,"count", false,-1, 1,0);
    tracep->declBit(c+453,"equal", false,-1);
    tracep->declBus(c+272,"io_deq_bits1_raddr", false,-1, 31,0);
    tracep->declBus(c+273,"io_deq_bits1_rsize", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("nodeOut_wsource ");
    tracep->declBit(c+479,"clock", false,-1);
    tracep->declBit(c+439,"reset", false,-1);
    tracep->declBit(c+441,"io_enq_ready", false,-1);
    tracep->declBit(c+267,"io_enq_valid", false,-1);
    tracep->declBus(c+4,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+5,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBus(c+4,"io_deq_bits0_data", false,-1, 31,0);
    tracep->declBus(c+5,"io_deq_bits0_strb", false,-1, 3,0);
    tracep->declBus(c+276,"io_deq_bits1_data", false,-1, 31,0);
    tracep->declBus(c+277,"io_deq_bits1_strb", false,-1, 3,0);
    tracep->declBit(c+278,"io_deq_valid", false,-1);
    tracep->declBus(c+279,"io_deq_source", false,-1, 1,0);
    tracep->declBit(c+228,"io_deq_ready", false,-1);
    tracep->declBus(c+433,"io_deq_sink", false,-1, 1,0);
    tracep->declBit(c+460,"enq_in_ready", false,-1);
    tracep->declBit(c+286,"enq_in_REG", false,-1);
    tracep->declBit(c+278,"enq_in_valid", false,-1);
    tracep->declBus(c+279,"count", false,-1, 1,0);
    tracep->declBit(c+456,"equal", false,-1);
    tracep->declBus(c+276,"io_deq_bits1_rdata", false,-1, 31,0);
    tracep->declBus(c+277,"io_deq_bits1_rstrb", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+479,"clock", false,-1);
    tracep->declBit(c+439,"reset", false,-1);
    tracep->declBit(c+440,"auto_master_out_awready", false,-1);
    tracep->declBit(c+265,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+3,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+266,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBit(c+441,"auto_master_out_wready", false,-1);
    tracep->declBit(c+267,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+4,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+268,"auto_master_out_bready", false,-1);
    tracep->declBit(c+442,"auto_master_out_bvalid", false,-1);
    tracep->declBit(c+443,"auto_master_out_arready", false,-1);
    tracep->declBit(c+269,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+6,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+270,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBit(c+271,"auto_master_out_rready", false,-1);
    tracep->declBit(c+444,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+445,"auto_master_out_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("bridge0 ");
    tracep->declBit(c+479,"clock", false,-1);
    tracep->declBit(c+439,"reset", false,-1);
    tracep->declBus(c+287,"io_ifu_addr", false,-1, 31,0);
    tracep->declBit(c+288,"io_ifu_reqValid", false,-1);
    tracep->declBus(c+523,"io_ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+461,"io_ifu_respValid", false,-1);
    tracep->declBus(c+3,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+289,"io_lsu_reqValid", false,-1);
    tracep->declBus(c+445,"io_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+524,"io_lsu_respValid", false,-1);
    tracep->declBus(c+290,"io_lsu_size", false,-1, 1,0);
    tracep->declBit(c+291,"io_lsu_wen", false,-1);
    tracep->declBus(c+4,"io_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"io_lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+440,"io_master_awready", false,-1);
    tracep->declBit(c+265,"io_master_awvalid", false,-1);
    tracep->declBus(c+3,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+266,"io_master_awsize", false,-1, 2,0);
    tracep->declBit(c+441,"io_master_wready", false,-1);
    tracep->declBit(c+267,"io_master_wvalid", false,-1);
    tracep->declBus(c+4,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+268,"io_master_bready", false,-1);
    tracep->declBit(c+442,"io_master_bvalid", false,-1);
    tracep->declBit(c+443,"io_master_arready", false,-1);
    tracep->declBit(c+269,"io_master_arvalid", false,-1);
    tracep->declBus(c+6,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+270,"io_master_arsize", false,-1, 2,0);
    tracep->declBit(c+271,"io_master_rready", false,-1);
    tracep->declBit(c+444,"io_master_rvalid", false,-1);
    tracep->declBus(c+445,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+292,"isValidLoad", false,-1);
    tracep->declBit(c+293,"isValidStore", false,-1);
    tracep->declBus(c+294,"stateI", false,-1, 1,0);
    tracep->declBus(c+295,"stateD", false,-1, 2,0);
    tracep->declBit(c+268,"io_master_bready_0", false,-1);
    tracep->declBit(c+296,"lsuRead", false,-1);
    tracep->declBit(c+461,"instReturn", false,-1);
    tracep->declBus(c+297,"io_ifu_rdata_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cmp ");
    tracep->declBit(c+440,"io_out_awready", false,-1);
    tracep->declBit(c+265,"io_out_awvalid", false,-1);
    tracep->declBus(c+3,"io_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+266,"io_out_awsize", false,-1, 2,0);
    tracep->declBit(c+441,"io_out_wready", false,-1);
    tracep->declBit(c+267,"io_out_wvalid", false,-1);
    tracep->declBus(c+4,"io_out_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"io_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+268,"io_out_bready", false,-1);
    tracep->declBit(c+442,"io_out_bvalid", false,-1);
    tracep->declBit(c+443,"io_out_arready", false,-1);
    tracep->declBit(c+269,"io_out_arvalid", false,-1);
    tracep->declBus(c+6,"io_out_araddr", false,-1, 31,0);
    tracep->declBus(c+270,"io_out_arsize", false,-1, 2,0);
    tracep->declBit(c+271,"io_out_rready", false,-1);
    tracep->declBit(c+444,"io_out_rvalid", false,-1);
    tracep->declBus(c+445,"io_out_rdata", false,-1, 31,0);
    tracep->declBit(c+440,"io_in_0_awready", false,-1);
    tracep->declBit(c+265,"io_in_0_awvalid", false,-1);
    tracep->declBus(c+3,"io_in_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+266,"io_in_0_awsize", false,-1, 2,0);
    tracep->declBit(c+441,"io_in_0_wready", false,-1);
    tracep->declBit(c+267,"io_in_0_wvalid", false,-1);
    tracep->declBus(c+4,"io_in_0_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"io_in_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+268,"io_in_0_bready", false,-1);
    tracep->declBit(c+442,"io_in_0_bvalid", false,-1);
    tracep->declBit(c+443,"io_in_0_arready", false,-1);
    tracep->declBit(c+269,"io_in_0_arvalid", false,-1);
    tracep->declBus(c+6,"io_in_0_araddr", false,-1, 31,0);
    tracep->declBus(c+270,"io_in_0_arsize", false,-1, 2,0);
    tracep->declBit(c+271,"io_in_0_rready", false,-1);
    tracep->declBit(c+444,"io_in_0_rvalid", false,-1);
    tracep->declBus(c+445,"io_in_0_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core0 ");
    tracep->declBit(c+479,"clock", false,-1);
    tracep->declBit(c+439,"reset", false,-1);
    tracep->declBit(c+288,"io_ifu_reqValid", false,-1);
    tracep->declBus(c+287,"io_ifu_addr", false,-1, 31,0);
    tracep->declBit(c+461,"io_ifu_respValid", false,-1);
    tracep->declBus(c+523,"io_ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+289,"io_lsu_reqValid", false,-1);
    tracep->declBus(c+3,"io_lsu_addr", false,-1, 31,0);
    tracep->declBus(c+290,"io_lsu_size", false,-1, 1,0);
    tracep->declBit(c+291,"io_lsu_wen", false,-1);
    tracep->declBus(c+4,"io_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"io_lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+524,"io_lsu_respValid", false,-1);
    tracep->declBus(c+445,"io_lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+287,"PC", false,-1, 31,0);
    tracep->declBus(c+298,"PC_plus_4", false,-1, 31,0);
    tracep->declBus(c+3,"ALU_OUT", false,-1, 31,0);
    tracep->declBus(c+525,"R1_data", false,-1, 31,0);
    tracep->declBus(c+7,"R2_data", false,-1, 31,0);
    tracep->declBus(c+8,"load_data", false,-1, 31,0);
    tracep->declBus(c+9,"RegWriteData", false,-1, 31,0);
    tracep->declBus(c+526,"a0", false,-1, 31,0);
    tracep->declBit(c+299,"Reg_WE", false,-1);
    tracep->declBit(c+300,"I_jalr", false,-1);
    tracep->declBus(c+301,"r1", false,-1, 4,0);
    tracep->declBus(c+302,"r2", false,-1, 4,0);
    tracep->declBus(c+303,"rd", false,-1, 4,0);
    tracep->declBus(c+304,"imm", false,-1, 31,0);
    tracep->declBit(c+305,"R_TYPE", false,-1);
    tracep->declBit(c+306,"I_TYPE_ARITH", false,-1);
    tracep->declBit(c+307,"L_TYPE_LOAD", false,-1);
    tracep->declBit(c+308,"S_TYPE", false,-1);
    tracep->declBit(c+309,"U_TYPE", false,-1);
    tracep->declBit(c+310,"I_TYPE", false,-1);
    tracep->declBit(c+311,"MemWEn", false,-1);
    tracep->declBit(c+312,"B_TYPE", false,-1);
    tracep->declBit(c+313,"J_TYPE", false,-1);
    tracep->declBit(c+314,"U_lui", false,-1);
    tracep->declBit(c+315,"R_add", false,-1);
    tracep->declBit(c+316,"l_lw", false,-1);
    tracep->declBit(c+317,"l_lbu", false,-1);
    tracep->declBit(c+318,"I_add", false,-1);
    tracep->declBit(c+319,"S_sw", false,-1);
    tracep->declBit(c+320,"S_sb", false,-1);
    tracep->declBit(c+321,"I_ebreak", false,-1);
    tracep->declBus(c+322,"inst", false,-1, 31,0);
    tracep->declBit(c+323,"ifu_valid", false,-1);
    tracep->declBit(c+324,"lsu_done", false,-1);
    tracep->declBit(c+325,"commit_valid", false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+305,"R_TYPE", false,-1);
    tracep->declBit(c+310,"I_TYPE", false,-1);
    tracep->declBit(c+308,"S_TYPE", false,-1);
    tracep->declBit(c+312,"B_TYPE", false,-1);
    tracep->declBit(c+313,"J_TYPE", false,-1);
    tracep->declBit(c+309,"U_TYPE", false,-1);
    tracep->declBit(c+315,"R_add", false,-1);
    tracep->declBit(c+318,"I_add", false,-1);
    tracep->declBit(c+300,"I_jalr", false,-1);
    tracep->declBit(c+317,"l_lbu", false,-1);
    tracep->declBit(c+316,"l_lw", false,-1);
    tracep->declBus(c+525,"rdata_1", false,-1, 31,0);
    tracep->declBus(c+7,"rdata_2", false,-1, 31,0);
    tracep->declBus(c+304,"imm", false,-1, 31,0);
    tracep->declBus(c+287,"pc", false,-1, 31,0);
    tracep->declBus(c+3,"ALU_OUT", false,-1, 31,0);
    tracep->declBus(c+10,"A", false,-1, 31,0);
    tracep->declBus(c+11,"B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+326,"inst", false,-1, 31,0);
    tracep->declBit(c+305,"R_TYPE", false,-1);
    tracep->declBit(c+306,"I_TYPE_ARITH", false,-1);
    tracep->declBit(c+307,"L_TYPE_LOAD", false,-1);
    tracep->declBit(c+308,"S_TYPE", false,-1);
    tracep->declBit(c+309,"U_TYPE", false,-1);
    tracep->declBit(c+310,"I_TYPE", false,-1);
    tracep->declBit(c+311,"MemWEn", false,-1);
    tracep->declBit(c+312,"B_TYPE", false,-1);
    tracep->declBit(c+313,"J_TYPE", false,-1);
    tracep->declBit(c+300,"I_jalr", false,-1);
    tracep->declBit(c+314,"U_lui", false,-1);
    tracep->declBit(c+315,"R_add", false,-1);
    tracep->declBit(c+316,"l_lw", false,-1);
    tracep->declBit(c+317,"l_lbu", false,-1);
    tracep->declBit(c+318,"I_add", false,-1);
    tracep->declBit(c+319,"S_sw", false,-1);
    tracep->declBit(c+320,"S_sb", false,-1);
    tracep->declBit(c+321,"I_ebreak", false,-1);
    tracep->declBus(c+304,"imm", false,-1, 31,0);
    tracep->declBus(c+301,"r1", false,-1, 4,0);
    tracep->declBus(c+302,"r2", false,-1, 4,0);
    tracep->declBus(c+303,"rd", false,-1, 4,0);
    tracep->declBus(c+327,"opcode", false,-1, 6,0);
    tracep->declBus(c+328,"funct3", false,-1, 2,0);
    tracep->declBus(c+329,"funct7", false,-1, 6,0);
    tracep->declBus(c+330,"immI", false,-1, 31,0);
    tracep->declBus(c+331,"immS", false,-1, 31,0);
    tracep->declBus(c+332,"immB", false,-1, 31,0);
    tracep->declBus(c+333,"immU", false,-1, 31,0);
    tracep->declBus(c+334,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBus(c+702,"RANDOM_REQ_DELAY", false,-1, 31,0);
    tracep->declBus(c+703,"MAX_REQ_DELAY", false,-1, 31,0);
    tracep->declBit(c+479,"clk", false,-1);
    tracep->declBit(c+439,"rst", false,-1);
    tracep->declBus(c+287,"pc", false,-1, 31,0);
    tracep->declBit(c+288,"ifu_reqValid", false,-1);
    tracep->declBus(c+287,"ifu_raddr", false,-1, 31,0);
    tracep->declBit(c+461,"ifu_respValid", false,-1);
    tracep->declBus(c+523,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+322,"inst", false,-1, 31,0);
    tracep->declBit(c+323,"inst_valid", false,-1);
    tracep->declBit(c+325,"inst_done", false,-1);
    tracep->declBus(c+704,"IDLE", false,-1, 1,0);
    tracep->declBus(c+705,"WAIT", false,-1, 1,0);
    tracep->declBus(c+706,"EXEC", false,-1, 1,0);
    tracep->declBus(c+335,"state", false,-1, 1,0);
    tracep->declBus(c+322,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+336,"lfsr", false,-1, 15,0);
    tracep->declBus(c+337,"req_delay_count", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBus(c+702,"RANDOM_REQ_DELAY", false,-1, 31,0);
    tracep->declBus(c+703,"MAX_REQ_DELAY", false,-1, 31,0);
    tracep->declBit(c+479,"clk", false,-1);
    tracep->declBit(c+439,"rst", false,-1);
    tracep->declBit(c+323,"inst_valid", false,-1);
    tracep->declBus(c+7,"R2_data", false,-1, 31,0);
    tracep->declBus(c+3,"ALU_OUT", false,-1, 31,0);
    tracep->declBit(c+316,"l_lw", false,-1);
    tracep->declBit(c+317,"l_lbu", false,-1);
    tracep->declBit(c+320,"S_sb", false,-1);
    tracep->declBit(c+319,"S_sw", false,-1);
    tracep->declBit(c+289,"lsu_reqValid", false,-1);
    tracep->declBus(c+3,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+290,"lsu_size", false,-1, 1,0);
    tracep->declBit(c+291,"lsu_wen", false,-1);
    tracep->declBus(c+4,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+5,"lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+524,"lsu_respValid", false,-1);
    tracep->declBus(c+445,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+8,"load_data", false,-1, 31,0);
    tracep->declBit(c+324,"lsu_done", false,-1);
    tracep->declBus(c+704,"IDLE", false,-1, 1,0);
    tracep->declBus(c+705,"WAIT", false,-1, 1,0);
    tracep->declBus(c+706,"RESP", false,-1, 1,0);
    tracep->declBus(c+338,"state", false,-1, 1,0);
    tracep->declBus(c+339,"load_data_reg", false,-1, 31,0);
    tracep->declBus(c+340,"lfsr", false,-1, 15,0);
    tracep->declBus(c+341,"req_delay_count", false,-1, 31,0);
    tracep->declBit(c+342,"is_load", false,-1);
    tracep->declBit(c+343,"is_store", false,-1);
    tracep->declBit(c+344,"is_mem", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+707,"RESET_PC", false,-1, 31,0);
    tracep->declBit(c+479,"clk", false,-1);
    tracep->declBit(c+439,"rst", false,-1);
    tracep->declBit(c+325,"inst_valid", false,-1);
    tracep->declBus(c+3,"ALU_OUT", false,-1, 31,0);
    tracep->declBus(c+8,"load_data", false,-1, 31,0);
    tracep->declBit(c+305,"R_TYPE", false,-1);
    tracep->declBit(c+306,"I_TYPE_ARITH", false,-1);
    tracep->declBit(c+310,"I_TYPE", false,-1);
    tracep->declBit(c+309,"U_TYPE", false,-1);
    tracep->declBit(c+313,"J_TYPE", false,-1);
    tracep->declBit(c+300,"I_jalr", false,-1);
    tracep->declBit(c+316,"l_lw", false,-1);
    tracep->declBit(c+317,"l_lbu", false,-1);
    tracep->declBus(c+301,"r1", false,-1, 4,0);
    tracep->declBus(c+302,"r2", false,-1, 4,0);
    tracep->declBus(c+303,"rd", false,-1, 4,0);
    tracep->declBus(c+525,"R1_data", false,-1, 31,0);
    tracep->declBus(c+7,"R2_data", false,-1, 31,0);
    tracep->declBus(c+526,"a0", false,-1, 31,0);
    tracep->declBus(c+287,"PC", false,-1, 31,0);
    tracep->declBus(c+298,"PC_plus_4", false,-1, 31,0);
    tracep->declBus(c+12,"next_pc", false,-1, 31,0);
    tracep->declBus(c+9,"RegWriteData", false,-1, 31,0);
    tracep->declBit(c+299,"Reg_WE", false,-1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+670,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+479,"clk", false,-1);
    tracep->declBus(c+9,"wdata", false,-1, 31,0);
    tracep->declBus(c+303,"waddr", false,-1, 4,0);
    tracep->declBit(c+299,"wen", false,-1);
    tracep->declBus(c+301,"raddr_1", false,-1, 4,0);
    tracep->declBus(c+302,"raddr_2", false,-1, 4,0);
    tracep->declBit(c+439,"rst", false,-1);
    tracep->declBus(c+525,"rdata_1", false,-1, 31,0);
    tracep->declBus(c+7,"rdata_2", false,-1, 31,0);
    tracep->declBus(c+526,"debug_a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+527+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("spi_soc_spi_miso_pad ");
    tracep->declBit(c+494,"pad", false,-1);
    tracep->declBit(c+494,"p2c", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+494,"pad", false,-1);
    tracep->declBit(c+494,"p2c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("spi_spi_mosi_pad ");
    tracep->declBit(c+353,"pad", false,-1);
    tracep->declBit(c+353,"c2p", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+353,"pad", false,-1);
    tracep->declBit(c+353,"c2p", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("spi_spi_sck_pad ");
    tracep->declBit(c+351,"pad", false,-1);
    tracep->declBit(c+351,"c2p", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+351,"pad", false,-1);
    tracep->declBit(c+351,"c2p", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("spi_spi_ss_pad ");
    tracep->declBit(c+352,"pad", false,-1);
    tracep->declBit(c+352,"c2p", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+352,"pad", false,-1);
    tracep->declBit(c+352,"c2p", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uart0_soc_uart0_rx_pad ");
    tracep->declBit(c+491,"pad", false,-1);
    tracep->declBit(c+491,"p2c", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+491,"pad", false,-1);
    tracep->declBit(c+491,"p2c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uart0_uart0_tx_pad ");
    tracep->declBit(c+492,"pad", false,-1);
    tracep->declBit(c+492,"c2p", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+492,"pad", false,-1);
    tracep->declBit(c+492,"c2p", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("espPsram ");
    tracep->declBus(c+669,"nss", false,-1, 31,0);
    tracep->declBit(c+354,"sck_o", false,-1);
    tracep->declBus(c+410,"nss_o", false,-1, 3,0);
    tracep->declBit(c+411,"dio_0", false,-1);
    tracep->declBit(c+412,"dio_1", false,-1);
    tracep->declBit(c+413,"dio_2", false,-1);
    tracep->declBit(c+414,"dio_3", false,-1);
    tracep->pushNamePrefix("psram ");
    tracep->declBus(c+709,"ID", false,-1, 31,0);
    tracep->declBit(c+354,"sclk", false,-1);
    tracep->declBit(c+403,"csn", false,-1);
    tracep->declBus(c+415,"sio", false,-1, 3,0);
    tracep->declBus(c+710,"MEM_DEPTH_BYTES", false,-1, 31,0);
    tracep->declBus(c+711,"ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+672,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+652,"S_CMD_SPI_RECV", false,-1, 2,0);
    tracep->declBus(c+673,"S_CMD_QPI_RECV", false,-1, 2,0);
    tracep->declBus(c+674,"S_ADDR_RECEIVE", false,-1, 2,0);
    tracep->declBus(c+675,"S_DUMMY_CYCLES", false,-1, 2,0);
    tracep->declBus(c+676,"S_DATA_XFER_READ", false,-1, 2,0);
    tracep->declBus(c+712,"S_DATA_XFER_WRITE", false,-1, 2,0);
    tracep->declBus(c+255,"r_fsm_state", false,-1, 2,0);
    tracep->declBus(c+256,"command_byte", false,-1, 7,0);
    tracep->declBus(c+257,"current_address", false,-1, 23,0);
    tracep->declBus(c+258,"bit_counter", false,-1, 5,0);
    tracep->declBus(c+259,"byte_counter", false,-1, 2,0);
    tracep->declBus(c+260,"dummy_cycle_counter", false,-1, 5,0);
    tracep->declBit(c+261,"io_output_enable", false,-1);
    tracep->declBus(c+262,"qspi_data_in", false,-1, 3,0);
    tracep->declBus(c+263,"qspi_data_out", false,-1, 3,0);
    tracep->declBit(c+264,"qspi_mode", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+351,"sck", false,-1);
    tracep->declBit(c+352,"ss", false,-1);
    tracep->declBit(c+353,"mosi", false,-1);
    tracep->declBit(c+494,"miso", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+345,"state", false,-1, 2,0);
    tracep->declBus(c+346,"counter", false,-1, 7,0);
    tracep->declBus(c+347,"cmd", false,-1, 7,0);
    tracep->declBus(c+348,"addr", false,-1, 23,0);
    tracep->declBus(c+349,"data", false,-1, 31,0);
    tracep->declBit(c+350,"ren", false,-1);
    tracep->declBus(c+559,"rdata", false,-1, 31,0);
    tracep->declBus(c+560,"raddr", false,-1, 31,0);
    tracep->declBus(c+561,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+351,"clock", false,-1);
    tracep->declBit(c+350,"valid", false,-1);
    tracep->declBus(c+347,"cmd", false,-1, 7,0);
    tracep->declBus(c+560,"addr", false,-1, 31,0);
    tracep->declBus(c+559,"data", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VSimTop___024root__trace_init_top(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_top\n"); );
    // Body
    VSimTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSimTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSimTop___024root__trace_register(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSimTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSimTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSimTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSimTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_top_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSimTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT),32);
    bufp->fullIData(oldp+4,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wdata),32);
    bufp->fullCData(oldp+5,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask),4);
    bufp->fullIData(oldp+6,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_araddr),32);
    bufp->fullIData(oldp+7,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data),32);
    bufp->fullIData(oldp+8,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__load_data),32);
    bufp->fullIData(oldp+9,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__RegWriteData),32);
    bufp->fullIData(oldp+10,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A),32);
    bufp->fullIData(oldp+11,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B),32);
    bufp->fullIData(oldp+12,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr)
                               ? (0xfffffffeU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                               : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)
                                   ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
                                   : ((IData)(4U) + vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)))),32);
    bufp->fullBit(oldp+13,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_mosi_o));
    bufp->fullBit(oldp+14,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)))));
    bufp->fullBit(oldp+15,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_miso_o));
    bufp->fullBit(oldp+16,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio2_o));
    bufp->fullBit(oldp+17,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio3_o));
    bufp->fullCData(oldp+18,((0xfU & (- (IData)((1U 
                                                 & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen))))))),4);
    bufp->fullCData(oldp+19,((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio3_o) 
                               << 3U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio2_o) 
                                          << 2U) | 
                                         (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_miso_o) 
                                           << 1U) | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_mosi_o))))),4);
    bufp->fullBit(oldp+20,((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U)))));
    bufp->fullBit(oldp+21,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+22,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 1U))));
    bufp->fullBit(oldp+24,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+25,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+26,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+27,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+28,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+29,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullCData(oldp+30,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+31,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+32,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+33,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullCData(oldp+34,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+35,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 4U))));
    bufp->fullBit(oldp+37,((IData)((0x10U != (0x12U 
                                              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+38,((IData)((0x11U == (0x11U 
                                              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+39,((IData)((0x14U == (0x14U 
                                              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+40,((IData)((0x18U == (0x18U 
                                              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+41,((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                               << 7U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                          << 6U) | 
                                         (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                           << 5U) | 
                                          (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                            << 4U) 
                                           | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                               << 3U) 
                                              | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+42,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+43,((1U & ((IData)(vlSelf->__VdfgTmp_h0138f4a2__0) 
                                  >> 1U))));
    bufp->fullBit(oldp+44,((1U & (IData)(vlSelf->__VdfgTmp_h0138f4a2__0))));
    bufp->fullBit(oldp+45,((1U & ((IData)(vlSelf->__VdfgTmp_h0138f4a2__0) 
                                  >> 2U))));
    bufp->fullBit(oldp+46,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+47,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+48,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+49,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+50,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+51,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+52,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+53,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+54,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+55,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+56,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+57,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+58,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+59,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+60,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+61,((0U != (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [0U] | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [1U] | (
                                                   vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [2U] 
                                                   | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [3U] 
                                                      | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [4U] 
                                                         | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [5U] 
                                                            | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [6U] 
                                                               | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [7U] 
                                                                  | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [8U] 
                                                                     | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [9U] 
                                                                        | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xaU] 
                                                                           | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xbU] 
                                                                              | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xcU] 
                                                                                | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xdU] 
                                                                                | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
    bufp->fullCData(oldp+62,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullSData(oldp+63,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+64,((1U & (~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+65,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+66,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+67,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+68,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+69,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+70,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+71,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+72,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+73,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+74,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+75,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+76,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+77,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+78,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+79,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+80,(((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+81,(((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+82,(((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+83,(((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+84,(((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+85,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+86,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+87,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+88,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+89,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+90,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+91,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+92,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullCData(oldp+93,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+94,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+95,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+96,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+97,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+98,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+99,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+100,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+101,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+102,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+103,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+104,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+105,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+106,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+107,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+108,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+109,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+110,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+111,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+112,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+113,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+114,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+115,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+116,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+117,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+118,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+119,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+120,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+121,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+122,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+123,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+124,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+125,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullBit(oldp+126,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+127,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait),5);
    bufp->fullCData(oldp+128,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd),3);
    bufp->fullBit(oldp+129,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init));
    bufp->fullBit(oldp+130,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready));
    bufp->fullIData(oldp+131,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data),32);
    bufp->fullBit(oldp+132,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st));
    bufp->fullBit(oldp+133,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st));
    bufp->fullCData(oldp+134,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt),8);
    bufp->fullCData(oldp+135,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state),6);
    bufp->fullIData(oldp+136,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr),24);
    bufp->fullIData(oldp+137,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata),32);
    bufp->fullBit(oldp+138,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce));
    bufp->fullBit(oldp+139,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen));
    bufp->fullBit(oldp+140,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
    bufp->fullBit(oldp+141,((7U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))));
    bufp->fullBit(oldp+142,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay));
    bufp->fullCData(oldp+143,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state),5);
    bufp->fullCData(oldp+144,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt),5);
    bufp->fullIData(oldp+145,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt),18);
    bufp->fullIData(oldp+146,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca),32);
    bufp->fullCData(oldp+147,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt),8);
    bufp->fullCData(oldp+148,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt),8);
    bufp->fullCData(oldp+149,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data),8);
    bufp->fullCData(oldp+150,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt),5);
    bufp->fullCData(oldp+151,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt),4);
    bufp->fullCData(oldp+152,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd),3);
    bufp->fullBit(oldp+153,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst));
    bufp->fullBit(oldp+154,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st));
    bufp->fullBit(oldp+155,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st));
    bufp->fullBit(oldp+156,(((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
                             | ((0xcU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
                                | (0x14U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))))));
    bufp->fullCData(oldp+157,((0xffU & (((- (IData)(
                                                    (4U 
                                                     == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                                         & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                                            >> 8U)) 
                                        | (((- (IData)(
                                                       (0xcU 
                                                        == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                                            & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                                               >> 0x10U)) 
                                           | ((- (IData)(
                                                         (0x14U 
                                                          == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                                              & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                                                 >> 0x18U)))))),8);
    bufp->fullBit(oldp+158,((1U & ((~ ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                       | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                          & (0x800000U 
                                             == (0x1800000U 
                                                 & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)))));
    bufp->fullBit(oldp+159,((1U & ((~ ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                       | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                          & (0x1000000U 
                                             == (0x1800000U 
                                                 & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)))));
    bufp->fullSData(oldp+160,(((vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_h0138f4a2__0))),11);
    bufp->fullCData(oldp+161,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullIData(oldp+162,(((8U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                ? ((vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                    << 0x18U) | ((0xff0000U 
                                                  & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                                     << 8U)) 
                                                 | ((0xff00U 
                                                     & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                                        >> 8U)) 
                                                    | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                                       >> 0x18U))))
                                : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata)),32);
    bufp->fullBit(oldp+163,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+164,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg),32);
    bufp->fullCData(oldp+165,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullCData(oldp+166,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+167,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+168,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+169,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+170,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+171,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+172,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+173,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+174,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+175,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+176,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+177,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+178,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+179,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+180,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+181,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+182,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+183,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+184,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+185,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+186,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+187,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+188,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+189,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+190,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+191,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+192,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+193,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+194,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+195,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+196,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+197,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+198,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullIData(oldp+199,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg),32);
    bufp->fullIData(oldp+200,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg),32);
    bufp->fullCData(oldp+201,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg),4);
    bufp->fullBit(oldp+202,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active));
    bufp->fullBit(oldp+203,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel));
    bufp->fullCData(oldp+204,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst),2);
    bufp->fullCData(oldp+205,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt),8);
    bufp->fullIData(oldp+206,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata),32);
    bufp->fullBit(oldp+207,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+208,((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+209,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+210,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0));
    bufp->fullIData(oldp+211,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr),32);
    bufp->fullCData(oldp+212,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size),3);
    bufp->fullBit(oldp+213,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0));
    bufp->fullIData(oldp+214,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data),32);
    bufp->fullCData(oldp+215,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb),4);
    bufp->fullBit(oldp+216,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_bready));
    bufp->fullBit(oldp+217,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+218,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0));
    bufp->fullIData(oldp+219,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr),32);
    bufp->fullCData(oldp+220,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size),3);
    bufp->fullBit(oldp+221,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_rready));
    bufp->fullCData(oldp+222,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+223,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__araddr_reg),32);
    bufp->fullIData(oldp+224,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullCData(oldp+225,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg),4);
    bufp->fullIData(oldp+226,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)))));
    bufp->fullBit(oldp+228,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)))));
    bufp->fullBit(oldp+229,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0));
    bufp->fullBit(oldp+230,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)))));
    bufp->fullIData(oldp+231,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data),32);
    bufp->fullIData(oldp+232,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata),32);
    bufp->fullBit(oldp+233,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0));
    bufp->fullBit(oldp+234,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)))));
    bufp->fullBit(oldp+236,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)))));
    bufp->fullBit(oldp+238,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1));
    bufp->fullIData(oldp+239,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_1_data),32);
    bufp->fullBit(oldp+240,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1));
    bufp->fullIData(oldp+241,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_addr),32);
    bufp->fullCData(oldp+242,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_size),3);
    bufp->fullBit(oldp+243,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1));
    bufp->fullIData(oldp+244,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_addr),32);
    bufp->fullCData(oldp+245,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_size),3);
    bufp->fullBit(oldp+246,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1));
    bufp->fullIData(oldp+247,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_data),32);
    bufp->fullCData(oldp+248,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_strb),4);
    bufp->fullBit(oldp+249,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+250,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0) 
                             & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+252,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3) 
                             & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+253,((IData)(((0U == (0x30000000U 
                                             & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)) 
                                     & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel)))));
    bufp->fullBit(oldp+254,((IData)(((0U == (0x30000000U 
                                             & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)) 
                                     & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))))));
    bufp->fullCData(oldp+255,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state),3);
    bufp->fullCData(oldp+256,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte),8);
    bufp->fullIData(oldp+257,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address),24);
    bufp->fullCData(oldp+258,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter),6);
    bufp->fullCData(oldp+259,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter),3);
    bufp->fullCData(oldp+260,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter),6);
    bufp->fullBit(oldp+261,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable));
    bufp->fullCData(oldp+262,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in),4);
    bufp->fullCData(oldp+263,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out),4);
    bufp->fullBit(oldp+264,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode));
    bufp->fullBit(oldp+265,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0) 
                             | ((5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                                | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))));
    bufp->fullCData(oldp+266,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_size),3);
    bufp->fullBit(oldp+267,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0) 
                             | ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                                | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))));
    bufp->fullBit(oldp+268,((6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))));
    bufp->fullBit(oldp+269,((((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_ifu_reqValid)) 
                             | ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                                | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead)))));
    bufp->fullCData(oldp+270,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_arsize),3);
    bufp->fullBit(oldp+271,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_rready));
    bufp->fullIData(oldp+272,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr),32);
    bufp->fullCData(oldp+273,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize),3);
    bufp->fullBit(oldp+274,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_valid));
    bufp->fullCData(oldp+275,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count),2);
    bufp->fullIData(oldp+276,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata),32);
    bufp->fullCData(oldp+277,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb),4);
    bufp->fullBit(oldp+278,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_valid));
    bufp->fullCData(oldp+279,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count),2);
    bufp->fullCData(oldp+280,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count),2);
    bufp->fullIData(oldp+281,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr),32);
    bufp->fullCData(oldp+282,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize),3);
    bufp->fullBit(oldp+283,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_valid));
    bufp->fullCData(oldp+284,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count),2);
    bufp->fullCData(oldp+285,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count),2);
    bufp->fullBit(oldp+286,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG));
    bufp->fullIData(oldp+287,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC),32);
    bufp->fullBit(oldp+288,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_ifu_reqValid));
    bufp->fullBit(oldp+289,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_reqValid));
    bufp->fullCData(oldp+290,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_size),2);
    bufp->fullBit(oldp+291,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wen));
    bufp->fullBit(oldp+292,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad));
    bufp->fullBit(oldp+293,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidStore));
    bufp->fullCData(oldp+294,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI),2);
    bufp->fullCData(oldp+295,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD),3);
    bufp->fullBit(oldp+296,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead));
    bufp->fullIData(oldp+297,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r),32);
    bufp->fullIData(oldp+298,(((IData)(4U) + vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)),32);
    bufp->fullBit(oldp+299,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__commit_valid) 
                             & ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE) 
                                  | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE)) 
                                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE)) 
                                | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)))));
    bufp->fullBit(oldp+300,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr));
    bufp->fullCData(oldp+301,((0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+302,((0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+303,((0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+304,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__imm),32);
    bufp->fullBit(oldp+305,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE));
    bufp->fullBit(oldp+306,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH));
    bufp->fullBit(oldp+307,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD));
    bufp->fullBit(oldp+308,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE));
    bufp->fullBit(oldp+309,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE));
    bufp->fullBit(oldp+310,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE));
    bufp->fullBit(oldp+311,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__MemWEn));
    bufp->fullBit(oldp+312,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE));
    bufp->fullBit(oldp+313,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE));
    bufp->fullBit(oldp+314,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui));
    bufp->fullBit(oldp+315,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_add));
    bufp->fullBit(oldp+316,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lw));
    bufp->fullBit(oldp+317,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lbu));
    bufp->fullBit(oldp+318,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_add));
    bufp->fullBit(oldp+319,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sw));
    bufp->fullBit(oldp+320,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sb));
    bufp->fullBit(oldp+321,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_ebreak));
    bufp->fullIData(oldp+322,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg),32);
    bufp->fullBit(oldp+323,((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))));
    bufp->fullBit(oldp+324,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu_done));
    bufp->fullBit(oldp+325,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__commit_valid));
    bufp->fullIData(oldp+326,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst),32);
    bufp->fullCData(oldp+327,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode),7);
    bufp->fullCData(oldp+328,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3),3);
    bufp->fullCData(oldp+329,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct7),7);
    bufp->fullIData(oldp+330,((((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                << 0xcU) | ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                             ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                >> 0x14U)
                                             : 0U))),32);
    bufp->fullIData(oldp+331,((((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                << 0xcU) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct7) 
                                             << 5U) 
                                            | ((2U 
                                                == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                                ? (0x1fU 
                                                   & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                      >> 7U))
                                                : 0U)))),32);
    bufp->fullIData(oldp+332,((((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                << 0xcU) | ((0xfffff800U 
                                             & (((2U 
                                                  == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)) 
                                                 << 0xbU) 
                                                & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                   << 4U))) 
                                            | ((((2U 
                                                  == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                                  ? 
                                                 (0x3fU 
                                                  & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                     >> 0x19U))
                                                  : 0U) 
                                                << 5U) 
                                               | (((2U 
                                                    == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                       >> 8U))
                                                    : 0U) 
                                                  << 1U))))),32);
    bufp->fullIData(oldp+333,((((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                 ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                    >> 0xcU) : 0U) 
                               << 0xcU)),32);
    bufp->fullIData(oldp+334,((((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                << 0x14U) | ((((2U 
                                                == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                                ? (0xffU 
                                                   & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                      >> 0xcU))
                                                : 0U) 
                                              << 0xcU) 
                                             | ((0x7ff800U 
                                                 & (((2U 
                                                      == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)) 
                                                     << 0xbU) 
                                                    & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                       >> 9U))) 
                                                | (((2U 
                                                     == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                                     ? 
                                                    (0x3ffU 
                                                     & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                        >> 0x15U))
                                                     : 0U) 
                                                   << 1U))))),32);
    bufp->fullCData(oldp+335,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state),2);
    bufp->fullSData(oldp+336,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__lfsr),16);
    bufp->fullIData(oldp+337,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count),32);
    bufp->fullCData(oldp+338,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state),2);
    bufp->fullIData(oldp+339,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg),32);
    bufp->fullSData(oldp+340,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lfsr),16);
    bufp->fullIData(oldp+341,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count),32);
    bufp->fullBit(oldp+342,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load));
    bufp->fullBit(oldp+343,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store));
    bufp->fullBit(oldp+344,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load) 
                             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store))));
    bufp->fullCData(oldp+345,(vlSelf->SimTop__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+346,(vlSelf->SimTop__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+347,(vlSelf->SimTop__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+348,(vlSelf->SimTop__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+349,(vlSelf->SimTop__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+350,(((1U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->SimTop__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+351,(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck));
    bufp->fullBit(oldp+352,(vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss));
    bufp->fullBit(oldp+353,(vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi));
    bufp->fullBit(oldp+354,(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o));
    bufp->fullBit(oldp+355,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+356,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+357,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+358,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+359,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+360,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+361,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+362,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+363,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+364,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+365,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+366,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+367,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+368,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+369,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+370,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+371,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+372,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+373,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+374,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+375,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+376,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+377,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+378,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+379,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+380,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+381,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+382,((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+383,((7U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+384,((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+385,((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+386,((0xfU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+387,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+388,((0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+389,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+390,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+391,((0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+392,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+393,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+394,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+395,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+396,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+397,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+398,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+399,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+400,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+401,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullCData(oldp+402,(vlSelf->SimTop__DOT__asic__DOT___soc_psram_nss_o),3);
    bufp->fullBit(oldp+403,(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad));
    bufp->fullCData(oldp+404,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+405,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_3_auto_apply_in_prdata),32);
    bufp->fullBit(oldp+406,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready));
    bufp->fullBit(oldp+407,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel));
    bufp->fullBit(oldp+408,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re));
    bufp->fullBit(oldp+409,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real));
    bufp->fullCData(oldp+410,(vlSelf->SimTop__DOT__asic__DOT___soc_psram_nss_o),4);
    bufp->fullBit(oldp+411,(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_p2c));
    bufp->fullBit(oldp+412,(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_1_p2c));
    bufp->fullBit(oldp+413,(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_2_p2c));
    bufp->fullBit(oldp+414,(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_3_p2c));
    bufp->fullCData(oldp+415,(vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i),4);
    bufp->fullBit(oldp+416,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+417,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullIData(oldp+418,((0x1fffffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+419,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+420,((0x1fffffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+421,((7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+422,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+423,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+424,((0x3fffffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+425,((0x3fffffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+426,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+427,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup));
    bufp->fullBit(oldp+428,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+429,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+430,((0U == (3U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                                          >> 0x1cU)))));
    bufp->fullBit(oldp+431,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3));
    bufp->fullCData(oldp+432,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count),2);
    bufp->fullCData(oldp+433,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count),2);
    bufp->fullCData(oldp+434,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count),2);
    bufp->fullCData(oldp+435,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count),2);
    bufp->fullCData(oldp+436,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count),2);
    bufp->fullBit(oldp+437,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1));
    bufp->fullBit(oldp+438,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG));
    bufp->fullBit(oldp+439,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1)))));
    bufp->fullBit(oldp+440,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_awready));
    bufp->fullBit(oldp+441,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready));
    bufp->fullBit(oldp+442,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_bvalid));
    bufp->fullBit(oldp+443,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_arready));
    bufp->fullBit(oldp+444,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid));
    bufp->fullIData(oldp+445,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata),32);
    bufp->fullBit(oldp+446,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal));
    bufp->fullBit(oldp+447,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q_io_deq_ready));
    bufp->fullBit(oldp+448,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal));
    bufp->fullBit(oldp+449,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready));
    bufp->fullBit(oldp+450,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal));
    bufp->fullBit(oldp+451,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__deq_valid));
    bufp->fullCData(oldp+452,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size),3);
    bufp->fullBit(oldp+453,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal));
    bufp->fullBit(oldp+454,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__deq_valid));
    bufp->fullCData(oldp+455,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size),3);
    bufp->fullBit(oldp+456,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal));
    bufp->fullBit(oldp+457,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__deq_valid));
    bufp->fullBit(oldp+458,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready));
    bufp->fullBit(oldp+459,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready));
    bufp->fullBit(oldp+460,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready));
    bufp->fullBit(oldp+461,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__instReturn));
    bufp->fullCData(oldp+462,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+463,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullIData(oldp+464,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_prdata),32);
    bufp->fullBit(oldp+465,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+466,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullIData(oldp+467,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_in_rdata),32);
    bufp->fullBit(oldp+468,(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG));
    bufp->fullBit(oldp+469,(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)))));
    bufp->fullBit(oldp+471,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+472,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+473,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+474,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+475,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+476,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+477,(vlSelf->clock));
    bufp->fullBit(oldp+478,(vlSelf->reset));
    bufp->fullBit(oldp+479,(vlSelf->cpuClock));
    bufp->fullBit(oldp+480,(vlSelf->coreSel));
    bufp->fullSData(oldp+481,(vlSelf->externalPins_mygpio_out),16);
    bufp->fullSData(oldp+482,(vlSelf->externalPins_mygpio_in),16);
    bufp->fullCData(oldp+483,(vlSelf->externalPins_mygpio_seg_0),8);
    bufp->fullCData(oldp+484,(vlSelf->externalPins_mygpio_seg_1),8);
    bufp->fullCData(oldp+485,(vlSelf->externalPins_mygpio_seg_2),8);
    bufp->fullCData(oldp+486,(vlSelf->externalPins_mygpio_seg_3),8);
    bufp->fullCData(oldp+487,(vlSelf->externalPins_mygpio_seg_4),8);
    bufp->fullCData(oldp+488,(vlSelf->externalPins_mygpio_seg_5),8);
    bufp->fullCData(oldp+489,(vlSelf->externalPins_mygpio_seg_6),8);
    bufp->fullCData(oldp+490,(vlSelf->externalPins_mygpio_seg_7),8);
    bufp->fullBit(oldp+491,(vlSelf->externalPins_uart0_rx));
    bufp->fullBit(oldp+492,(vlSelf->externalPins_uart0_tx));
    bufp->fullBit(oldp+493,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+494,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss) 
                                   | ((((2U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->SimTop__DOT__flash__DOT__counter)))
                                        ? vlSelf->SimTop__DOT__flash__DOT__data_bswap
                                        : vlSelf->SimTop__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+495,((1U & (IData)(vlSelf->externalPins_mygpio_in))));
    bufp->fullBit(oldp+496,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 1U))));
    bufp->fullBit(oldp+497,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+498,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+499,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+500,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+501,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+502,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+503,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 2U))));
    bufp->fullBit(oldp+504,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 3U))));
    bufp->fullBit(oldp+505,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 4U))));
    bufp->fullBit(oldp+506,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 5U))));
    bufp->fullBit(oldp+507,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 6U))));
    bufp->fullBit(oldp+508,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 7U))));
    bufp->fullBit(oldp+509,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 8U))));
    bufp->fullBit(oldp+510,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                   >> 9U))));
    bufp->fullIData(oldp+511,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+512,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+513,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+514,((((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)) 
                              | (8U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) 
                             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2))));
    bufp->fullBit(oldp+515,((1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active)) 
                                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready)))));
    bufp->fullCData(oldp+516,(((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0) 
                                   | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0) 
                                      & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0)))
                                : ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                                    ? 2U : ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                                             ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_pready)
                                                 ? 
                                                ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_rready) 
                                                   & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid)) 
                                                  | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_bready) 
                                                     & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid)))
                                                  ? 0U
                                                  : 3U)
                                                 : 2U)
                                             : ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_rready) 
                                                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid)) 
                                                 | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_bready) 
                                                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid)))
                                                 ? 0U
                                                 : 3U))))),2);
    bufp->fullBit(oldp+517,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG) 
                             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid))));
    bufp->fullBit(oldp+518,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG) 
                             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid))));
    bufp->fullIData(oldp+519,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr),32);
    bufp->fullIData(oldp+520,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr),32);
    bufp->fullIData(oldp+521,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data),32);
    bufp->fullCData(oldp+522,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb),4);
    bufp->fullIData(oldp+523,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__instReturn)
                                ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata
                                : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r)),32);
    bufp->fullBit(oldp+524,((((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid)) 
                             | ((6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                                & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_bvalid)))));
    bufp->fullIData(oldp+525,(((0U == (0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                                >> 0xfU)))
                                ? 0U : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
                               [(0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                          >> 0xfU))])),32);
    bufp->fullIData(oldp+526,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
                              [0xaU]),32);
    bufp->fullIData(oldp+527,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+528,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+529,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+530,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+531,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+532,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+533,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+534,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+535,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+536,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+537,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+538,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+539,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+540,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+541,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+542,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+543,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+544,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+545,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+546,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+547,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+548,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+549,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+550,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+551,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+552,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+553,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+554,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+555,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+556,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+557,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+558,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+559,(vlSelf->SimTop__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+560,(((0xfffffeU & (vlSelf->SimTop__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi))),32);
    bufp->fullIData(oldp+561,(vlSelf->SimTop__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+562,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out))));
    bufp->fullBit(oldp+563,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 1U))));
    bufp->fullBit(oldp+564,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+565,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+566,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+567,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+568,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+569,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+570,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 2U))));
    bufp->fullBit(oldp+571,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 3U))));
    bufp->fullBit(oldp+572,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 4U))));
    bufp->fullBit(oldp+573,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 5U))));
    bufp->fullBit(oldp+574,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 6U))));
    bufp->fullBit(oldp+575,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 7U))));
    bufp->fullBit(oldp+576,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 8U))));
    bufp->fullBit(oldp+577,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out) 
                                   >> 9U))));
    bufp->fullBit(oldp+578,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0))));
    bufp->fullBit(oldp+579,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 1U))));
    bufp->fullBit(oldp+580,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 2U))));
    bufp->fullBit(oldp+581,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 3U))));
    bufp->fullBit(oldp+582,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 4U))));
    bufp->fullBit(oldp+583,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 5U))));
    bufp->fullBit(oldp+584,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 6U))));
    bufp->fullBit(oldp+585,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                   >> 7U))));
    bufp->fullBit(oldp+586,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1))));
    bufp->fullBit(oldp+587,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 1U))));
    bufp->fullBit(oldp+588,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 2U))));
    bufp->fullBit(oldp+589,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 3U))));
    bufp->fullBit(oldp+590,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 4U))));
    bufp->fullBit(oldp+591,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 5U))));
    bufp->fullBit(oldp+592,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 6U))));
    bufp->fullBit(oldp+593,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                   >> 7U))));
    bufp->fullBit(oldp+594,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2))));
    bufp->fullBit(oldp+595,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 1U))));
    bufp->fullBit(oldp+596,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 2U))));
    bufp->fullBit(oldp+597,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 3U))));
    bufp->fullBit(oldp+598,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 4U))));
    bufp->fullBit(oldp+599,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 5U))));
    bufp->fullBit(oldp+600,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 6U))));
    bufp->fullBit(oldp+601,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                   >> 7U))));
    bufp->fullBit(oldp+602,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3))));
    bufp->fullBit(oldp+603,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 1U))));
    bufp->fullBit(oldp+604,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 2U))));
    bufp->fullBit(oldp+605,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 3U))));
    bufp->fullBit(oldp+606,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 4U))));
    bufp->fullBit(oldp+607,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 5U))));
    bufp->fullBit(oldp+608,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 6U))));
    bufp->fullBit(oldp+609,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                   >> 7U))));
    bufp->fullBit(oldp+610,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4))));
    bufp->fullBit(oldp+611,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 1U))));
    bufp->fullBit(oldp+612,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 2U))));
    bufp->fullBit(oldp+613,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 3U))));
    bufp->fullBit(oldp+614,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 4U))));
    bufp->fullBit(oldp+615,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 5U))));
    bufp->fullBit(oldp+616,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 6U))));
    bufp->fullBit(oldp+617,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                   >> 7U))));
    bufp->fullBit(oldp+618,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5))));
    bufp->fullBit(oldp+619,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 1U))));
    bufp->fullBit(oldp+620,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 2U))));
    bufp->fullBit(oldp+621,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 3U))));
    bufp->fullBit(oldp+622,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 4U))));
    bufp->fullBit(oldp+623,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 5U))));
    bufp->fullBit(oldp+624,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 6U))));
    bufp->fullBit(oldp+625,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                   >> 7U))));
    bufp->fullBit(oldp+626,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6))));
    bufp->fullBit(oldp+627,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 1U))));
    bufp->fullBit(oldp+628,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 2U))));
    bufp->fullBit(oldp+629,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 3U))));
    bufp->fullBit(oldp+630,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 4U))));
    bufp->fullBit(oldp+631,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 5U))));
    bufp->fullBit(oldp+632,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 6U))));
    bufp->fullBit(oldp+633,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                   >> 7U))));
    bufp->fullBit(oldp+634,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7))));
    bufp->fullBit(oldp+635,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 1U))));
    bufp->fullBit(oldp+636,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 2U))));
    bufp->fullBit(oldp+637,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 3U))));
    bufp->fullBit(oldp+638,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 4U))));
    bufp->fullBit(oldp+639,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 5U))));
    bufp->fullBit(oldp+640,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 6U))));
    bufp->fullBit(oldp+641,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                   >> 7U))));
    bufp->fullBit(oldp+642,(1U));
    bufp->fullSData(oldp+643,(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out),16);
    bufp->fullCData(oldp+644,(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0),8);
    bufp->fullCData(oldp+645,(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1),8);
    bufp->fullCData(oldp+646,(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2),8);
    bufp->fullCData(oldp+647,(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3),8);
    bufp->fullCData(oldp+648,(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4),8);
    bufp->fullCData(oldp+649,(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5),8);
    bufp->fullCData(oldp+650,(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6),8);
    bufp->fullCData(oldp+651,(vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7),8);
    bufp->fullCData(oldp+652,(1U),3);
    bufp->fullBit(oldp+653,(0U));
    bufp->fullCData(oldp+654,(8U),4);
    bufp->fullIData(oldp+655,(1U),32);
    bufp->fullBit(oldp+656,(1U));
    bufp->fullCData(oldp+657,(0U),4);
    bufp->fullCData(oldp+658,(1U),4);
    bufp->fullCData(oldp+659,(2U),4);
    bufp->fullCData(oldp+660,(3U),4);
    bufp->fullCData(oldp+661,(4U),4);
    bufp->fullCData(oldp+662,(5U),4);
    bufp->fullCData(oldp+663,(6U),4);
    bufp->fullCData(oldp+664,(7U),4);
    bufp->fullCData(oldp+665,(9U),4);
    bufp->fullCData(oldp+666,(0xaU),4);
    bufp->fullIData(oldp+667,(0xbU),32);
    bufp->fullIData(oldp+668,(0x10U),32);
    bufp->fullIData(oldp+669,(4U),32);
    bufp->fullIData(oldp+670,(5U),32);
    bufp->fullIData(oldp+671,(8U),32);
    bufp->fullCData(oldp+672,(0U),3);
    bufp->fullCData(oldp+673,(2U),3);
    bufp->fullCData(oldp+674,(3U),3);
    bufp->fullCData(oldp+675,(4U),3);
    bufp->fullCData(oldp+676,(5U),3);
    bufp->fullBit(oldp+677,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_pready));
    bufp->fullIData(oldp+678,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_prdata),32);
    bufp->fullBit(oldp+679,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__in_pslverr));
    bufp->fullIData(oldp+680,(3U),32);
    bufp->fullCData(oldp+681,(0U),6);
    bufp->fullCData(oldp+682,(1U),6);
    bufp->fullCData(oldp+683,(2U),6);
    bufp->fullCData(oldp+684,(3U),6);
    bufp->fullCData(oldp+685,(4U),6);
    bufp->fullCData(oldp+686,(0U),5);
    bufp->fullCData(oldp+687,(1U),5);
    bufp->fullCData(oldp+688,(2U),5);
    bufp->fullCData(oldp+689,(3U),5);
    bufp->fullCData(oldp+690,(4U),5);
    bufp->fullCData(oldp+691,(5U),5);
    bufp->fullCData(oldp+692,(6U),5);
    bufp->fullCData(oldp+693,(7U),5);
    bufp->fullCData(oldp+694,(8U),5);
    bufp->fullCData(oldp+695,(9U),5);
    bufp->fullCData(oldp+696,(0xaU),5);
    bufp->fullCData(oldp+697,(0xbU),5);
    bufp->fullCData(oldp+698,(0xcU),5);
    bufp->fullCData(oldp+699,(0xdU),5);
    bufp->fullCData(oldp+700,(0xeU),5);
    bufp->fullCData(oldp+701,(0U),8);
    bufp->fullIData(oldp+702,(0U),32);
    bufp->fullIData(oldp+703,(3U),32);
    bufp->fullCData(oldp+704,(0U),2);
    bufp->fullCData(oldp+705,(1U),2);
    bufp->fullCData(oldp+706,(2U),2);
    bufp->fullIData(oldp+707,(0x30000000U),32);
    bufp->fullIData(oldp+708,(0x20U),32);
    bufp->fullIData(oldp+709,(0U),32);
    bufp->fullIData(oldp+710,(0x800000U),32);
    bufp->fullIData(oldp+711,(0x18U),32);
    bufp->fullCData(oldp+712,(6U),3);
}
