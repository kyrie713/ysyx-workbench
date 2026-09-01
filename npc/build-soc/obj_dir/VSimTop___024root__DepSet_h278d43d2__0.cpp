// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__ico(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG

void VSimTop___024root___eval_triggers__ico(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG

void VSimTop___024root___eval_triggers__act(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__VactTriggered.at(1U) = (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                                      | ((IData)(vlSelf->cpuClock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__cpuClock))));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->cpuClock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__cpuClock)));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(4U) = (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                                      | ((IData)(vlSelf->clock) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock))));
    vlSelf->__VactTriggered.at(5U) = (((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___soc_spi_sck))) 
                                      | ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___soc_spi_ss))));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___soc_spi_sck)));
    vlSelf->__VactTriggered.at(7U) = (((IData)(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad) 
                                       ^ (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                                      | ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o) 
                                         ^ (IData)(vlSelf->__Vtrigrprev__TOP__SimTop__DOT__asic__DOT___soc_psram_sck_o)));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__counter 
        = vlSelf->SimTop__DOT__flash__DOT__counter;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__cmd = vlSelf->SimTop__DOT__flash__DOT__cmd;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__state 
        = vlSelf->SimTop__DOT__flash__DOT__state;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__data = vlSelf->SimTop__DOT__flash__DOT__data;
    vlSelf->__Vdly__SimTop__DOT__flash__DOT__addr = vlSelf->SimTop__DOT__flash__DOT__addr;
    if (vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss) {
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__counter = 0U;
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__counter 
            = (0xffU & ((7U > (IData)(vlSelf->SimTop__DOT__flash__DOT__counter))
                         ? ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__flash__DOT__counter))
                         : 0U));
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__cmd 
            = ((0xfeU & ((IData)(vlSelf->SimTop__DOT__flash__DOT__cmd) 
                         << 1U)) | (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi));
    } else {
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__counter 
            = (0xffU & ((1U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state))
                         ? ((0x17U > (IData)(vlSelf->SimTop__DOT__flash__DOT__counter))
                             ? ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__flash__DOT__counter))
                             : 0U) : ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__flash__DOT__counter))));
    }
    if (vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss) {
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__state 
            = ((7U == (IData)(vlSelf->SimTop__DOT__flash__DOT__counter))
                ? 1U : (IData)(vlSelf->SimTop__DOT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__state 
            = ((3U != (IData)(vlSelf->SimTop__DOT__flash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelf->SimTop__DOT__flash__DOT__counter))
                         ? 2U : (IData)(vlSelf->SimTop__DOT__flash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state)))) {
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__state 
            = vlSelf->SimTop__DOT__flash__DOT__state;
    } else {
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",
                   8,vlSelf->SimTop__DOT__flash__DOT__cmd);
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__state 
            = vlSelf->SimTop__DOT__flash__DOT__state;
        VL_WRITEF("[%0t] %%Error: flash.v:44: Assertion failed in %NSimTop.flash\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 44, "");
    }
    if (vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss) {
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__data = 0U;
        vlSelf->__Vdly__SimTop__DOT__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state))) {
            vlSelf->__Vdly__SimTop__DOT__flash__DOT__data 
                = (((0U == (IData)(vlSelf->SimTop__DOT__flash__DOT__counter))
                     ? vlSelf->SimTop__DOT__flash__DOT__data_bswap
                     : vlSelf->SimTop__DOT__flash__DOT__data) 
                   << 1U);
        }
        if (((1U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelf->SimTop__DOT__flash__DOT__counter)))) {
            vlSelf->__Vdly__SimTop__DOT__flash__DOT__addr 
                = ((0xfffffeU & (vlSelf->SimTop__DOT__flash__DOT__addr 
                                 << 1U)) | (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi));
        }
    }
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 = 0;
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal) 
                           | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
                                     >> 1U)) != (1U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count)))))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1933: Assertion failed in %NSimTop.asic.soc.cdc.sink.nodeIn_bsource: Assertion failed at RationalCrossing.scala:99\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1933, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1935: Assertion failed in %NSimTop.asic.soc.cdc.sink.nodeIn_bsource\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1935, "");
    }
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count;
    if (VL_UNLIKELY(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal) 
                           | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
                                     >> 1U)) != (1U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count)))))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1809: Assertion failed in %NSimTop.asic.soc.cdc.sink.nodeIn_rsource: Assertion failed at RationalCrossing.scala:99\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1809, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1811: Assertion failed in %NSimTop.asic.soc.cdc.sink.nodeIn_rsource\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1811, "");
    }
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0;
    if (VL_UNLIKELY(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal) 
                           | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
                                     >> 1U)) != (1U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count)))))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1538: Assertion failed in %NSimTop.asic.soc.cdc.sink.nodeOut_arsink: Assertion failed at RationalCrossing.scala:133\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1538, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1540: Assertion failed in %NSimTop.asic.soc.cdc.sink.nodeOut_arsink\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1540, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal) 
                           | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
                                     >> 1U)) != (1U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count)))))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1538: Assertion failed in %NSimTop.asic.soc.cdc.sink.nodeOut_awsink: Assertion failed at RationalCrossing.scala:133\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1538, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1540: Assertion failed in %NSimTop.asic.soc.cdc.sink.nodeOut_awsink\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1540, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) 
                           | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
                                     >> 1U)) != (1U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count)))))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1679: Assertion failed in %NSimTop.asic.soc.cdc.sink.nodeOut_wsink: Assertion failed at RationalCrossing.scala:133\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1679, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1681: Assertion failed in %NSimTop.asic.soc.cdc.sink.nodeOut_wsink\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1681, "");
    }
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count;
    if (VL_UNLIKELY((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                      & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0)) 
                     & (2U < (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:963: Assertion failed in %NSimTop.asic.soc.axi42apb: Assertion failed at AXI4ToAPB.scala:65\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 963, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:965: Assertion failed in %NSimTop.asic.soc.axi42apb\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 965, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
                      & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0)) 
                     & (2U < (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:969: Assertion failed in %NSimTop.asic.soc.axi42apb: Assertion failed at AXI4ToAPB.scala:66\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 969, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:971: Assertion failed in %NSimTop.asic.soc.axi42apb\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 971, "");
    }
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) {
        __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push) {
        __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w_reg 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG 
        = vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1;
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data;
    }
    if ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_prdata;
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__araddr_reg 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr;
    }
    if (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active)) 
         & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg 
            = (0x40000000U | (0x1fffffcU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg 
            = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
                ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_pstrb)
                : 0U);
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__awaddr_reg 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data;
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active 
            = (1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active)
                      ? (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready))
                      : (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup)));
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q_io_deq_ready) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4));
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4) 
                   & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1));
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0));
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1 
                = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT___valid_1_T_4) 
                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0)) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1));
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q_io_deq_ready) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count 
                = ((2U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
                                              >> 1U))));
        }
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1 = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0;
    if (__Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count 
                = ((2U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
                                              >> 1U))));
        }
        if (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__deq_valid))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count 
                = ((2U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
                                              >> 1U))));
        }
        if (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__deq_valid))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count 
                = ((2U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
                                              >> 1U))));
        }
        if (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__deq_valid))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count 
                = ((2U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
                                              >> 1U))));
        }
        if ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
            if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_3) {
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 0U;
                }
            } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_4) {
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 3U;
                }
            } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_5) {
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 4U;
                }
            } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_6) {
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 5U;
                }
            } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_7) {
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 6U;
                }
            } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_8) {
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 7U;
                }
            } else if ((7U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_irq_out) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 8U;
                }
            } else if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_9) 
                        & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 0U;
            }
        } else if ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0) 
                     & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel)) 
                    & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN 
                = (((0x2fffffffU < (0x3fffffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)) 
                    & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)))
                    ? 2U : 1U);
        }
        if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0))) {
            if (((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)) 
                 & (7U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 1U;
            }
        } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_10) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 2U;
        } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 0U;
        }
    } else {
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0 = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN;
    if (__Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_10 
        = (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable 
        = ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)) 
           | (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)));
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_bready 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG));
    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready)
          ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1) 
             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4))
          : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0))))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data 
            = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)
                ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_1_data
                : vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_in_rdata);
    }
    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready)
          ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1))
          : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0)))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_1_data 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_in_rdata;
    }
    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write)
          ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1) 
             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4))
          : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0))))) {
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_addr;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_size;
        } else {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size;
        }
    }
    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write)
          ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1))
          : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0)))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_addr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_size 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size;
    }
    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read)
          ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1) 
             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4))
          : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0))))) {
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_addr;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_size;
        } else {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size;
        }
    }
    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read)
          ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1))
          : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0)))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_addr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_size 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size;
    }
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel 
        = (IData)((0x10004000U == (0xf000ff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)));
    if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write;
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
                   & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1));
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 
                = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT___valid_1_T_4) 
                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0)) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1));
        }
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1));
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 
                = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0)) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 
                = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0)) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1));
        }
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1));
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 
                = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 
                = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4) 
                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0)) 
                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1));
        }
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__casez_tmp;
    } else {
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_rready 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG));
    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write)
          ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1) 
             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4))
          : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0))))) {
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_data;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_strb;
        } else {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb;
        }
    }
    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write)
          ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1))
          : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0)))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_data 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_strb 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_pstrb 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)
            ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg)
            : 0U);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read 
        = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel 
        = ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
           | (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read)) 
           & ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
              & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0) 
                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0))));
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__4(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*0:0*/ SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT____VdfgTmp_hcda50bf2__0;
    SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT____VdfgTmp_hcda50bf2__0 = 0;
    CData/*1:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 0;
    CData/*1:0*/ __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 0;
    CData/*4:0*/ __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal) 
                           | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count) 
                                     >> 1U)) == (1U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count)))))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1279: Assertion failed in %NSimTop.asic.soc.cdc.source.nodeIn_bsink: Assertion failed at RationalCrossing.scala:134\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1279, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1281: Assertion failed in %NSimTop.asic.soc.cdc.source.nodeIn_bsink\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1281, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal) 
                           | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count) 
                                     >> 1U)) == (1U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count)))))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1225: Assertion failed in %NSimTop.asic.soc.cdc.source.nodeIn_rsink: Assertion failed at RationalCrossing.scala:134\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1225, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1227: Assertion failed in %NSimTop.asic.soc.cdc.source.nodeIn_rsink\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1227, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal) 
                           | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count) 
                                     >> 1U)) == (1U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count)))))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1069: Assertion failed in %NSimTop.asic.soc.cdc.source.nodeOut_arsource: Assertion failed at RationalCrossing.scala:98\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1069, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1071: Assertion failed in %NSimTop.asic.soc.cdc.source.nodeOut_arsource\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1071, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal) 
                           | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count) 
                                     >> 1U)) == (1U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count)))))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1069: Assertion failed in %NSimTop.asic.soc.cdc.source.nodeOut_awsource: Assertion failed at RationalCrossing.scala:98\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1069, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1071: Assertion failed in %NSimTop.asic.soc.cdc.source.nodeOut_awsource\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1071, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) 
                     & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) 
                           | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count) 
                                     >> 1U)) == (1U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count)))))))) {
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1151: Assertion failed in %NSimTop.asic.soc.cdc.source.nodeOut_wsource: Assertion failed at RationalCrossing.scala:98\n\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1151, "");
        VL_WRITEF("[%0t] %%Error: ElaborateTop.v:1153: Assertion failed in %NSimTop.asic.soc.cdc.source.nodeOut_wsource\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 1153, "");
    }
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 = 0U;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state;
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1) {
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_rready) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count 
                = ((2U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count) 
                                              >> 1U))));
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_valid))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count 
                = ((2U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count) 
                                              >> 1U))));
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_valid))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count 
                = ((2U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count) 
                                              >> 1U))));
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_valid))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count 
                = ((2U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count) 
                                              >> 1U))));
        }
        if (((6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_bvalid))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count 
                = ((2U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count) 
                          << 1U)) | (1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count) 
                                              >> 1U))));
        }
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI 
            = (((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_arvalid_T) 
                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_ifu_reqValid)) 
                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_arvalid_T_2))
                 ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_arready)
                     ? 2U : 1U) : 0U) | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___instReturn_T)
                                          ? (2U & (
                                                   (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid)) 
                                                   << 1U))
                                          : 0U));
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__commit_valid) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__next_pc;
        }
        if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state))) {
            if ((0U != vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count)) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count 
                    = (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count 
                       - (IData)(1U));
            } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_reqValid) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state))) {
            if ((((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid)) 
                 | ((6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_bvalid)))) {
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata;
                }
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 0U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count = 0U;
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 0U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg = 0U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lfsr = 1U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count = 0U;
        }
        if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))) {
            if ((0U != vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count)) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count 
                    = (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count 
                       - (IData)(1U));
            } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_ifu_reqValid) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))) {
            if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__instReturn) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                    = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__instReturn)
                        ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata
                        : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r);
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))) {
            if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__commit_valid) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 0U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count = 0U;
            }
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 0U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg = 0U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__lfsr = 1U;
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count = 0U;
        }
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD 
            = ((((((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21)) 
                   | (3U & (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21) 
                             | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___lsuRead_T_2)
                                 ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_arready)
                                     ? 2U : 1U) : 0U)) 
                            | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_lsu_respValid_T)
                                ? (2U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid)) 
                                         << 1U)) : 0U)))) 
                  | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_wvalid_T_2)
                      ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_awready)
                          ? (4U | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready) 
                                   << 1U)) : 3U) : 0U)) 
                 | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_awvalid_T_3)
                     ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_awready)
                         ? 6U : 5U) : 0U)) | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_wvalid_T_3)
                                               ? (4U 
                                                  | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready) 
                                                     << 1U))
                                               : 0U)) 
               | ((1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_master_bready_0)) 
                         | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_bvalid)))
                   ? 0U : 6U));
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC = 0x30000000U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lfsr = 1U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__lfsr = 1U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD = 0U;
    }
    if ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__commit_valid) 
          & ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE) 
               | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE)) 
              | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE)) 
             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE))) 
         & (0U != (0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                            >> 7U))))) {
        __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__RegWriteData;
        __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                        >> 7U));
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_arsize;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_araddr;
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wdata;
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_size;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1;
    if (__Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[__Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_arvalid_T 
        = (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___io_master_arvalid_T_2 
        = (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___instReturn_T 
        = (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI));
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__instReturn) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_ifu_reqValid 
        = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state)) 
           & (0U == vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count));
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data 
        = ((0U == (0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                            >> 0x14U))) ? 0U : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
           [(0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                      >> 0x14U))]);
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_rready 
        = ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
           | (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)));
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu_done 
        = ((IData)(SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT____VdfgTmp_hcda50bf2__0) 
           & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_reqValid 
        = ((IData)(SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT____VdfgTmp_hcda50bf2__0) 
           & ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state)) 
              & (0U == vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count)));
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0 
        = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidStore));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead 
        = (((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad)) 
           | (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_valid 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0) 
              | ((5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                 | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_valid 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0) 
              | ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                 | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)))));
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
}

void VSimTop___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__5(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vtask_flash_read__0__data;
    __Vtask_flash_read__0__data = 0;
    // Body
    if (((1U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelf->SimTop__DOT__flash__DOT__counter)))) {
        if (VL_LIKELY((3U == (IData)(vlSelf->SimTop__DOT__flash__DOT__cmd)))) {
            VSimTop___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                      ((0xfffffeU 
                                                                        & (vlSelf->SimTop__DOT__flash__DOT__addr 
                                                                           << 1U)) 
                                                                       | (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi)), __Vtask_flash_read__0__data);
            vlSelf->SimTop__DOT__flash__DOT__rdata 
                = __Vtask_flash_read__0__data;
        } else {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",
                       8,vlSelf->SimTop__DOT__flash__DOT__cmd);
            VL_WRITEF("[%0t] %%Error: flash.v:98: Assertion failed in %NSimTop.flash.flash_cmd_i\n",
                      64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
            VL_STOP_MT("/home/huang/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 98, "");
        }
    }
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
}
