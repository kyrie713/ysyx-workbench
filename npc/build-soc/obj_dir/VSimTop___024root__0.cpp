// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop__pch.h"

extern "C" void notify_ebreak(int code);

void VSimTop___024root____Vdpiimwrap_SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__notify_ebreak_TOP(IData/*31:0*/ code) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root____Vdpiimwrap_SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__notify_ebreak_TOP\n"); );
    // Body
    int code__Vcvt;
    code__Vcvt = code;
    notify_ebreak(code__Vcvt);
}

void VSimTop___024root___eval_sample(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_sample\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VSimTop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void VSimTop___024root___ico_sequent__TOP__0(VSimTop___024root* vlSelf);

bool VSimTop___024root___eval_ico(VSimTop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_ico\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.externalPins_uart0_rx) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__externalPins_uart0_rx__0)) 
                                                           << 5U) 
                                                          | (((IData)(vlSelfRef.externalPins_mygpio_in) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__externalPins_mygpio_in__0)) 
                                                             << 4U)) 
                                                         | (((((IData)(vlSelfRef.coreSel) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__coreSel__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.cpuClock) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpuClock__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.reset) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.clock) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
        vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
        vlSelfRef.__Vtrigprevexpr___TOP__cpuClock__0 
            = vlSelfRef.cpuClock;
        vlSelfRef.__Vtrigprevexpr___TOP__coreSel__0 
            = vlSelfRef.coreSel;
        vlSelfRef.__Vtrigprevexpr___TOP__externalPins_mygpio_in__0 
            = vlSelfRef.externalPins_mygpio_in;
        vlSelfRef.__Vtrigprevexpr___TOP__externalPins_uart0_rx__0 
            = vlSelfRef.externalPins_uart0_rx;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimTop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VSimTop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
                VSimTop___024root___ico_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void VSimTop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool VSimTop___024root___eval_act(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_act\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss__0))) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___soc_spi_sck__0))) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o) 
                                                                ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___soc_psram_sck_o__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad) 
                                                                 ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad__0)))) 
                                                          << 4U) 
                                                         | (((((IData)(vlSelfRef.cpuClock) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpuClock__1))) 
                                                              << 3U) 
                                                             | (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT__soc_reset_REG_1__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.reset) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__1))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.clock) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__1))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clock__1 = vlSelfRef.clock;
        vlSelfRef.__Vtrigprevexpr___TOP__reset__1 = vlSelfRef.reset;
        vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT__soc_reset_REG_1__0 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1;
        vlSelfRef.__Vtrigprevexpr___TOP__cpuClock__1 
            = vlSelfRef.cpuClock;
        vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad__0 
            = vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad;
        vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___soc_psram_sck_o__0 
            = vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o;
        vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT___soc_spi_sck__0 
            = vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck;
        vlSelfRef.__Vtrigprevexpr___TOP__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss__0 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimTop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VSimTop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool VSimTop___024root___eval_inact(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_inact\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VSimTop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void VSimTop___024root___eval_body__nba(VSimTop___024root* vlSelf);
void VSimTop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool VSimTop___024root___eval_nba(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_nba\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VSimTop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VSimTop___024root___eval_body__nba(vlSelf);
        VSimTop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool VSimTop___024root___eval_obs(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_obs\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VSimTop___024root___eval_react(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_react\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void VSimTop___024root___eval_postponed(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_postponed\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool VSimTop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void VSimTop___024root___ico_sequent__TOP__0(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ico_sequent__TOP__0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2 
        = ((0U == (0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                  >> 0x00000014U)))
            ? 0U : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
           [(0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                            >> 0x00000014U))]);
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_addr 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal)
            ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
            : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr);
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_araddr 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead)
            ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
            : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC);
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wmask;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wdata;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_addr 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal)
            ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_araddr
            : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr);
}

bool VSimTop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 2048> VSimTop__ConstPool__TABLE_h4ab70536_0;
extern const VlWide<16>/*511:0*/ VSimTop__ConstPool__CONST_haf0ddab7_0;
extern const VlUnpacked<CData/*3:0*/, 64> VSimTop__ConstPool__TABLE_hfd090534_0;

void VSimTop___024root___nba_sequent__TOP__1(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__1\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    CData/*7:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    SData/*9:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    VlWide<4>/*127:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data);
    CData/*5:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready = 0;
    CData/*4:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 0;
    IData/*31:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca = 0;
    CData/*7:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 0;
    CData/*2:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0;
    CData/*4:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt = 0;
    CData/*4:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 0;
    CData/*7:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt = 0;
    CData/*3:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt = 0;
    CData/*7:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data = 0;
    CData/*0:0*/ __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*0:0*/ __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    CData/*0:0*/ __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    CData/*2:0*/ __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*3:0*/ __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*0:0*/ __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*0:0*/ __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0;
    CData/*31:0*/ __VExpandSel_Lsb_1;
    // Body
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_spi_sck 
        = vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_spi_mosi 
        = vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_mosi;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0U;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
        = vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_spi_sck 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                & (0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
               & ((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                  | (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck)))
               ? (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck))
               : (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck)));
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable) 
               & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0))) 
              & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write)
                     ? 0U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                             | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask)
               ? 0U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                       | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2) 
                          & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2_d))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask)
               ? 0U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                       | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3) 
                          & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3_d))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask)
               ? 0U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                       | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4) 
                          & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4_d))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask)
               ? 0U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                       | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7) 
                          & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7_d))))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write)
                     ? 0U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                             | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (((((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                 & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse))) 
               | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset))
               ? 0U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                       | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0) 
                          & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0_d))))));
    __VExpandSel_Lsb_1 = (0x0000007fU & ((0x00000800U 
                                          & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                             - (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))));
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_spi_mosi 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((1U & (((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                      & ((0x00000400U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                          ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__neg_edge)
                          : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge))) 
                     | (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))
               ? (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data
                  [(__VExpandSel_Lsb_1 >> 5U)] >> (0x0000001fU 
                                                   & __VExpandSel_Lsb_1))
               : (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_mosi)));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read)
               ? 0U : (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int))
                        ? 1U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
                                   >> 3U)))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read)
               ? 0U : (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int))
                        ? 1U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier)))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask)
               ? 0U : (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int))
                        ? 1U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
                                   >> 2U)))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write) 
               | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read) 
                  & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir))))
               ? 0U : (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int))
                        ? 1U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
                                   >> 1U)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask)
               ? 0U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                       | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                          & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d))))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count) 
                == (0x0000000fU & (0xe841U >> ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr) 
                                               << 2U)))) 
               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read))
               ? 0U : (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int))
                        ? 1U : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier)))));
    if ((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1)))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           && (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real));
    __Vtableidx1 = ((((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read) 
                        << 5U) | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                   << 4U) | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                          << 2U) | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                     << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read)))) 
                     << 5U) | ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                 << 4U) | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__interrupt 
        = VSimTop__ConstPool__TABLE_h4ab70536_0[__Vtableidx1];
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1))) 
           || (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push;
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0x0000000fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr) 
                                          | (0x0eU 
                                             ^ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0x0fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                           << 1U)) | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                            >> 1U))) 
                   << 6U) | (((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                     >> 1U)) | (1U 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                   >> 3U))) 
                             << 4U)));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0x0000ffffU & ((1U & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)) 
                                     | (0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt))))
                               ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)
                               : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                                  - (IData)(1U))));
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)
                               ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge)
                                   ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                               : ((0U != (0x0000007fU 
                                          & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)))
                                   ? (0x0000007fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                                   : 0x80U)));
        if ((1U & (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                     & (~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip = 0U;
        }
        if (((((4U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
              & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite)) 
             & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x000000ffU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata 
                                         | (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x00ffU & (IData)(vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x00003f00U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        } else if ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                     & (~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl));
        }
        if ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0x00ffffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x00ff0000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x0000ff00U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        } else if ((1U & (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0x00ffffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x00ff0000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x0000ff00U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        } else if ((1U & (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0x00ffffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x00ff0000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x0000ff00U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        } else if ((IData)((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0x00ffffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x00ff0000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x0000ff00U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data
                    [(3U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                            >> 5U))]) | ((1U & ((((0x00000200U 
                                                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                                                   ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__neg_edge)
                                                   : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge)) 
                                                 & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck) 
                                                    | (0U 
                                                       != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt))))
                                                 ? 
                                                ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss) 
                                                 | (((2U 
                                                      == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state)) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter)))
                                                     ? 
                                                    (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                     >> 7U)
                                                     : 
                                                    (vlSelfRef.SimTop__DOT__flash__DOT__data 
                                                     >> 0x0000001fU)))
                                                 : 
                                                (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data
                                                 [(3U 
                                                   & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                      >> 5U))] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                         << (0x0000001fU 
                                             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_re_i) 
                     & (0U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))) 
                    & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                  >> 2U));
        } else if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                                  - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
              | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x000003ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t) 
                                  - (IData)(1U)));
        }
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t;
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0x000000ffU & VSimTop__ConstPool__CONST_haf0ddab7_0
                   [(0x0000000fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))]);
        } else if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                                  - (IData)(1U)));
        }
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0x0000ffffU & ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                     | (~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc)))))
                               ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl) 
                                  - (IData)(1U)) : 
                              ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc) 
                               - (IData)(1U))));
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        } else if ((2U == (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = (7U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                      - (IData)(1U)));
                __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 1U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = (7U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 1U;
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0x0000ffffU;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t = 0x027fU;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 1U;
    }
    if (__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U] = 0U;
    }
    if (__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16] 
            = __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    }
    if (__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17] = 0U;
    }
    if (__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18] 
            = __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    }
    if (__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14U] = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U] = 0U;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
             & (4U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x0000001fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i));
        }
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
             & (7U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
        }
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
            = ((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                : ((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                    ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                    : ((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                        ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                        : ((3U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                            ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                            : ((4U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                                ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)
                                : ((5U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                                    ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)
                                    : ((- (IData)((6U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))) 
                                       & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss))))))));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        if (((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real) 
               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)) 
              & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel)) 
             & (8U == (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init 
                = (1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg);
        }
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready = 0U;
        if (((((((((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                   | (1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
                  | (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
                 | (3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
                | (4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
               | (5U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
              | (6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
             | (7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)))) {
            if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                if ((0U != vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt)) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt 
                        = (0x0003ffffU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt 
                                          - (IData)(1U)));
                } else {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca = 0x66000000U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 2U;
            } else if ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd) 
                     == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd))) {
                    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                         != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait))) {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt))) {
                        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 3U;
                    }
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                        = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                                          - (IData)(1U)));
                } else {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd)));
                }
            } else if ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca = 0x99000000U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 4U;
            } else if ((4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd) 
                     == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd))) {
                    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                         != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait))) {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt))) {
                        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 5U;
                    }
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                        = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                                          - (IData)(1U)));
                } else {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd)));
                }
            } else if ((5U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca = 0x35000000U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 6U;
            } else if ((6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd) 
                     == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd))) {
                    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                         != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait))) {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                    }
                    if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt))) {
                        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 7U;
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done = 1U;
                    }
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                        = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                                          - (IData)(1U)));
                } else {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd)));
                }
            } else {
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o = 0U;
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst = 0U;
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                } else if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                        = (0x38000000U | vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr);
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 0x20U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 9U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 0x0cU;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt = 0U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0U;
                } else if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                        = (0xeb000000U | vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr);
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 0x20U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 9U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 0x0aU;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt = 0x0cU;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt = 0U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0U;
                } else {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                }
            }
        } else if ((8U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
                = (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o)));
            if (vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt 
                    = (0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt) 
                                      - (IData)(1U)));
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                    = (1U | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                             << 1U));
                if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state 
                        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt;
                }
            }
        } else if ((9U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
                = (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o)));
            if (vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt 
                    = (0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt) 
                                      - (IData)(4U)));
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                    = (1U | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                             << 4U));
                if ((4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state 
                        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt;
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data 
                        = (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata);
                }
            }
        } else if ((0x0aU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
                = (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o)));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt) 
                                  - (IData)(1U)));
            if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 0x0bU;
            }
        } else if ((0x0bU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
                = (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o)));
            if (vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o) {
                if ((8U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        = ((0xffffff00U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data) 
                           | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data));
                } else if ((0x10U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        = ((0xffff00ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data) 
                           | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                              << 8U));
                } else if ((0x18U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        = ((0xff00ffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data) 
                           | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                              << 0x00000010U));
                }
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data 
                    = ((0x000000f0U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                                       << 4U)) | ((
                                                   ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_3) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_2) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_1) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_0))));
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt 
                    = (0x000000ffU & ((IData)(4U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)));
                if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt) 
                     == (0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt) 
                                        - (IData)(4U))))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 0x0dU;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
                }
            }
        } else if ((0x0cU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
                = (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o)));
            if (vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data 
                    = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte_upd)
                        ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte)
                        : (0x0fU | (0x000000f0U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                                                   << 4U))));
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt 
                    = (0x000000ffU & ((IData)(4U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)));
                if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt) 
                     == (0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt) 
                                        - (IData)(4U))))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 0x0eU;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
                }
            }
        } else if ((0x0dU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd) 
                 == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd))) {
                if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                     != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait))) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        = ((0x00ffffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data) 
                           | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                              << 0x00000018U));
                }
                if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 7U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready = 1U;
                }
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                    = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                                      - (IData)(1U)));
            } else {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd)));
            }
        } else if ((0x0eU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd) 
                 == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd))) {
                if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                     != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait))) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                }
                if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 7U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready = 1U;
                }
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                    = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                                      - (IData)(1U)));
            } else {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd)));
            }
        }
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst = 1U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt = 0x0000c350U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = (1U & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = (1U & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__neg_edge 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           && ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                 & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck)) 
                & (1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
               | (((~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider))) 
                   & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck))) 
                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx2 = ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                      << 5U) | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                 << 4U) | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int) 
                        << 2U) | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir 
        = VSimTop__ConstPool__TABLE_hfd090534_0[__Vtableidx2];
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0x0eU;
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
             & (2U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i) 
                         >> 6U));
        }
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
             & (1U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))) {
            if ((1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0x0000000fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i));
            }
        }
        if (((((6U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
              & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite)) 
             & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss 
                    = (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata);
            }
        }
        if (((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real) 
               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)) 
              & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel)) 
             & (0U == (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait 
                = (0x0000001fU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg);
        }
        if (((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real) 
               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)) 
              & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel)) 
             & (4U == (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd 
                = (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg);
        }
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st = 1U;
        } else if ((0x0eU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st = 0U;
        }
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st = 1U;
        } else if ((0x0dU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st = 0U;
        }
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel) {
            if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state))) {
                if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re) 
                     & (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 1U;
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt 
                        = ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                            ? ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                ? ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                    ? 0x20U : ((1U 
                                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                ? 0x20U
                                                : 0x10U))
                                : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33))
                            : ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                                : ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                    ? ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                        ? 0x10U : 8U)
                                    : ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                        ? 8U : 0x20U))));
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr 
                        = (0x00ffffffU & ((0x007fffffU 
                                           & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg) 
                                          + (3U & (
                                                   (8U 
                                                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                                     : 
                                                    ((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg) 
                                                                     >> 1U))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)))))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)
                                                     : 
                                                    (1U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg) 
                                                                       >> 1U)))) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))))))))))));
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata 
                        = ((0xffff0000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg) 
                           | (0x0000ffffU & ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                              ? ((4U 
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
                                              : ((4U 
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
                                                   : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg)))));
                } else if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re) 
                            & (~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 3U;
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt = 0x20U;
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr 
                        = (0x007fffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg);
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata 
                        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg;
                }
            } else if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state))) {
                if ((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st = 1U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 2U;
                }
            } else if ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st = 0U;
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 0U;
                }
            } else if ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state))) {
                if ((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st = 1U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 4U;
                }
            } else if ((4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st = 0U;
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 0U;
                }
            }
        }
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait = 0x12U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd = 4U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d = 0U;
    }
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           && (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
                & (0U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))) 
               && (1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                         >> 7U))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = (1U & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | (IData)(vlSelfRef.externalPins_uart0_rx)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((0x00000010U 
                                                 & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))
                                                 ? 
                                                ((0x0000000cU 
                                                  & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                          >> 3U))))
                                                 : 8U);
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte_upd 
        = ((4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
           | ((0x0cU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
              | (0x14U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))));
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & (0U != (3U & (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr) 
                                    >> 1U) | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr) 
                                              >> 3U)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
              >> 1U));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0x0000000fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state;
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (0x0000000fU & (0xe841U >> ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr) 
                                             << 2U)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           && (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
                & (2U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))) 
               && (1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i) 
                         >> 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (0x0000000fU 
                                                & ((0x0cU 
                                                    == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                                                    ? 
                                                   ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                                                    >> 4U)
                                                    : 
                                                   (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                                    >> 0x0000001cU)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen 
        = ((0x0aU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
           | (0x0bU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)));
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
}

void VSimTop___024root___nba_sequent__TOP__2(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__2\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 = 0;
    CData/*3:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 0;
    CData/*1:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 0;
    CData/*7:0*/ __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                      & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal) 
                            | ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
                                      >> 1U)) != (1U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:1933: Assertion failed in %m: Assertion failed at RationalCrossing.scala:99\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.sink.nodeIn_bsource", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1933, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:1935: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.sink.nodeIn_bsource", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1935, "", false);
    }
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count;
    if (VL_UNLIKELY((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                      & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal) 
                            | ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
                                      >> 1U)) != (1U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:1809: Assertion failed in %m: Assertion failed at RationalCrossing.scala:99\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.sink.nodeIn_rsource", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1809, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:1811: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.sink.nodeIn_rsource", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1811, "", false);
    }
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1;
    if (VL_UNLIKELY((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                      & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal) 
                            | ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
                                      >> 1U)) != (1U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:1538: Assertion failed in %m: Assertion failed at RationalCrossing.scala:133\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.sink.nodeOut_awsink", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1538, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:1540: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.sink.nodeOut_awsink", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1540, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                      & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal) 
                            | ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
                                      >> 1U)) != (1U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:1538: Assertion failed in %m: Assertion failed at RationalCrossing.scala:133\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.sink.nodeOut_arsink", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1538, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:1540: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.sink.nodeOut_arsink", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1540, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                      & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) 
                            | ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
                                      >> 1U)) != (1U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:1679: Assertion failed in %m: Assertion failed at RationalCrossing.scala:133\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.sink.nodeOut_wsink", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1679, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:1681: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.sink.nodeOut_wsink", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1681, "", false);
    }
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count;
    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                       & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0)) 
                      & (2U < (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:963: Assertion failed in %m: Assertion failed at AXI4ToAPB.scala:65\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 963, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:965: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 965, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                       & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0)) 
                      & (2U < (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:969: Assertion failed in %m: Assertion failed at AXI4ToAPB.scala:66\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 969, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:971: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 971, "", false);
    }
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN;
    vlSelfRef.__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) {
        __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                              >> 3U));
        __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
        __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push) {
        vlSelfRef.__VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
        vlSelfRef.__VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
        vlSelfRef.__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w_reg 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1;
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data;
    }
    if ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_prdata;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__araddr_reg 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr;
    }
    if (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active)) 
         & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg 
            = (0x40000000U | (0x01fffffcU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg 
            = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
                ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_pstrb)
                : 0U);
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__awaddr_reg 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active 
            = (1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active)
                      ? (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready))
                      : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup)));
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__io_deq_ready) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4));
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1));
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0));
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1 
                = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1));
        }
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__io_deq_ready) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count 
                = ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
                                              >> 1U))));
        }
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1 = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count = 0U;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0;
    if (__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count 
                = ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
                                              >> 1U))));
        }
        if (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_valid))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count 
                = ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
                                              >> 1U))));
        }
        if (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_valid))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count 
                = ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
                                              >> 1U))));
        }
        if (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_valid))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count 
                = ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
                                              >> 1U))));
        }
        if ((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
            if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 0U;
                }
            } else if ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 3U;
                }
            } else if ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 4U;
                }
            } else if ((4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 6U;
                }
            } else if ((6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 7U;
                }
            } else if ((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_irq_out) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 8U;
                }
            } else if (((8U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)) 
                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 0U;
            }
        } else if ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel) 
                     & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0)) 
                    & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN 
                = (((0x2fffffffU < (0x3fffffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)) 
                    & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)))
                    ? 2U : 1U);
        }
        if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0))) {
            if (((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)) 
                 & (7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 2U;
        } else if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 0U;
        }
    } else {
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 0U;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable 
        = ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)) 
           | (1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)));
    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1) 
             | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4))
          : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0))))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data 
            = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)
                ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_1_data
                : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rdata);
    }
    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready)
          ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1))
          : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0)))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_1_data 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rdata;
    }
    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready)
          ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1) 
             | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4))
          : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0))))) {
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_addr;
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_size;
        } else {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_addr;
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_size;
        }
    }
    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready)
          ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1))
          : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0)))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_addr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_addr;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_size 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_size;
    }
    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready)
          ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1) 
             | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4))
          : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0))))) {
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_addr;
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_size;
        } else {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_addr;
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_size;
        }
    }
    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready)
          ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1))
          : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0)))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_addr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_addr;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_size 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_size;
    }
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel 
        = (IData)((0x10004000U == (0xf000ff00U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)));
    if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1));
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 
                = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1));
        }
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1));
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 
                = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1));
        }
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1));
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 
                = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 
                = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0)) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1));
        }
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__casez_tmp;
    } else {
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state = 0U;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1;
    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready)
          ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1) 
             | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4))
          : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0))))) {
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_data;
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_strb;
        } else {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data;
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb;
        }
    }
    if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready)
          ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1))
          : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0)))) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_data 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_strb 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_pstrb 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg) 
           & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0) 
                                                 & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0) 
           & (0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel 
        = ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
           | (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready 
        = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
           & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready)) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18)));
}

void VSimTop___024root___nba_sequent__TOP__3(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__3\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0;
    CData/*5:0*/ __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0;
    IData/*23:0*/ __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address = 0;
    CData/*2:0*/ __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter = 0;
    CData/*5:0*/ __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter = 0;
    CData/*7:0*/ __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode = 0;
    CData/*3:0*/ __VdlyVal__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0;
    __VdlyVal__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 0;
    CData/*2:0*/ __VdlyLsb__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0;
    __VdlyLsb__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 0;
    IData/*22:0*/ __VdlyDim0__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0;
    __VdlyDim0__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 0;
    CData/*0:0*/ __VdlySet__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0;
    __VdlySet__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 0;
    // Body
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state 
        = vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
        = vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address 
        = vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__current_address;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter 
        = vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter 
        = vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte 
        = vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode 
        = vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode;
    __VdlySet__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 0U;
    if ((4U & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
        if ((2U & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
            if ((1U & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
            } else if (vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
            } else if (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o))) {
                vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i;
                __VdlyVal__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 
                    = vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in;
                __VdlyLsb__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 
                    = (7U & (((IData)(7U) - ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter) 
                                             << 2U)) 
                             - (IData)(3U)));
                __VdlyDim0__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 
                    = (0x007fffffU & vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__current_address);
                __VdlySet__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 1U;
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter)));
                if ((1U == (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address 
                        = (0x00ffffffU & ((IData)(1U) 
                                          + vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__current_address));
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                    if ((0x007fffffU == vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__current_address)) {
                        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address = 0U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
            if (vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
            } else if ((1U & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                              & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o))))) {
                vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out 
                    = (0x0000000fU & (vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__mem_array
                                      [(0x007fffffU 
                                        & vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__current_address)] 
                                      >> (7U & (((IData)(7U) 
                                                 - 
                                                 ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter) 
                                                  << 2U)) 
                                                - (IData)(3U)))));
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter)));
                if ((1U == (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter)));
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address 
                        = (0x00ffffffU & ((IData)(1U) 
                                          + vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__current_address));
                    if ((0x007fffffU == vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__current_address)) {
                        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address = 0U;
                    }
                } else if ((4U == (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter = 0U;
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
                }
            }
        } else if (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o))) {
            __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter)));
            if ((5U == (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter))) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter = 0U;
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 1U;
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 5U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
        if ((1U & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
            if (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                 & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o))) {
                vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i;
                if ((0x17U >= (0x0000001fU & (((IData)(0x17U) 
                                               - ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter) 
                                                  << 2U)) 
                                              - (IData)(3U))))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address 
                        = (((~ ((IData)(0x0000000fU) 
                                << (0x0000001fU & (
                                                   ((IData)(0x17U) 
                                                    - 
                                                    ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter) 
                                                     << 2U)) 
                                                   - (IData)(3U))))) 
                            & __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address) 
                           | (0x00ffffffU & ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in) 
                                             << (0x0000001fU 
                                                 & (((IData)(0x17U) 
                                                     - 
                                                     ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter) 
                                                      << 2U)) 
                                                    - (IData)(3U))))));
                }
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter)));
                if ((5U == (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state 
                        = ((0xebU == (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte))
                            ? 4U : ((0x38U == (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte))
                                     ? 6U : 0U));
                }
            }
        } else if (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o))) {
            vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i;
            __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte 
                = ((0U == (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))
                    ? ((0x0fU & (IData)(__Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                       | ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in) 
                          << 4U)) : ((0xf0U & (IData)(__Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                                     | (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in)));
            __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter)));
            if ((1U == (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state 
                    = ((0xebU == ((0x000000f0U & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                                  | (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in)))
                        ? 3U : ((0x38U == ((0x000000f0U 
                                            & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                                           | (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in)))
                                 ? 3U : 0U));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
        if (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o))) {
            __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte 
                = (((~ ((IData)(1U) << (7U & ((IData)(7U) 
                                              - (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))))) 
                    & (IData)(__Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                   | (0x00ffU & ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i)) 
                                 << (7U & ((IData)(7U) 
                                           - (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))))));
            __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter)));
            if ((7U == (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                if ((0x66U == ((0x000000feU & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                               | (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i))))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                } else if ((0x99U == ((0x000000feU 
                                       & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                                      | (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i))))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                } else if ((0x35U == ((0x000000feU 
                                       & (IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                                      | (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i))))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode = 1U;
                } else {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)))) {
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter = 0U;
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter = 0U;
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address = 0U;
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte = 0U;
        vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state 
            = ((IData)(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode)
                ? 2U : 1U);
    }
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state;
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter;
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__current_address 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address;
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter;
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter;
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte;
    vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode;
    if (__VdlySet__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0) {
        vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__mem_array[__VdlyDim0__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0] 
            = (((~ ((CData)(0x0fU) << (IData)(__VdlyLsb__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0))) 
                & vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__mem_array
                [__VdlyDim0__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0]) 
               | (0x00ffU & ((CData)((IData)(__VdlyVal__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0)) 
                             << (IData)(__VdlyLsb__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0))));
    }
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
}

void VSimTop___024root___nba_sequent__TOP__4(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__4\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 0;
    CData/*1:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 0;
    CData/*2:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD = 0;
    IData/*31:0*/ __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0;
    __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0;
    __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
                      & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal) 
                            | ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count) 
                                      >> 1U)) == (1U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:1279: Assertion failed in %m: Assertion failed at RationalCrossing.scala:134\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.source.nodeIn_bsink", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1279, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:1281: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.source.nodeIn_bsink", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1281, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
                      & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal) 
                            | ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count) 
                                      >> 1U)) == (1U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:1225: Assertion failed in %m: Assertion failed at RationalCrossing.scala:134\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.source.nodeIn_rsink", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1225, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:1227: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.source.nodeIn_rsink", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1227, "", false);
    }
    if ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
          & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid)) 
         & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_ebreak))) {
        VSimTop___024root____Vdpiimwrap_SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__notify_ebreak_TOP(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[10U]);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
                      & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal) 
                            | ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count) 
                                      >> 1U)) == (1U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:1069: Assertion failed in %m: Assertion failed at RationalCrossing.scala:98\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.source.nodeOut_awsource", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1069, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:1071: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.source.nodeOut_awsource", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1071, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
                      & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal) 
                            | ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count) 
                                      >> 1U)) == (1U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:1069: Assertion failed in %m: Assertion failed at RationalCrossing.scala:98\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.source.nodeOut_arsource", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1069, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:1071: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.source.nodeOut_arsource", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1071, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
                      & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) 
                            | ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count) 
                                      >> 1U)) == (1U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ElaborateTop.v:1151: Assertion failed in %m: Assertion failed at RationalCrossing.scala:98\n\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.source.nodeOut_wsource", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1151, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ElaborateTop.v:1153: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.asic.soc.cdc.source.nodeOut_wsource", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(100));
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1153, "", false);
    }
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state;
    __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 = 0U;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state;
    if (((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE) 
           | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE) 
              | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE) 
                 | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)))) 
          & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid)) 
         & (0U != (0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                  >> 7U))))) {
        __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 
            = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load)
                ? (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw)
                     ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg
                     : (0x000000ffU & ((- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu))) 
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
                                        | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE))))))));
        __VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 
            = (0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                              >> 7U));
        __VdlySet__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 = 1U;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI 
            = (((((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_reqValid)) 
                 | (1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)))
                 ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arready)
                     ? 2U : 1U) : 0U) | ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI))
                                          ? (2U & (
                                                   (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid)) 
                                                   << 1U))
                                          : 0U));
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rready) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count 
                = ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count) 
                                              >> 1U))));
        }
        if (((6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count 
                = ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count) 
                                              >> 1U))));
        }
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_valid))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count 
                = ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count) 
                                              >> 1U))));
        }
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_valid))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count 
                = ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count) 
                                              >> 1U))));
        }
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_valid))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count 
                = ((2U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count) 
                                              >> 1U))));
        }
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD 
            = ((((((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21)) 
                   | (3U & (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21) 
                             | ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))
                                 ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arready)
                                     ? 2U : 1U) : 0U)) 
                            | ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))
                                ? (2U & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid)) 
                                         << 1U)) : 0U)))) 
                  | ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))
                      ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_awready)
                          ? (4U | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready) 
                                   << 1U)) : 3U) : 0U)) 
                 | ((5U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))
                     ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_awready)
                         ? 6U : 5U) : 0U)) | ((4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))
                                               ? (4U 
                                                  | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready) 
                                                     << 1U))
                                               : 0U)) 
               | (((6U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid))
                   ? 0U : 6U));
        if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))) {
            if ((0U != vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count)) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count 
                    = (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count 
                       - (IData)(1U));
            } else if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_reqValid) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))) {
            if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_respValid) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                    = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_respValid)
                        ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata
                        : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r);
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))) {
            if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 0U;
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count = 0U;
            }
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 0U;
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg = 0U;
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__lfsr = 1U;
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count = 0U;
        }
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__next_pc;
        }
        if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state))) {
            if ((0U != vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count)) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count 
                    = (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count 
                       - (IData)(1U));
            } else if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_reqValid) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state))) {
            if ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid) 
                  & (6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))) 
                 | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid) 
                    & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))) {
                if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata;
                }
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 2U;
            }
        } else {
            if ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 0U;
            } else {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 0U;
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg = 0U;
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lfsr = 1U;
            }
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count = 0U;
        }
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__lfsr = 1U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC = 0x30000000U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lfsr = 1U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count = 0U;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arsize;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_araddr;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wmask;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wdata;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_size;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG 
        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1;
    if (__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[__VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0] 
            = __VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state;
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_respValid) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_reqValid 
        = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)) 
           & (0U == vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
        = (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
           & (- (IData)((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state;
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rready 
        = ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
           | (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((~ 
                                                 (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                  >> 3U)) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30));
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sb 
        = (IData)(((0x00000020U == (0x00000070U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw 
        = (IData)(((0U == (0x00000060U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sw 
        = (IData)(((0x00000020U == (0x00000060U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)));
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) 
              | ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                 | (4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)))));
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
}

extern const VlWide<16>/*511:0*/ VSimTop__ConstPool__CONST_h1da41607_0;

void VSimTop___024root___nba_sequent__TOP__7(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__7\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o;
    vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_mosi 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_spi_mosi;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) 
                                | (0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))) {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                    } else {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                    } else {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = (7U & (0x0facU >> ((IData)(3U) 
                                                 * 
                                                 (3U 
                                                  & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)))));
                        if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))) {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x00000010U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x00000020U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x00000020U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if ((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))) {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i)));
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0x0aU;
                    }
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))) {
                        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i;
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                } else {
                    if ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))) {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    if ((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))) {
                        if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) 
                                        << 7U) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) 
                                           << 6U) | 
                                          (0x0000003fU 
                                           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                              >> 1U))));
                            }
                        } else {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) 
                                           << 5U) | 
                                          (0x0000001fU 
                                           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                              >> 1U))))
                                    : ((0xe0U & (IData)(vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i) 
                                           << 4U) | 
                                          (0x0000000fU 
                                           & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                              >> 1U)))));
                        }
                    }
                }
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if ((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))) {
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i)
                            ? 0U : 6U);
                }
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                if (((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i)) 
                     & (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
        }
        if ((((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                >> 0x0000000cU) & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)) 
              & (~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
             & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_irq_out = 1U;
        } else if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_irq_out = 0U;
        }
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_irq_out = 0U;
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
        } else if ((2U == (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
            if (VL_UNLIKELY(((0x10U > (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count))))) {
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count)));
                VL_WRITEF_NX("%c",1, '#',8,vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i);
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
                VL_FFLUSH_I(1U);
            }
        } else if ((1U == (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0U < (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count 
                    = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count) 
                                      - (IData)(1U)));
            }
        } else if (VL_UNLIKELY(((3U == (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                         << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))))) {
            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            VL_WRITEF_NX("%c",1, '#',8,vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i);
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
            VL_FFLUSH_I(1U);
        }
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0x0000000fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                          - (IData)(1U)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           && (1U & (((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                        & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck))) 
                       & (1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                      | ((~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider))) 
                         & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck))) 
                     | (((~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider))) 
                         & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                            >> 8U)) & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           && (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
                & (2U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))) 
               && (1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i) 
                         >> 2U))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           && (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
                & (0U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))) 
               && (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                            >> 7U)))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse));
    vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT___soc_spi_sck;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl;
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
                                                    [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom]));
                        } else {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x0000007fU 
                                                      & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
                                                      [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom])));
                        }
                    } else if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x0000003fU 
                                                  & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
                                                  [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom])));
                    } else {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x0000001fU 
                                                  & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
                                                  [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom])));
                    }
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x0000007fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
                                          [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom] 
                                          >> 1U));
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
                           [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom]);
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                                  - (IData)(1U)));
                        }
                    } else {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0x0dU : ((4U == (7U 
                                                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)))
                                            ? 0x15U
                                            : 0x1dU));
                    }
                    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                    = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                                  - (IData)(1U)));
                        }
                    } else {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0x0fU;
                    }
                } else if ((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        if ((0U < (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                = (7U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                         - (IData)(1U)));
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                = ((0x40U & (IData)(vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                   | (0x0000003fU & 
                                      ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                       >> 1U)));
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                = (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                        } else if ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                = ((0x00000010U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                 >> 5U))) 
                                       && (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                    : ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                                              >> 5U)) 
                                       || (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                        } else {
                            vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        }
                    } else {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                              - (IData)(1U)));
                    }
                } else {
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0x0fU;
                }
            } else if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x0000001fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                              - (IData)(1U)));
                    }
                } else {
                    vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0x0fU;
                }
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
    } else {
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = ((0x00000080U 
                                                  & ((~ 
                                                      (0U 
                                                       != 
                                                       (0x0000007fU 
                                                        & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)))) 
                                                     << 7U)) 
                                                 | (0x0000007fU 
                                                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt))) 
           & (0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count)));
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable 
            = ((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)) 
               & (~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc))));
        if (((((5U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
              & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite)) 
             & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)) 
                       | (0x000000ffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider 
                    = ((0x00ffU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)) 
                       | (0x0000ff00U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        }
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
             & (1U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))) {
            if ((0x00000080U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0x00ffU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i) 
                          << 8U));
            }
        }
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
             & (0U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))) {
            if ((0x00000080U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i));
            }
        }
        if (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
             & (3U == (7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))) {
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
        }
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl 
            = (0x00ffU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    }
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss 
        = (1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss) 
                    & (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                        & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                           >> 0x0000000dU)) | (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                                                  >> 0x0000000dU))))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = (0x000003ffU & VSimTop__ConstPool__CONST_h1da41607_0
           [(0x0000000fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))]);
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.externalPins_uart0_tx = (IData)((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                >> 4U) 
                                               | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i 
        = ((0x00000010U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad));
}

void VSimTop___024root___nba_sequent__TOP__8(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__8\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count;
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count 
        = vlSelfRef.__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count;
    if (vlSelfRef.__VdlySet__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[vlSelfRef.__VdlyDim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = vlSelfRef.__VdlyVal__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb 
        = (0x0000000fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_pstrb) 
                          | (- (IData)((1U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((2U 
                                                 == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)) 
                                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite 
        = ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
            ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
            : (8U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)));
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup 
        = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel) 
            & (0U == (0x30000000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))) 
           & (~ (IData)(((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
                         & (0U == (0x30000000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))))));
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
}

void VSimTop___024root___nba_comb__TOP__2(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_comb__TOP__2\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
           == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count));
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
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__io_deq_ready 
            = (6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD));
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count)));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__io_deq_ready 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count)));
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rready;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count)));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count)));
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready 
            = (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_addr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_size 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_size;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_valid 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_valid;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready 
            = (1U & ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count))));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_addr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_size 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_valid 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count)));
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready 
            = (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_addr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_araddr;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_size 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arsize;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_valid 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_valid;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready 
            = (1U & ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count))));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_addr 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_size 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_valid 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count)));
    }
    if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wdata;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wmask;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready 
            = (1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_valid 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_valid;
    } else {
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb 
            = vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb;
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready 
            = (1U & ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count))));
        vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_valid 
            = ((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count)));
    }
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_respValid 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid) 
           & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_awready 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_valid));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arready 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_valid));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_valid));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21 
        = (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad)
             ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arready)
                 ? 2U : 1U) : (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_awready)
                                 ? (4U | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready) 
                                          << 1U)) : 
                                ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready)
                                  ? 5U : 3U)) & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wen))))) 
           & (- (IData)((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)))));
}

void VSimTop___024root___nba_comb__TOP__3(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_comb__TOP__3\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = ((~ 
                                                  ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 7U)) 
                                                 & (0U 
                                                    == 
                                                    (7U 
                                                     & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)));
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rdata 
        = ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
            ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_prdata
            : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r);
    __VdfgRegularize_h6e95ff9d_0_21 = ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
                                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19)) 
                                          & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_bvalid 
        = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_21));
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rvalid 
        = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_21));
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
    vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__casez_tmp 
        = ((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0) 
               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))
            : ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                ? 2U : ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                         ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19)
                             ? 2U : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))
                         : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))));
}

void VSimTop___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

void VSimTop___024root___eval_body__nba(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_body__nba\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__counter 
                = vlSelfRef.SimTop__DOT__flash__DOT__counter;
            vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__cmd 
                = vlSelfRef.SimTop__DOT__flash__DOT__cmd;
            vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__state 
                = vlSelfRef.SimTop__DOT__flash__DOT__state;
            vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__data 
                = vlSelfRef.SimTop__DOT__flash__DOT__data;
            vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__addr 
                = vlSelfRef.SimTop__DOT__flash__DOT__addr;
            if (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss) {
                vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__counter = 0U;
                vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__cmd = 0U;
                vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__state = 0U;
                vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__data = 0U;
                vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__addr = 0U;
            } else {
                if ((0U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state))) {
                    vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__counter 
                        = (0x000000ffU & ((7U > (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter))
                                           ? ((IData)(1U) 
                                              + (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter))
                                           : 0U));
                    vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__state 
                        = ((7U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter))
                            ? 1U : (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state));
                } else if ((1U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state))) {
                    vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__counter 
                        = (0x000000ffU & ((0x17U > (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter))
                                           ? ((IData)(1U) 
                                              + (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter))
                                           : 0U));
                    vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__state 
                        = ((3U != (IData)(vlSelfRef.SimTop__DOT__flash__DOT__cmd))
                            ? 3U : ((0x17U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter))
                                     ? 2U : (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state)));
                } else {
                    vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__counter 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter)));
                    if (VL_LIKELY(((2U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state))))) {
                        vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__state 
                            = vlSelfRef.SimTop__DOT__flash__DOT__state;
                    } else {
                        vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__state 
                            = vlSelfRef.SimTop__DOT__flash__DOT__state;
                        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",1
                                      , '#',8,vlSelfRef.SimTop__DOT__flash__DOT__cmd);
                        VL_WRITEF_NX("[%0t] %%Fatal: flash.v:44: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.flash", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(100));
                        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 44, "", false);
                    }
                }
                if ((0U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state))) {
                    vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__cmd 
                        = ((0x000000feU & ((IData)(vlSelfRef.SimTop__DOT__flash__DOT__cmd) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_mosi));
                }
                if ((2U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state))) {
                    vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__data 
                        = (((0U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter))
                             ? ((((0x0000ff00U & (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                      >> 8U))) << 0x00000010U) 
                                | ((0x0000ff00U & (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                   >> 8U)) 
                                   | (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                      >> 0x00000018U)))
                             : vlSelfRef.SimTop__DOT__flash__DOT__data) 
                           << 1U);
                }
                if (((1U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state)) 
                     & (0x17U > (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter)))) {
                    vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__addr 
                        = ((0x00fffffeU & (vlSelfRef.SimTop__DOT__flash__DOT__addr 
                                           << 1U)) 
                           | (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_mosi));
                }
            }
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSimTop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSimTop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSimTop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSimTop___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__5___Vtask_flash_read__1__data;
            __Vinline_0__nba_sequent__TOP__5___Vtask_flash_read__1__data = 0;
            if (((1U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state)) 
                 & (0x17U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter)))) {
                if (VL_LIKELY(((3U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__cmd))))) {
                    VSimTop___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                              ((0x00fffffeU 
                                                                                & (vlSelfRef.SimTop__DOT__flash__DOT__addr 
                                                                                << 1U)) 
                                                                               | (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_mosi)), __Vinline_0__nba_sequent__TOP__5___Vtask_flash_read__1__data);
                    vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                        = __Vinline_0__nba_sequent__TOP__5___Vtask_flash_read__1__data;
                } else {
                    VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",1
                                  , '#',8,vlSelfRef.SimTop__DOT__flash__DOT__cmd);
                    VL_WRITEF_NX("[%0t] %%Fatal: flash.v:98: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"SimTop.flash.flash_cmd_i", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(100));
                    VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 98, "", false);
                }
            }
        }
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            vlSelfRef.SimTop__DOT__flash__DOT__data 
                = vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__data;
            vlSelfRef.SimTop__DOT__flash__DOT__addr 
                = vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__addr;
            vlSelfRef.SimTop__DOT__flash__DOT__cmd 
                = vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__cmd;
            vlSelfRef.SimTop__DOT__flash__DOT__counter 
                = vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__counter;
            vlSelfRef.SimTop__DOT__flash__DOT__state 
                = vlSelfRef.__Vdly__SimTop__DOT__flash__DOT__state;
        }
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSimTop___024root___nba_sequent__TOP__7(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active) 
                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                   & (0x40U == (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg 
                                >> 0x00000018U)));
            vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad 
                = (1U & ((~ ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                             | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                & (0U == (0x01800000U 
                                          & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                         | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)));
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready) 
                   & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)));
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re 
                = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay)) 
                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real));
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                   & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel)) 
                      | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready)));
        }
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x0000000000000035ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_0 
                = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                         | ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))));
            vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_1 
                = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                          >> 1U) | ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                       >> 1U))));
            vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_2 
                = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                          >> 2U) | ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                       >> 2U))));
            vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_3 
                = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                          >> 3U) | ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)) 
                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                       >> 3U))));
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i 
                = ((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_3) 
                     << 3U) | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_2) 
                               << 2U)) | (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_1) 
                                           << 1U) | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_0)));
        }
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSimTop___024root___nba_sequent__TOP__8(vlSelf);
        vlSelfRef.__Vm_traceActivity[10U] = 1U;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__9
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                   && (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG));
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG 
                = vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1;
        }
        vlSelfRef.__Vm_traceActivity[11U] = 1U;
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSimTop___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[12U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSimTop___024root___nba_comb__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[13U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__10
            vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1 
                = ((1U & (~ (IData)(vlSelfRef.reset))) 
                   && (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG));
            vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG 
                = (1U & (~ (IData)(vlSelfRef.reset)));
        }
        vlSelfRef.__Vm_traceActivity[14U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__4
            CData/*0:0*/ __Vinline_0__nba_comb__TOP__4___VdfgRegularize_h6e95ff9d_0_26;
            __Vinline_0__nba_comb__TOP__4___VdfgRegularize_h6e95ff9d_0_26 = 0;
            __Vinline_0__nba_comb__TOP__4___VdfgRegularize_h6e95ff9d_0_26 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                   & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_penable)) 
                      & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel)));
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i 
                = ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write) 
                   & __Vinline_0__nba_comb__TOP__4___VdfgRegularize_h6e95ff9d_0_26);
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_re_i 
                = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)) 
                   & __Vinline_0__nba_comb__TOP__4___VdfgRegularize_h6e95ff9d_0_26);
        }
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
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
            vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
                = ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        }
        vlSelfRef.__Vm_traceActivity[15U] = 1U;
    }
}

void VSimTop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void VSimTop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.cpuClock & 0xfeU)))) {
        Verilated::overWidthError("cpuClock");
    }
    if (VL_UNLIKELY(((vlSelfRef.coreSel & 0xfeU)))) {
        Verilated::overWidthError("coreSel");
    }
    if (VL_UNLIKELY(((vlSelfRef.externalPins_uart0_rx 
                      & 0xfeU)))) {
        Verilated::overWidthError("externalPins_uart0_rx");
    }
}
#endif  // VL_DEBUG
