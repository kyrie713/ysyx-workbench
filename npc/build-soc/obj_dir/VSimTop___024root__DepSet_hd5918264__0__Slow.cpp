// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_ATTR_COLD void VSimTop___024root___eval_static__TOP(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_static(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_static\n"); );
    // Body
    VSimTop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VSimTop___024root___eval_static__TOP(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
}

VL_ATTR_COLD void VSimTop___024root___eval_initial__TOP(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    VSimTop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT__soc_reset_REG_1 
        = vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1;
    vlSelf->__Vtrigrprev__TOP__cpuClock = vlSelf->cpuClock;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___soc_spi_sck 
        = vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___soc_spi_ss 
        = vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad 
        = vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___soc_psram_sck_o 
        = vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o;
}

VL_ATTR_COLD void VSimTop___024root___eval_initial__TOP(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial__TOP\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1 = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1 = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[1U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[2U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[3U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[4U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[5U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[6U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[7U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[8U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[9U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0xaU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0xbU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0xcU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0xdU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0xeU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0xfU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x10U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x11U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x12U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x13U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x14U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x15U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x16U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x17U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x18U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x19U] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x1aU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x1bU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x1cU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x1dU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x1eU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0x1fU] = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__i = 0x20U;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x800000U, vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i)) {
        vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__mem_array[(0x7fffffU 
                                                                   & vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode = 0U;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
    VL_WRITEF("PSRAM Model: Initialized memory with 0 for device 0.\n");
}

VL_ATTR_COLD void VSimTop___024root___eval_final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_final\n"); );
}

VL_ATTR_COLD void VSimTop___024root___eval_triggers__stl(VSimTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___eval_stl(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VSimTop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VSimTop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 3500, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VSimTop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 256> VSimTop__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> VSimTop__ConstPool__TABLE_he38796ec_0;
extern const VlUnpacked<CData/*3:0*/, 4> VSimTop__ConstPool__TABLE_h05f4911a_0;

VL_ATTR_COLD void VSimTop___024root___stl_sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT____VdfgTmp_hcda50bf2__0;
    SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT____VdfgTmp_hcda50bf2__0 = 0;
    CData/*0:0*/ SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____VdfgTmp_hc1925006__0;
    SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____VdfgTmp_hc1925006__0 = 0;
    CData/*7:0*/ SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_ss;
    SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_ss = 0;
    CData/*0:0*/ SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT____VdfgTmp_h3e8b818c__0;
    SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT____VdfgTmp_h3e8b818c__0 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->externalPins_mygpio_out = vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out;
    vlSelf->externalPins_mygpio_seg_0 = vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0;
    vlSelf->externalPins_mygpio_seg_1 = vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1;
    vlSelf->externalPins_mygpio_seg_2 = vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2;
    vlSelf->externalPins_mygpio_seg_3 = vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3;
    vlSelf->externalPins_mygpio_seg_4 = vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4;
    vlSelf->externalPins_mygpio_seg_5 = vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5;
    vlSelf->externalPins_mygpio_seg_6 = vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6;
    vlSelf->externalPins_mygpio_seg_7 = vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_3 
        = (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_4 
        = (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_5 
        = (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_6 
        = (4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_7 
        = (5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_8 
        = (6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_9 
        = (8U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_10 
        = (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel 
        = (IData)((0x10004000U == (0xf000ff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)));
    vlSelf->SimTop__DOT__flash__DOT__data_bswap = (
                                                   (vlSelf->SimTop__DOT__flash__DOT__rdata 
                                                    << 0x18U) 
                                                   | ((0xff0000U 
                                                       & (vlSelf->SimTop__DOT__flash__DOT__rdata 
                                                          << 8U)) 
                                                      | ((0xff00U 
                                                          & (vlSelf->SimTop__DOT__flash__DOT__rdata 
                                                             >> 8U)) 
                                                         | (vlSelf->SimTop__DOT__flash__DOT__rdata 
                                                            >> 0x18U))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_arvalid_T 
        = (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_arvalid_T_2 
        = (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___instReturn_T 
        = (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___lsuRead_T_2 
        = (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_lsu_respValid_T 
        = (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_wvalid_T_2 
        = (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_awvalid_T_3 
        = (5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_wvalid_T_3 
        = (4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_master_bready_0 
        = (6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte_upd 
        = ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
           | ((0xcU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
              | (0x14U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg;
    if ((8U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
        if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
            if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 0x20U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 0U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                    = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg;
            } else if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 0x20U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 0U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                    = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg;
            } else {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 0x10U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 2U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                    = ((0xffff0000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata) 
                       | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
                          >> 0x10U));
            }
        } else if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 0x20U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 0U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg;
        } else if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 0x20U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 0U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg;
        } else {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 8U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 3U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                = ((0xffffff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata) 
                   | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
                      >> 0x18U));
        }
    } else if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
        if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 0x20U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 0U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg;
        } else if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 0x20U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 0U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg;
        } else {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 8U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 2U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                = ((0xffffff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata) 
                   | (0xffU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
                               >> 0x10U)));
        }
    } else if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
        if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 0x10U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 0U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                = ((0xffff0000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata) 
                   | (0xffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg));
        } else {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 8U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 1U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                = ((0xffffff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata) 
                   | (0xffU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
                               >> 8U)));
        }
    } else {
        if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 8U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                = ((0xffffff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata) 
                   | (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg));
        } else {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 0x20U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg;
        }
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte 
        = (0xffU & (((- (IData)((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                     & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        >> 8U)) | (((- (IData)((0xcU 
                                                == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                                    & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                                       >> 0x10U)) | 
                                   ((- (IData)((0x14U 
                                                == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                                    & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                                       >> 0x18U)))));
    vlSelf->__VdfgTmp_h0138f4a2__0 = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count))));
    __Vtableidx2 = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_value 
        = VSimTop__ConstPool__TABLE_hccb3c341_0[__Vtableidx2];
    __Vtableidx5 = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VSimTop__ConstPool__TABLE_he38796ec_0[__Vtableidx5];
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
    SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_ss 
        = (0xffU & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss) 
                       & ((- (IData)(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                                      & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                                         >> 0xdU)))) 
                          | (- (IData)((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                                                 >> 0xdU)))))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite 
        = ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
            ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
            : (8U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_pstrb 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
            ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg)
            : 0U);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb 
        = ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
            ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_pstrb)
            : 0xfU);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read 
        = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_rready 
        = ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
           | (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)));
    __Vtableidx1 = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VSimTop__ConstPool__TABLE_h05f4911a_0[__Vtableidx1];
    vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad 
        = (1U & ((~ ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                     | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                        & (0U == (0x1800000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable 
        = ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)) 
           | (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_bready 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_rready 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
           == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio3_o 
        = (1U & ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                 & ((7U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                    & ((9U <= (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                       & (((0xcU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                            ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                               >> 4U) : (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                         >> 0x1cU)) 
                          >> 3U)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio2_o 
        = (3U & ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                 & ((7U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                    & ((9U <= (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                       & (((0xcU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                            ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                               >> 4U) : (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                         >> 0x1cU)) 
                          >> 2U)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_miso_o 
        = (7U & ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                 & ((7U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                    & ((9U <= (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                       & (((0xcU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                            ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                               >> 4U) : (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                         >> 0x1cU)) 
                          >> 1U)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_mosi_o 
        = ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
           & ((7U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
              & ((9U > (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                  ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                     >> 0x1fU) : (0xfU & ((0xcU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                                           ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                                              >> 4U)
                                           : (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                              >> 0x1cU))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_ifu_reqValid 
        = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)) 
           & (0U == vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
           == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
           == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
           == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
           == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen 
        = ((0xaU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
           | (0xbU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)));
    vlSelf->SimTop__DOT__espPsram__DOT__sio__en0 = 
        (0xfU & ((3U & (- (IData)((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable)))) 
                 | (0xcU & ((- (IData)((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable))) 
                            << 2U))));
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out0)) 
           | (3U & ((- (IData)((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable))) 
                    & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out))));
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out1 
        = ((3U & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out1)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable))) 
                       << 2U) & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2 
        = ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel 
        = ((0x40U == (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg 
                      >> 0x18U)) & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel 
        = ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
           | (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    if ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct7 
            = (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
               >> 0x19U);
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3 
            = (7U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                     >> 0xcU));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode 
            = (0x7fU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg);
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0 
            = (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
               >> 0x1fU);
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct7 = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3 = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0 = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real));
    vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss = (1U 
                                                   & (IData)(SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_ss));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                        - ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read)) 
           & ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
              & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0) 
                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->SimTop__DOT__asic__DOT___soc_psram_nss_o 
        = ((4U & (((~ ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                       | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                          & (0x1000000U == (0x1800000U 
                                            & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)) 
                  << 2U)) | ((2U & (((~ ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                         | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                            & (0x800000U 
                                               == (0x1800000U 
                                                   & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                     | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)) 
                                    << 1U)) | (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable) 
           & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)));
    vlSelf->externalPins_uart0_tx = (IData)((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                              >> 4U) 
                                             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad));
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_bvalid 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q_io_deq_ready 
            = (6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD));
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_bvalid 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count)));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q_io_deq_ready 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count)));
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_rready;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0;
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count)));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count)));
    }
    vlSelf->SimTop__DOT__espPsram__DOT____Vcelloutt__psram__sio__out 
        = ((3U & ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out0) 
                  & (- (IData)((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable))))) 
           | (0xcU & ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out1) 
                      & ((- (IData)((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable))) 
                         << 2U))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_3_auto_apply_in_prdata = 0U;
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_3_auto_apply_in_prdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data;
    } else if ((0U == (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_3_auto_apply_in_prdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
    } else if ((4U == (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_3_auto_apply_in_prdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd;
    } else if ((8U == (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_3_auto_apply_in_prdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready 
        = (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel)) 
            | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data 
        = ((0U == (0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                            >> 0x14U))) ? 0U : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
           [(0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                      >> 0x14U))]);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
            ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__awaddr_reg
            : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__araddr_reg);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata 
        = ((6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
            ? 0x3540U : ((5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                          ? 1U : ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                   ? 0U : ((3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                            ? (0x3000000U 
                                               | (0xfffffcU 
                                                  & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr))
                                            : ((2U 
                                                == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                                ? 0U
                                                : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup 
        = ((~ (IData)(((0U == (0x30000000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)) 
                       & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))))) 
           & (IData)(((0U == (0x30000000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)) 
                      & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)
                     ? ((1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg 
                            >> 0x18U) : (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg 
                                         >> 0x10U))
                     : ((1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg 
                            >> 8U) : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
            ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0 
        = ((8U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
            ? 0U : ((6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                     ? 4U : ((5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                              ? 6U : ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                       ? 5U : ((3U 
                                                == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                                ? 1U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                                    ? 0U
                                                    : 
                                                   (7U 
                                                    & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                                                       >> 2U))))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)
                     ? ((2U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)
                         ? ((1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)
                             ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)
                             ? (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)
                                        ? ((1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)
                                            ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)
                                            ? ((0x80U 
                                                & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((4U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                          >> 0x1bU)) | ((2U & (2U ^ 
                                               (0x1eU 
                                                & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (~ 
                                                 (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                                                  >> 0xcU)))))) 
           | (3U == (3U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                           >> 0x1cU))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                                        >> 0x1bU)))) 
                  | (1U & (~ (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                              >> 0xcU)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_1 
        = (0U == ((4U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                         >> 0x1bU)) | ((2U & ((~ (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                                                  >> 0x1cU)) 
                                              << 1U)) 
                                       | (1U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                                                >> 0xcU)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__MemWEn = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_add = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_add = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sw = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lw = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sb = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lbu = 0U;
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__MemWEn = 1U;
                                if ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3))) {
                                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sw = 1U;
                                }
                                if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3))) {
                                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sb = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                                if (((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3)) 
                                     & (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct7)))) {
                                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_add = 1U;
                                }
                                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                                if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3))) {
                                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_add = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                                if ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3))) {
                                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lw = 1U;
                                }
                                if ((2U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3))) {
                                    if ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3))) {
                                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lbu = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui = 0U;
    if ((0x40U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                                if ((0x2000U == (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                                 >> 7U))) {
                                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_ebreak = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE = 1U;
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode))) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD = 1U;
                }
            }
        }
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH) 
            | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD)) 
           | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__imm 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE)
            ? (((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                << 0xcU) | ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                             ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                >> 0x14U) : 0U)) : 
           ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE)
             ? (((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                 << 0xcU) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct7) 
                              << 5U) | ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                         ? (0x1fU & 
                                            (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                             >> 7U))
                                         : 0U))) : 
            ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE)
              ? (((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                  << 0xcU) | ((0xfffff800U & (((2U 
                                                == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)) 
                                               << 0xbU) 
                                              & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                 << 4U))) 
                              | ((((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                    ? (0x3fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                >> 0x19U))
                                    : 0U) << 5U) | 
                                 (((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                    ? (0xfU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                               >> 8U))
                                    : 0U) << 1U))))
              : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE)
                  ? (((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                       ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                          >> 0xcU) : 0U) << 0xcU) : 
                 ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)
                   ? (((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                       << 0x14U) | ((((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                       ? (0xffU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                   >> 0xcU))
                                       : 0U) << 0xcU) 
                                    | ((0x7ff800U & 
                                        (((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)) 
                                          << 0xbU) 
                                         & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                            >> 9U))) 
                                       | (((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                            ? (0x3ffU 
                                               & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                  >> 0x15U))
                                            : 0U) << 1U))))
                   : 0U)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__instReturn 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid) 
           & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready 
        = (1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal)
                  ? (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1))
                  : ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_arready 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready 
        = (1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal)
                  ? (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1))
                  : ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_awready 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready 
        = (1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal)
                  ? (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1))
                  : ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready));
    vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_3_p2c 
        = (1U & (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio3_o)) 
                 | ((((IData)(vlSelf->SimTop__DOT__espPsram__DOT____Vcelloutt__psram__sio__out) 
                      & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__sio__en0)) 
                     & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__sio__en0)) 
                    >> 3U)));
    vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_2_p2c 
        = (1U & (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio2_o)) 
                 | ((((IData)(vlSelf->SimTop__DOT__espPsram__DOT____Vcelloutt__psram__sio__out) 
                      & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__sio__en0)) 
                     & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__sio__en0)) 
                    >> 2U)));
    vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_1_p2c 
        = (1U & (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_miso_o)) 
                 | ((((IData)(vlSelf->SimTop__DOT__espPsram__DOT____Vcelloutt__psram__sio__out) 
                      & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__sio__en0)) 
                     & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__sio__en0)) 
                    >> 1U)));
    vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_p2c 
        = (1U & (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_mosi_o)) 
                 | (((IData)(vlSelf->SimTop__DOT__espPsram__DOT____Vcelloutt__psram__sio__out) 
                     & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__sio__en0)) 
                    & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__sio__en0))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = (((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
              & (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
             << 3U) | ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                         & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
                        << 2U) | ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                    & (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
                                   << 1U) | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (0U 
                                                == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0)))))) 
           & (- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))
            ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))
                ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))
                    ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))
                        ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))
                            ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))
                                ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))
                                    ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_1) 
           & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sb) 
           | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sw));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_size 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sb) 
            | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lbu))
            ? 0U : 2U);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lbu) 
           | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lw));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT = 0U;
    if ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE) 
          | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE)) 
         | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A 
            = ((0U == (0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                >> 0xfU))) ? 0U : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
               [(0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                          >> 0xfU))]);
    } else if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE) 
                | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC;
    } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A = 0U;
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data;
    } else if ((((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE)) 
                  | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE)) 
                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE)) 
                | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__imm;
    }
    if (((((((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_add) 
               | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_add)) 
              | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr)) 
             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE)) 
            | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE)) 
           | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lbu)) 
          | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lw)) 
         | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT 
            = (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A 
               + vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B);
    }
    vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_3_p2c) 
            << 3U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_2_p2c) 
                       << 2U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_1_p2c) 
                                  << 1U) | (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_p2c))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_prdata 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0)
             ? ((8U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                 ? ((vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                     << 0x18U) | ((0xff0000U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                                << 8U)) 
                                  | ((0xff00U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                                 >> 8U)) 
                                     | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                        >> 0x18U))))
                 : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata)
             : 0U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_1)
                        ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel)
                            ? (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r) 
                                << 0x18U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r) 
                                                 << 8U) 
                                                | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r))))
                            : 0U) : 0U) | (((0U == 
                                             (3U & 
                                              (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                                               >> 0x1cU)))
                                             ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_3_auto_apply_in_prdata
                                             : 0U) 
                                           | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3)
                                               ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_prdata
                                               : 0U))));
    SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_penable)) 
              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_pready 
        = (1U & (~ (((~ (((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)) 
                          | (8U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) 
                         & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2))) 
                     & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_penable) 
                            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel))) 
                        & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_1)) 
                       | ((IData)(((0U == (0x30000000U 
                                           & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)) 
                                   & (~ ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active)) 
                                         | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready))))) 
                          | ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_pready)) 
                             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3)))))));
    SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT____VdfgTmp_hcda50bf2__0 
        = ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load) 
              | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__next_pc 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr)
            ? (0xfffffffeU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
            : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)
                ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
                : ((IData)(4U) + vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wdata = 0U;
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sb) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask 
            = (0xfU & ((IData)(1U) << (3U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wdata 
            = ((2U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                ? ((1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                    ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data 
                       << 0x18U) : (0xff0000U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data 
                                                 << 0x10U)))
                : ((1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                    ? (0xff00U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data 
                                  << 8U)) : (0xffU 
                                             & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data)));
    } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sw) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask = 0xfU;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_in_rdata 
        = ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
            ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_prdata
            : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we 
        = ((IData)(SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)) 
           & (IData)(SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT____VdfgTmp_h3e8b818c__0 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_pready) 
            & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))) 
           | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu_done 
        = ((IData)(SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT____VdfgTmp_hcda50bf2__0) 
           & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_reqValid 
        = ((IData)(SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT____VdfgTmp_hcda50bf2__0) 
           & ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state)) 
              & (0U == vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)) 
           & (IData)(SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT____VdfgTmp_h3e8b818c__0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write) 
           & (IData)(SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT____VdfgTmp_h3e8b818c__0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__commit_valid 
        = ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)) 
           & ((~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD) 
                  | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE))) 
              | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu_done)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__load_data = 0U;
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu_done) {
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lw) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__load_data 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg;
        } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lbu) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__load_data 
                = ((2U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                    ? ((1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                        ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                           >> 0x18U) : (0xffU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                                 >> 0x10U)))
                    : ((1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                        ? (0xffU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                    >> 8U)) : (0xffU 
                                               & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg)));
        }
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wen 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_reqValid) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG) 
              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG) 
              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__casez_tmp 
        = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0) 
               | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0) 
                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0)))
            : ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                ? 2U : ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                         ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_pready)
                             ? ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_rready) 
                                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid)) 
                                 | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_bready) 
                                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid)))
                                 ? 0U : 3U) : 2U) : 
                        ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_rready) 
                           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid)) 
                          | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_bready) 
                             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid)))
                          ? 0U : 3U))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__RegWriteData = 0U;
    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lw) 
         | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lbu))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__RegWriteData 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__load_data;
    } else if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr) 
                | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__RegWriteData 
            = ((IData)(4U) + vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC);
    } else if ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE) 
                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH)) 
                | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__RegWriteData 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidStore 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_reqValid) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wen));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wen)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_reqValid));
    if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidStore;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21 
            = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad)
                ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_arready)
                    ? 2U : 1U) : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidStore)
                                   ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_awready)
                                       ? (4U | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready) 
                                                << 1U))
                                       : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready)
                                           ? 5U : 3U))
                                   : 0U));
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0 = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21 = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead 
        = (((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad)) 
           | (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_valid 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0) 
              | ((5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                 | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)))));
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_size;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__deq_valid 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_valid;
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__deq_valid 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count)));
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_valid 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0) 
              | ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                 | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)))));
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wdata;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__deq_valid 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_valid;
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__deq_valid 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count)));
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_arsize 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_size;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_araddr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT;
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_arsize = 2U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_araddr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_valid 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_ifu_reqValid)) 
              | ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead))));
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_arsize;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_araddr;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__deq_valid 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_valid;
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__deq_valid 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count)));
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__deq_valid));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__deq_valid));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__deq_valid));
}

VL_ATTR_COLD void VSimTop___024root___eval_stl(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VSimTop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__ico(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock or posedge reset)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge SimTop.asic.soc_reset_REG_1 or posedge cpuClock)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge cpuClock)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge SimTop.asic.soc_reset_REG_1 or posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge SimTop.asic._soc_spi_sck or posedge SimTop.asic._soc_spi_ss)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge SimTop.asic._soc_spi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(edge SimTop.asic._psram_nss_o_psram_nss_o_pad_pad or edge SimTop.asic._soc_psram_sck_o)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__nba(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock or posedge reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge SimTop.asic.soc_reset_REG_1 or posedge cpuClock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge cpuClock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge SimTop.asic.soc_reset_REG_1 or posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge SimTop.asic._soc_spi_sck or posedge SimTop.asic._soc_spi_ss)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge SimTop.asic._soc_spi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(edge SimTop.asic._psram_nss_o_psram_nss_o_pad_pad or edge SimTop.asic._soc_psram_sck_o)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->cpuClock = 0;
    vlSelf->coreSel = 0;
    vlSelf->externalPins_mygpio_out = 0;
    vlSelf->externalPins_mygpio_in = 0;
    vlSelf->externalPins_mygpio_seg_0 = 0;
    vlSelf->externalPins_mygpio_seg_1 = 0;
    vlSelf->externalPins_mygpio_seg_2 = 0;
    vlSelf->externalPins_mygpio_seg_3 = 0;
    vlSelf->externalPins_mygpio_seg_4 = 0;
    vlSelf->externalPins_mygpio_seg_5 = 0;
    vlSelf->externalPins_mygpio_seg_6 = 0;
    vlSelf->externalPins_mygpio_seg_7 = 0;
    vlSelf->externalPins_uart0_rx = 0;
    vlSelf->externalPins_uart0_tx = 0;
    vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_3_p2c = 0;
    vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_2_p2c = 0;
    vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_1_p2c = 0;
    vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_p2c = 0;
    vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_psram_nss_o = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_out = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_2 = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_3 = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_5 = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_6 = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_mygpio_seg_7 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_bready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_rready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_in_rdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_pstrb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_3_auto_apply_in_prdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_pready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_prdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_pready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_prdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_penable = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_araddr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_arsize = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_rready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_ifu_reqValid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_reqValid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wen = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_awready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_bvalid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_arready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__load_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__RegWriteData = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__imm = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__MemWEn = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_add = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lw = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lbu = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_add = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sw = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_ebreak = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu_done = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__commit_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__lfsr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct7 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lfsr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__next_pc = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__i = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidStore = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_arvalid_T = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_arvalid_T_2 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___instReturn_T = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___lsuRead_T_2 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_lsu_respValid_T = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_wvalid_T_2 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_awvalid_T_3 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_wvalid_T_3 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_master_bready_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__instReturn = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__interrupt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_re = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__start_dlc = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__trigger_level = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_value = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_irq_out = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_3 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_5 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_6 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_7 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_8 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_9 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_10 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__wb_dat = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__neg_edge = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    VL_ZERO_RESET_W(128, vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_clk = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__tx_clk = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__in_pslverr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio3_o = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio2_o = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_miso_o = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_mosi_o = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte_upd = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__casez_tmp = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__araddr_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__awaddr_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__deq_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__deq_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__deq_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_strb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_1_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q_io_deq_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4 = 0;
    vlSelf->SimTop__DOT__flash__DOT__state = 0;
    vlSelf->SimTop__DOT__flash__DOT__counter = 0;
    vlSelf->SimTop__DOT__flash__DOT__cmd = 0;
    vlSelf->SimTop__DOT__flash__DOT__addr = 0;
    vlSelf->SimTop__DOT__flash__DOT__data = 0;
    vlSelf->SimTop__DOT__flash__DOT__rdata = 0;
    vlSelf->SimTop__DOT__flash__DOT__data_bswap = 0;
    vlSelf->SimTop__DOT__espPsram__DOT____Vcelloutt__psram__sio__out = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__sio__en0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8388608; ++__Vi0) {
        vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__mem_array[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out0 = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out1 = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT____Vlvbound_hb15e3313__0 = 0;
    vlSelf->__VdfgTmp_h0138f4a2__0 = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_spi_sck = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_spi_mosi = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o = 0;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__state = 0;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__counter = 0;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__cmd = 0;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__addr = 0;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__data = 0;
    vlSelf->__Vtrigrprev__TOP__clock = 0;
    vlSelf->__Vtrigrprev__TOP__reset = 0;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT__soc_reset_REG_1 = 0;
    vlSelf->__Vtrigrprev__TOP__cpuClock = 0;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___soc_spi_sck = 0;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___soc_spi_ss = 0;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad = 0;
    vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___soc_psram_sck_o = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
