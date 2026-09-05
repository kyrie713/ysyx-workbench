// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop__pch.h"

VL_ATTR_COLD void VSimTop___024root____Vm_traceActivitySetAll(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_static(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_static\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i = 0;
    }
    VSimTop___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__cpuClock__0 = vlSelfRef.cpuClock;
    vlSelfRef.__Vtrigprevexpr___TOP__coreSel__0 = vlSelfRef.coreSel;
    vlSelfRef.__Vtrigprevexpr___TOP__externalPins_mygpio_in__0 
        = vlSelfRef.externalPins_mygpio_in;
    vlSelfRef.__Vtrigprevexpr___TOP__externalPins_uart0_rx__0 
        = vlSelfRef.externalPins_uart0_rx;
    vlSelfRef.__Vtrigprevexpr___TOP__clock__1 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__1 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT__soc_reset_REG_1__0 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1;
    vlSelfRef.__Vtrigprevexpr___TOP__cpuClock__1 = vlSelfRef.cpuClock;
    vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad__0 
        = vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad;
    vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___soc_psram_sck_o__0 
        = vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o;
    vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___soc_spi_sck__0 
        = vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss__0 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss;
}

VL_ATTR_COLD void VSimTop___024root___eval_initial__TOP(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSimTop___024root___eval_initial__TOP(vlSelf);
    VSimTop___024root____Vm_traceActivitySetAll(vlSelf);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSimTop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void VSimTop___024root___stl_sequent__TOP__0(VSimTop___024root* vlSelf);

VL_ATTR_COLD bool VSimTop___024root___eval_stl(VSimTop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_stl\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimTop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VSimTop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                VSimTop___024root___stl_sequent__TOP__0(vlSelf);
                VSimTop___024root____Vm_traceActivitySetAll(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__stl(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_dump_triggers__stl\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VSimTop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__ico(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_dump_triggers__ico\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VSimTop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__act(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_dump_triggers__act\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VSimTop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__nba(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_dump_triggers__nba\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VSimTop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__obs(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_dump_triggers__obs\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__react(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_dump_triggers__react\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VSimTop___024root___eval_final(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_final\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VSimTop___024root___eval_initial__TOP(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial__TOP\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1 = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1)))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1 = 0U;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[1U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[2U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[3U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[4U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[5U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[6U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[7U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[8U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[9U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[10U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[11U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[12U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[13U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[14U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[15U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[16U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[17U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[18U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[19U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[20U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[21U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[22U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[23U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[24U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[25U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[26U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[27U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[28U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[29U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[30U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[31U] = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__i = 0x00000020U;
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00800000U, vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__mem_array[(0x007fffffU 
                                                                     & vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode = 0U;
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
    VL_WRITEF_NX("PSRAM Model: Initialized memory with 0 for device 0.\n",0);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VSimTop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VSimTop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<16>/*511:0*/ VSimTop__ConstPool__CONST_h1da41607_0;

VL_ATTR_COLD void VSimTop___024root___stl_sequent__TOP__0(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___stl_sequent__TOP__0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_26;
    __VdfgRegularize_h6e95ff9d_0_26 = 0;
    // Body
    vlSelfRef.externalPins_mygpio_out = vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_out;
    vlSelfRef.externalPins_mygpio_seg_0 = vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0;
    vlSelfRef.externalPins_mygpio_seg_1 = vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1;
    vlSelfRef.externalPins_mygpio_seg_2 = vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2;
    vlSelfRef.externalPins_mygpio_seg_3 = vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3;
    vlSelfRef.externalPins_mygpio_seg_4 = vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4;
    vlSelfRef.externalPins_mygpio_seg_5 = vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5;
    vlSelfRef.externalPins_mygpio_seg_6 = vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6;
    vlSelfRef.externalPins_mygpio_seg_7 = vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte_upd 
        = ((4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
           | ((0x0cU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
              | (0x14U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel 
        = (IData)((0x10004000U == (0xf000ff00U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0x0000000fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                          - (IData)(1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 = ((2U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                  ? 0x20U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                   ? 0x20U
                                                   : 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = (2U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg) 
                                                                      >> 1U)))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte 
        = (0x000000ffU & (((- (IData)((4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                           & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                              >> 8U)) | (((- (IData)(
                                                     (0x0cU 
                                                      == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                                          & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                                             >> 0x00000010U)) 
                                         | ((- (IData)(
                                                       (0x14U 
                                                        == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)))) 
                                            & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                                               >> 0x00000018U)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2 
        = (1U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 1U));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3 
        = (1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4 
        = (1U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 2U));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
           | (0U != (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] 
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
                                                               | vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U])))))))))))))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
              >> 1U));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0x0000000fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = (0x000003ffU & VSimTop__ConstPool__CONST_h1da41607_0
           [(0x0000000fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))]);
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss 
        = (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss) 
                    & (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                        & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                           >> 0x0000000dU)) | (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                                                  >> 0x0000000dU))))));
    vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad 
        = (1U & ((~ ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                     | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                        & (0U == (0x01800000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                 | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (0x0000000fU & (0xe841U >> ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr) 
                                             << 2U)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_pstrb 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg) 
           & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt))) 
           & (0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = ((0x00000080U 
                                                  & ((~ 
                                                      (0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)))) 
                                                     << 7U)) 
                                                 | (0x0000007fU 
                                                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite 
        = ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
            ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
            : (8U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0) 
           & (0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rready 
        = ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
           | (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable 
        = ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)) 
           | (1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    if ((0x00000010U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = 
            ((0x0000000cU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                             << 2U)) | ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                 >> 3U))));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = 8U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
           == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0) 
                                                 & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_reqValid 
        = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)) 
           & (0U == vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
           == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
           == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
           == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
           == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr 
        = ((((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r) 
               << 3U) | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                         << 2U)) | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                     << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
            << 4U) | ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                        << 3U) | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                  << 2U)) | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r))));
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out0 
        = ((0x0eU & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out0)) 
           | ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
              & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out)));
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out1 
        = ((0x0dU & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
                              << 1U) & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out))));
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out2 
        = ((0x0bU & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
                              << 2U) & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out))));
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out3 
        = ((7U & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
                              << 3U) & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (0x0000000fU 
                                                & ((0x0cU 
                                                    == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                                                    ? 
                                                   ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                                                    >> 4U)
                                                    : 
                                                   (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                                    >> 0x0000001cU)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready) 
           & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen 
        = ((0x0aU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
           | (0x0bU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
           & (0x40U == (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg 
                        >> 0x00000018U)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel 
        = ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
           | (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
        = (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
           & (- (IData)((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb 
        = (0x0000000fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_pstrb) 
                          | (- (IData)((1U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0x000000ffU & ((0x00000800U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                           ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                              - ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                 + (1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                                          >> 9U))))
                           : ((0x00000200U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                               ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                               : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                  - (IData)(1U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((2U 
                                                 == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)) 
                                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable));
    vlSelfRef.externalPins_uart0_tx = (IData)((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                >> 4U) 
                                               | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out)));
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__io_deq_ready 
            = (6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__io_deq_ready 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count)));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count)));
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready 
        = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
           & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready)) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)));
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rready;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count)));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count)));
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & (0U != (3U & (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr) 
                                    >> 1U) | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr) 
                                              >> 3U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
                                                 | (((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
                                                     << 1U) 
                                                    | (((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
                                                        << 2U) 
                                                       | ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
                                                          << 3U)))) 
                                                & (((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out0) 
                                                    & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable)) 
                                                   | (((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out1) 
                                                       & ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
                                                          << 1U)) 
                                                      | (((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out2) 
                                                          & ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
                                                             << 2U)) 
                                                         | ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out3) 
                                                            & ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable) 
                                                               << 3U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((((
                                                   ((7U 
                                                     != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                    & ((9U 
                                                        <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                       & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                           >> 3U) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))))) 
                                                   << 3U) 
                                                  | (((0U 
                                                       != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                      & ((7U 
                                                          != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                         & ((9U 
                                                             <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                               >> 2U)))) 
                                                     << 2U)) 
                                                 | ((((0U 
                                                       != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                      & ((7U 
                                                          != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                         & ((9U 
                                                             <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                               >> 1U)))) 
                                                     << 1U) 
                                                    | ((7U 
                                                        != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                       & (((9U 
                                                            > (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                                                            ? 
                                                           (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                                            >> 0x0000001fU)
                                                            : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
           & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel)) 
              | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
            ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__awaddr_reg
            : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__araddr_reg);
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata 
        = ((6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
            ? 0x00003540U : ((5U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                              ? 1U : (((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                        ? (0x03000000U 
                                           | (0x00fffffcU 
                                              & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))
                                        : (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg 
                                           & (- (IData)(
                                                        (2U 
                                                         != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)))))) 
                                      & (- (IData)(
                                                   (4U 
                                                    != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup 
        = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel) 
            & (0U == (0x30000000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))) 
           & (~ (IData)(((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
                         & (0U == (0x30000000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w 
        = (0x000000ffU & ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                           ? ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                               ? (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg 
                                  >> 0x00000018U) : 
                              (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg 
                               >> 0x00000010U)) : (
                                                   (1U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                    ? 
                                                   (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg 
                                                    >> 8U)
                                                    : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
            ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (7U 
                                                & (((6U 
                                                     == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                                     ? 4U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                                      ? 6U
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                                       ? 5U
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                                        ? 1U
                                                        : 
                                                       ((- (IData)(
                                                                   (2U 
                                                                    != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)))) 
                                                        & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                                           >> 2U)))))) 
                                                   & (- (IData)(
                                                                (8U 
                                                                 != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = ((~ 
                                                  ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 7U)) 
                                                 & (0U 
                                                    == 
                                                    (7U 
                                                     & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0 
        = (1U & ((~ (IData)((0x10001000U != (0x30001000U 
                                             & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))) 
                 | (3U == (3U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                 >> 0x0000001cU)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3 
        = ((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
            >> 0x0000000cU) & (0U == (3U & (2U ^ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                                  >> 0x0000001cU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (IData)(
                                                        (0x10000000U 
                                                         != 
                                                         (0x30001000U 
                                                          & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2 
        = ((0U == (0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                  >> 0x00000014U)))
            ? 0U : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
           [(0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                            >> 0x00000014U))]);
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu 
        = (IData)(((0x00004003U == (0x0000707fU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                   & (2U != (7U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                   >> 0x0000000cU)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui = 0U;
    if ((0x00000040U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
        if ((0x00000020U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
            if ((0x00000010U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                if ((1U & (~ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                                if ((0x00002000U == 
                                     (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                      >> 7U))) {
                                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_ebreak = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                          >> 4U)))) {
                if ((8U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                    if ((4U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                        if ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                            if ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                    if ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                        if ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                    if ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE = 1U;
                    }
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
        if ((0x00000010U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
            if ((1U & (~ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                          >> 3U)))) {
                if ((4U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                    if ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                        if ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                          >> 2U)))) {
                if ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                    if ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE = 1U;
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
        if ((1U & (~ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                      >> 3U)))) {
            if ((1U & (~ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                          >> 2U)))) {
                if ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                    if ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                         >> 3U)))) {
        if ((1U & (~ (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                      >> 2U)))) {
            if ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                if ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD = 1U;
                }
            }
        }
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE 
        = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH) 
            | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD)) 
           | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__imm 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE)
            ? (((- (IData)((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                            >> 0x0000001fU))) << 0x0000000cU) 
               | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                  >> 0x00000014U)) : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE)
                                       ? (((- (IData)(
                                                      (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                       >> 0x0000001fU))) 
                                           << 0x0000000cU) 
                                          | ((0x00000fe0U 
                                              & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                 >> 0x00000014U)) 
                                             | (0x0000001fU 
                                                & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                   >> 7U))))
                                       : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE)
                                           ? (((- (IData)(
                                                          (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | ((0x00000800U 
                                                  & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                     << 4U)) 
                                                 | ((0x000007e0U 
                                                     & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                          >> 7U)))))
                                           : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE)
                                               ? (0xfffff000U 
                                                  & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)
                                               : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                                >> 0x0000001fU))) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                              >> 0x00000014U))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                            >> 0x00000014U))))
                                                   : 0U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 = (IData)(
                                                        (3U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_respValid 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid) 
           & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready 
        = (1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal)
                  ? (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1))
                  : ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_awready 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready 
        = (1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal)
                  ? (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1))
                  : ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arready 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready 
        = (1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal)
                  ? (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1))
                  : ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready));
    vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_0 = 
        (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
               | ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))));
    vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_1 = 
        (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                >> 1U) | ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                             >> 1U))));
    vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_2 = 
        (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                >> 2U) | ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                             >> 2U))));
    vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_3 = 
        (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                >> 3U) | ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                             >> 3U))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite))) 
           & (((((3U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                << 3U) | (((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                          << 2U)) | ((((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                      << 1U) | ((0U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_penable 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)) 
           & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((~ 
                                                 (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                  >> 3U)) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i 
        = ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_3) 
             << 3U) | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_2) 
                       << 2U)) | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_1) 
                                   << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_0)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_prdata 
        = ((((8U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
              ? ((((0x0000ff00U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                   << 8U)) | (0x000000ffU 
                                              & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                                 >> 8U))) 
                  << 0x00000010U) | ((0x0000ff00U & 
                                      (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                       >> 8U)) | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                                  >> 0x00000018U)))
              : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata) 
            & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0)))) 
           | (((- (IData)((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20))))) 
               & (((((4U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                      ? ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                          ? ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                              ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch)
                              : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))
                          : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr) 
                             & (- (IData)((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))))
                      : ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                          ? ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                              ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)
                              : (0x000000c0U | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir)))
                          : ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                              ? ((0x00000080U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl) 
                                     >> 8U) : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier))
                              : ((0x00000080U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)
                                  : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                    << 0x00000018U) | ((0x00ff0000U 
                                        & (((4U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
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
                                                  [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                           << 0x00000010U)) 
                                       | ((0x0000ff00U 
                                           & (((4U 
                                                & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
                                                ? (
                                                   (2U 
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
                                                : (
                                                   (2U 
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
                                              << 8U)) 
                                          | (0x000000ffU 
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
                  & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel))))) 
              | ((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_prdata 
                  & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3)))) 
                 | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel)
                      ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data
                      : ((0U == (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))
                          ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait)
                          : ((4U == (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))
                              ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd)
                              : ((- (IData)((8U == 
                                             (0x000000ffU 
                                              & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)))) 
                                 & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init))))) 
                    & (- (IData)((0U == (3U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                               >> 0x0000001cU)))))))));
    __VdfgRegularize_h6e95ff9d_0_26 = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                                       & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_penable)) 
                                          & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = (1U 
                                                 & (((~ 
                                                      (((1U 
                                                         == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)) 
                                                        | (8U 
                                                           == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) 
                                                       & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2))) 
                                                     & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0)) 
                                                    | ((~ 
                                                        (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel) 
                                                          & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_penable)) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20))) 
                                                       | (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_pready)) 
                                                           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3)) 
                                                          | (IData)(
                                                                    ((0U 
                                                                      == 
                                                                      (0x30000000U 
                                                                       & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)) 
                                                                     & (~ 
                                                                        ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active)) 
                                                                         | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready)))))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE 
        = (IData)(((0x00000030U == (0x00000070U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x00007000U 
                                                           & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = (IData)(
                                                        ((0x00002000U 
                                                          == 
                                                          (0x00007010U 
                                                           & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rdata 
        = ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
            ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_prdata
            : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r);
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_26));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_re_i 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_26));
    __VdfgRegularize_h6e95ff9d_0_21 = ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
                                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19)) 
                                          & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sb 
        = (IData)(((0x00000020U == (0x00000070U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw 
        = (IData)(((0U == (0x00000060U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sw 
        = (IData)(((0x00000020U == (0x00000060U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_re_i) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_re_i) 
           & ((~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_re_i) 
           & ((~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_re_i) 
           & ((~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_bvalid 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_21));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rvalid 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_21));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_size 
        = (2U & (- (IData)((1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu) 
                                     | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sb)))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B = 0U;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT = 0U;
    if ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE) 
          | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE)) 
         | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A 
            = ((0U == (0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                      >> 0x0000000fU)))
                ? 0U : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
               [(0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                >> 0x0000000fU))]);
    } else if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE) 
                | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC;
    } else if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A = 0U;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2;
    } else if ((((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE)) 
                  | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE)) 
                 | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE)) 
                | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__imm;
    }
    if (((((((((IData)(((0x00000030U == (0xfe007070U 
                                         & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))) 
               | (IData)(((0x00000010U == (0x00000070U 
                                           & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)))) 
              | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr)) 
             | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE)) 
            | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE)) 
           | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu)) 
          | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw)) 
         | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT 
            = (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A 
               + vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B);
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu) 
           | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sb) 
           | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sw));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG) 
              & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_bvalid)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG) 
              & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rvalid)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 = (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)) 
                                                                     & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG)) 
                                                                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rvalid)) 
                                                                   | (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)) 
                                                                       & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG)) 
                                                                      & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_bvalid))))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__next_pc 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr)
            ? (0xfffffffeU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
            : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)
                ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
                : ((IData)(4U) + vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)));
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sb) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wmask 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wdata 
            = ((2U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                ? (((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                     ? (0x0000ff00U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2 
                                       << 8U)) : (0x000000ffU 
                                                  & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2)) 
                   << 0x00000010U) : ((1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                       ? (0x0000ff00U 
                                          & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2 
                                             << 8U))
                                       : (0x000000ffU 
                                          & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2)));
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wmask 
            = (0x0000000fU & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sw))));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wdata 
            = (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2 
               & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sw))));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load) 
                                                  | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store)) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__casez_tmp 
        = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0) 
               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))
            : ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                ? 2U : ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19)
                             ? 2U : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))
                         : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_done 
        = ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_reqValid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31) 
           & ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state)) 
              & (0U == vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid 
        = (((~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE) 
                | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD))) 
            | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_done)) 
           & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wen 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_reqValid));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = ((0U 
                                                  == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                                                 & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wen));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wen)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_reqValid));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) 
              | ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                 | (5U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)))));
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_size 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_size;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_addr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_valid 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_valid;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_size 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_addr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_valid 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count)));
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) 
              | ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                 | (4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)))));
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wmask;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wdata;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_valid 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_valid;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_valid 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count)));
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21 
        = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad)
             ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arready)
                 ? 2U : 1U) : (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_awready)
                                 ? (4U | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready) 
                                          << 1U)) : 
                                ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready)
                                  ? 5U : 3U)) & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wen))))) 
           & (- (IData)((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead 
        = ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
           | ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
              & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad)));
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arsize 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_size;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_araddr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arsize = 2U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_araddr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
              | (((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_reqValid)) 
                 | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead))));
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_size 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arsize;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_addr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_araddr;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_valid 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_valid;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_size 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_addr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_valid 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count)));
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_valid));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_valid));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_valid));
}

bool VSimTop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VSimTop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( cpuClock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( coreSel)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( externalPins_mygpio_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( externalPins_uart0_rx)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VSimTop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VSimTop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge SimTop.asic.soc_reset_REG_1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge cpuClock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(edge SimTop.asic._psram_nss_o_psram_nss_o_pad_pad)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(edge SimTop.asic._soc_psram_sck_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge SimTop.asic._soc_spi_sck)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge SimTop.asic.soc.DefDevice_1.extra_ss)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimTop___024root____Vm_traceActivitySetAll(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vm_traceActivitySetAll\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[10U] = 1U;
    vlSelfRef.__Vm_traceActivity[11U] = 1U;
    vlSelfRef.__Vm_traceActivity[12U] = 1U;
    vlSelfRef.__Vm_traceActivity[13U] = 1U;
    vlSelfRef.__Vm_traceActivity[14U] = 1U;
    vlSelfRef.__Vm_traceActivity[15U] = 1U;
}

VL_ATTR_COLD void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelf->SimTop__DOT__asic__DOT__psram_dio_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__psram_dio_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__psram_dio_2 = 0;
    vlSelf->SimTop__DOT__asic__DOT__psram_dio_3 = 0;
    vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi = 0;
    vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o = 0;
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_pready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_2_auto_apply_in_prdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_addr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__io_deq_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_1_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_data = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_strb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__interrupt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_re_i = 0;
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4 = 0;
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out = 0;
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse = 0;
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_reqValid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_respValid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__imm = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_ebreak = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__next_pc = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__i = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_reqValid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_size = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wen = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wmask = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_done = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lfsr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sw = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__lfsr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_awready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_araddr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arsize = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i = 0;
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay = 0;
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_irq_out = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__neg_edge = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    VL_ZERO_RESET_W(128, vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__in_pslverr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__casez_tmp = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__araddr_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__awaddr_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_pstrb = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_prdata = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_penable = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3 = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_bvalid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rvalid = 0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rdata = 0;
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
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out0 = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out1 = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out2 = 0;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out3 = 0;
    vlSelf->SimTop__DOT__flash__DOT__state = 0;
    vlSelf->SimTop__DOT__flash__DOT__counter = 0;
    vlSelf->SimTop__DOT__flash__DOT__cmd = 0;
    vlSelf->SimTop__DOT__flash__DOT__addr = 0;
    vlSelf->SimTop__DOT__flash__DOT__data = 0;
    vlSelf->SimTop__DOT__flash__DOT__rdata = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_16 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_18 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_19 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_22 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_25 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_28 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_29 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_30 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_31 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_32 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_33 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_35 = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_spi_mosi = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_spi_sck = 0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o = 0;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__state = 0;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__counter = 0;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__cmd = 0;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__addr = 0;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__data = 0;
    vlSelf->__VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    vlSelf->__VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    vlSelf->__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpuClock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__coreSel__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__externalPins_mygpio_in__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__externalPins_uart0_rx__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT__soc_reset_REG_1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpuClock__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___soc_psram_sck_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___soc_spi_sck__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
