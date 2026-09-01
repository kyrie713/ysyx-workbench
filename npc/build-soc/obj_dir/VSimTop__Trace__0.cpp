// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__trace_chg_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSimTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_top_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSimTop___024root__trace_chg_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+2,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT),32);
        bufp->chgIData(oldp+3,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wdata),32);
        bufp->chgCData(oldp+4,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask),4);
        bufp->chgIData(oldp+5,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_araddr),32);
        bufp->chgIData(oldp+6,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data),32);
        bufp->chgIData(oldp+7,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__load_data),32);
        bufp->chgIData(oldp+8,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__RegWriteData),32);
        bufp->chgIData(oldp+9,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A),32);
        bufp->chgIData(oldp+10,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B),32);
        bufp->chgIData(oldp+11,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr)
                                  ? (0xfffffffeU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                  : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)
                                      ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
                                      : ((IData)(4U) 
                                         + vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+12,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_mosi_o));
        bufp->chgBit(oldp+13,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)))));
        bufp->chgBit(oldp+14,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_miso_o));
        bufp->chgBit(oldp+15,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio2_o));
        bufp->chgBit(oldp+16,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio3_o));
        bufp->chgCData(oldp+17,((0xfU & (- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen))))))),4);
        bufp->chgCData(oldp+18,((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio3_o) 
                                  << 3U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_sio2_o) 
                                             << 2U) 
                                            | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_miso_o) 
                                                << 1U) 
                                               | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT____Vcellout__u_psram_core__psram_mosi_o))))),4);
        bufp->chgBit(oldp+19,((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                        >> 1U)))));
        bufp->chgBit(oldp+20,((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+21,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U))));
        bufp->chgBit(oldp+23,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+24,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+25,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+26,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+27,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+28,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgCData(oldp+29,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+30,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+31,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+32,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgCData(oldp+33,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+34,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 4U))));
        bufp->chgBit(oldp+36,((IData)((0x10U != (0x12U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+37,((IData)((0x11U == (0x11U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+38,((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+39,((IData)((0x18U == (0x18U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+40,((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
                                                           | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
        bufp->chgBit(oldp+41,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->__VdfgTmp_h0138f4a2__0) 
                                     >> 1U))));
        bufp->chgBit(oldp+43,((1U & (IData)(vlSelf->__VdfgTmp_h0138f4a2__0))));
        bufp->chgBit(oldp+44,((1U & ((IData)(vlSelf->__VdfgTmp_h0138f4a2__0) 
                                     >> 2U))));
        bufp->chgBit(oldp+45,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+46,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+47,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+48,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+49,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+50,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+51,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+52,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+53,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+54,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+55,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+56,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+57,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+58,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+59,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+60,((0U != (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                      [0U] | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [1U] 
                                              | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
        bufp->chgCData(oldp+61,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgSData(oldp+62,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+63,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+64,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+65,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+66,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+67,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+68,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+69,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+70,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+71,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+72,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+73,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+74,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+75,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+76,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+77,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+78,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+79,(((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+80,(((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+81,(((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+82,(((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+83,(((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+84,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+85,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+86,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+87,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+88,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+89,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgBit(oldp+90,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+91,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgCData(oldp+92,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+93,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+94,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+95,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+96,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+97,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+98,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+99,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+100,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+101,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+102,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+103,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+104,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+105,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+106,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+107,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+108,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+109,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+110,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+111,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+112,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+113,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+114,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+115,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+116,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+117,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+118,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+119,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xaU]),3);
        bufp->chgCData(oldp+120,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xbU]),3);
        bufp->chgCData(oldp+121,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xcU]),3);
        bufp->chgCData(oldp+122,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xdU]),3);
        bufp->chgCData(oldp+123,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xeU]),3);
        bufp->chgCData(oldp+124,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xfU]),3);
        bufp->chgBit(oldp+125,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+126,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait),5);
        bufp->chgCData(oldp+127,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd),3);
        bufp->chgBit(oldp+128,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init));
        bufp->chgBit(oldp+129,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready));
        bufp->chgIData(oldp+130,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data),32);
        bufp->chgBit(oldp+131,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st));
        bufp->chgBit(oldp+132,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st));
        bufp->chgCData(oldp+133,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt),8);
        bufp->chgCData(oldp+134,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state),6);
        bufp->chgIData(oldp+135,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr),24);
        bufp->chgIData(oldp+136,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata),32);
        bufp->chgBit(oldp+137,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce));
        bufp->chgBit(oldp+138,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen));
        bufp->chgBit(oldp+139,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
        bufp->chgBit(oldp+140,((7U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))));
        bufp->chgBit(oldp+141,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay));
        bufp->chgCData(oldp+142,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state),5);
        bufp->chgCData(oldp+143,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt),5);
        bufp->chgIData(oldp+144,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt),18);
        bufp->chgIData(oldp+145,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca),32);
        bufp->chgCData(oldp+146,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt),8);
        bufp->chgCData(oldp+147,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt),8);
        bufp->chgCData(oldp+148,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data),8);
        bufp->chgCData(oldp+149,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt),5);
        bufp->chgCData(oldp+150,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt),4);
        bufp->chgCData(oldp+151,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd),3);
        bufp->chgBit(oldp+152,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst));
        bufp->chgBit(oldp+153,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st));
        bufp->chgBit(oldp+154,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st));
        bufp->chgBit(oldp+155,(((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
                                | ((0xcU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
                                   | (0x14U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))))));
        bufp->chgCData(oldp+156,((0xffU & (((- (IData)(
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
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+157,((1U & ((~ ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                          | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                             & (0x800000U 
                                                == 
                                                (0x1800000U 
                                                 & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                      | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)))));
        bufp->chgBit(oldp+158,((1U & ((~ ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                          | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                             & (0x1000000U 
                                                == 
                                                (0x1800000U 
                                                 & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                      | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)))));
        bufp->chgSData(oldp+159,(((vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                   [vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                   << 3U) | (IData)(vlSelf->__VdfgTmp_h0138f4a2__0))),11);
        bufp->chgCData(oldp+160,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
        bufp->chgIData(oldp+161,(((8U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                   ? ((vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                       << 0x18U) | 
                                      ((0xff0000U & 
                                        (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                         << 8U)) | 
                                       ((0xff00U & 
                                         (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                          >> 8U)) | 
                                        (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                         >> 0x18U))))
                                   : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+162,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write));
        bufp->chgIData(oldp+163,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg),32);
        bufp->chgCData(oldp+164,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_pstrb),4);
        bufp->chgCData(oldp+165,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+166,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+167,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+168,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+169,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+170,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+171,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+172,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+173,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+174,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+175,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+176,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+177,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+178,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+179,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+180,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+181,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+182,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+183,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+184,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+185,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+186,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+187,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+188,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+189,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+190,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+191,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+192,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+193,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+194,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+195,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+196,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+197,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgIData(oldp+198,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg),32);
        bufp->chgIData(oldp+199,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg),32);
        bufp->chgCData(oldp+200,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg),4);
        bufp->chgBit(oldp+201,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active));
        bufp->chgBit(oldp+202,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel));
        bufp->chgCData(oldp+203,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst),2);
        bufp->chgCData(oldp+204,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt),8);
        bufp->chgIData(oldp+205,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata),32);
        bufp->chgBit(oldp+206,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+207,((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))));
        bufp->chgBit(oldp+208,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_write));
        bufp->chgBit(oldp+209,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0));
        bufp->chgIData(oldp+210,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr),32);
        bufp->chgCData(oldp+211,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size),3);
        bufp->chgBit(oldp+212,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0));
        bufp->chgIData(oldp+213,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data),32);
        bufp->chgCData(oldp+214,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb),4);
        bufp->chgBit(oldp+215,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_bready));
        bufp->chgBit(oldp+216,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__accept_read));
        bufp->chgBit(oldp+217,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0));
        bufp->chgIData(oldp+218,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr),32);
        bufp->chgCData(oldp+219,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size),3);
        bufp->chgBit(oldp+220,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_rready));
        bufp->chgCData(oldp+221,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state),2);
        bufp->chgIData(oldp+222,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__araddr_reg),32);
        bufp->chgIData(oldp+223,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__awaddr_reg),32);
        bufp->chgCData(oldp+224,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg),4);
        bufp->chgIData(oldp+225,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+226,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)))));
        bufp->chgBit(oldp+227,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)))));
        bufp->chgBit(oldp+228,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0));
        bufp->chgBit(oldp+229,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)))));
        bufp->chgIData(oldp+230,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data),32);
        bufp->chgIData(oldp+231,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata),32);
        bufp->chgBit(oldp+232,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0));
        bufp->chgBit(oldp+233,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG));
        bufp->chgBit(oldp+234,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)))));
        bufp->chgBit(oldp+235,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1));
        bufp->chgBit(oldp+236,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)))));
        bufp->chgBit(oldp+237,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1));
        bufp->chgIData(oldp+238,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+239,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1));
        bufp->chgIData(oldp+240,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_addr),32);
        bufp->chgCData(oldp+241,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_size),3);
        bufp->chgBit(oldp+242,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1));
        bufp->chgIData(oldp+243,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_addr),32);
        bufp->chgCData(oldp+244,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_size),3);
        bufp->chgBit(oldp+245,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1));
        bufp->chgIData(oldp+246,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_data),32);
        bufp->chgCData(oldp+247,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_strb),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+248,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0) 
                                & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+249,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0) 
                                & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+250,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3) 
                                & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+251,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3) 
                                & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+252,((IData)(((0U == (0x30000000U 
                                                & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)) 
                                        & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel)))));
        bufp->chgBit(oldp+253,((IData)(((0U == (0x30000000U 
                                                & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)) 
                                        & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+254,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state),3);
        bufp->chgCData(oldp+255,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte),8);
        bufp->chgIData(oldp+256,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address),24);
        bufp->chgCData(oldp+257,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter),6);
        bufp->chgCData(oldp+258,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter),3);
        bufp->chgCData(oldp+259,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter),6);
        bufp->chgBit(oldp+260,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable));
        bufp->chgCData(oldp+261,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in),4);
        bufp->chgCData(oldp+262,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out),4);
        bufp->chgBit(oldp+263,(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+264,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0) 
                                | ((5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                                   | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))));
        bufp->chgCData(oldp+265,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_size),3);
        bufp->chgBit(oldp+266,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT____VdfgTmp_h1913f1ad__0) 
                                | ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                                   | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))));
        bufp->chgBit(oldp+267,((6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))));
        bufp->chgBit(oldp+268,((((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_ifu_reqValid)) 
                                | ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead)))));
        bufp->chgCData(oldp+269,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_arsize),3);
        bufp->chgBit(oldp+270,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_rready));
        bufp->chgIData(oldp+271,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr),32);
        bufp->chgCData(oldp+272,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize),3);
        bufp->chgBit(oldp+273,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_valid));
        bufp->chgCData(oldp+274,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count),2);
        bufp->chgIData(oldp+275,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata),32);
        bufp->chgCData(oldp+276,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb),4);
        bufp->chgBit(oldp+277,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_valid));
        bufp->chgCData(oldp+278,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count),2);
        bufp->chgCData(oldp+279,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count),2);
        bufp->chgIData(oldp+280,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr),32);
        bufp->chgCData(oldp+281,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize),3);
        bufp->chgBit(oldp+282,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_valid));
        bufp->chgCData(oldp+283,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count),2);
        bufp->chgCData(oldp+284,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count),2);
        bufp->chgBit(oldp+285,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG));
        bufp->chgIData(oldp+286,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC),32);
        bufp->chgBit(oldp+287,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_ifu_reqValid));
        bufp->chgBit(oldp+288,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_reqValid));
        bufp->chgCData(oldp+289,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_size),2);
        bufp->chgBit(oldp+290,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wen));
        bufp->chgBit(oldp+291,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad));
        bufp->chgBit(oldp+292,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidStore));
        bufp->chgCData(oldp+293,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI),2);
        bufp->chgCData(oldp+294,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD),3);
        bufp->chgBit(oldp+295,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead));
        bufp->chgIData(oldp+296,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r),32);
        bufp->chgIData(oldp+297,(((IData)(4U) + vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)),32);
        bufp->chgBit(oldp+298,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__commit_valid) 
                                & ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE) 
                                     | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE)) 
                                    | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE)) 
                                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)))));
        bufp->chgBit(oldp+299,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr));
        bufp->chgCData(oldp+300,((0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+301,((0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+302,((0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                           >> 7U))),5);
        bufp->chgIData(oldp+303,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__imm),32);
        bufp->chgBit(oldp+304,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_TYPE));
        bufp->chgBit(oldp+305,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH));
        bufp->chgBit(oldp+306,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD));
        bufp->chgBit(oldp+307,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE));
        bufp->chgBit(oldp+308,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE));
        bufp->chgBit(oldp+309,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE));
        bufp->chgBit(oldp+310,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__MemWEn));
        bufp->chgBit(oldp+311,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE));
        bufp->chgBit(oldp+312,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE));
        bufp->chgBit(oldp+313,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui));
        bufp->chgBit(oldp+314,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R_add));
        bufp->chgBit(oldp+315,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lw));
        bufp->chgBit(oldp+316,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__l_lbu));
        bufp->chgBit(oldp+317,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_add));
        bufp->chgBit(oldp+318,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sw));
        bufp->chgBit(oldp+319,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_sb));
        bufp->chgBit(oldp+320,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_ebreak));
        bufp->chgIData(oldp+321,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg),32);
        bufp->chgBit(oldp+322,((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))));
        bufp->chgBit(oldp+323,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu_done));
        bufp->chgBit(oldp+324,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__commit_valid));
        bufp->chgIData(oldp+325,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst),32);
        bufp->chgCData(oldp+326,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__opcode),7);
        bufp->chgCData(oldp+327,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct3),3);
        bufp->chgCData(oldp+328,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct7),7);
        bufp->chgIData(oldp+329,((((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                   << 0xcU) | ((2U 
                                                == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                                ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                   >> 0x14U)
                                                : 0U))),32);
        bufp->chgIData(oldp+330,((((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                   << 0xcU) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__funct7) 
                                                << 5U) 
                                               | ((2U 
                                                   == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                                      >> 7U))
                                                   : 0U)))),32);
        bufp->chgIData(oldp+331,((((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
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
        bufp->chgIData(oldp+332,((((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                    ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg 
                                       >> 0xcU) : 0U) 
                                  << 0xcU)),32);
        bufp->chgIData(oldp+333,((((- (IData)((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                   << 0x14U) | ((((2U 
                                                   == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))
                                                   ? 
                                                  (0xffU 
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
        bufp->chgCData(oldp+334,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state),2);
        bufp->chgSData(oldp+335,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__lfsr),16);
        bufp->chgIData(oldp+336,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count),32);
        bufp->chgCData(oldp+337,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state),2);
        bufp->chgIData(oldp+338,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg),32);
        bufp->chgSData(oldp+339,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lfsr),16);
        bufp->chgIData(oldp+340,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count),32);
        bufp->chgBit(oldp+341,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load));
        bufp->chgBit(oldp+342,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store));
        bufp->chgBit(oldp+343,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load) 
                                | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+344,(vlSelf->SimTop__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+345,(vlSelf->SimTop__DOT__flash__DOT__counter),8);
        bufp->chgCData(oldp+346,(vlSelf->SimTop__DOT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+347,(vlSelf->SimTop__DOT__flash__DOT__addr),24);
        bufp->chgIData(oldp+348,(vlSelf->SimTop__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+349,(((1U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state)) 
                                & (0x17U == (IData)(vlSelf->SimTop__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+350,(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck));
        bufp->chgBit(oldp+351,(vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss));
        bufp->chgBit(oldp+352,(vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi));
        bufp->chgBit(oldp+353,(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o));
        bufp->chgBit(oldp+354,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgCData(oldp+355,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgSData(oldp+356,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgSData(oldp+357,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgBit(oldp+358,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+359,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+360,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+361,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+362,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+363,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+364,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
        bufp->chgCData(oldp+365,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+366,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+367,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgCData(oldp+368,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+369,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+370,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+371,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+372,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+373,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+374,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+375,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+376,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+377,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+378,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgSData(oldp+379,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+380,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+381,((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+382,((7U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+383,((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+384,((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+385,((0xfU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                          - (IData)(1U)))),4);
        bufp->chgSData(oldp+386,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+387,((0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                           >> 2U))),8);
        bufp->chgCData(oldp+388,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+389,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+390,((0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                           >> 3U))),8);
        bufp->chgCData(oldp+391,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+392,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+393,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+394,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+395,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+396,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+397,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgCData(oldp+398,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+399,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+400,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgCData(oldp+401,(vlSelf->SimTop__DOT__asic__DOT___soc_psram_nss_o),3);
        bufp->chgBit(oldp+402,(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad));
        bufp->chgCData(oldp+403,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
        bufp->chgIData(oldp+404,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___DefDevice_3_auto_apply_in_prdata),32);
        bufp->chgBit(oldp+405,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready));
        bufp->chgBit(oldp+406,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel));
        bufp->chgBit(oldp+407,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re));
        bufp->chgBit(oldp+408,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real));
        bufp->chgCData(oldp+409,(vlSelf->SimTop__DOT__asic__DOT___soc_psram_nss_o),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+410,(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_p2c));
        bufp->chgBit(oldp+411,(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_1_p2c));
        bufp->chgBit(oldp+412,(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_2_p2c));
        bufp->chgBit(oldp+413,(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_3_p2c));
        bufp->chgCData(oldp+414,(vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+415,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel));
        bufp->chgBit(oldp+416,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_penable));
        bufp->chgIData(oldp+417,((0x1fffffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)),29);
        bufp->chgBit(oldp+418,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_penable) 
                                & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel))));
        bufp->chgIData(oldp+419,((0x1fffffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgCData(oldp+420,((7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)),3);
        bufp->chgCData(oldp+421,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+422,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
        bufp->chgIData(oldp+423,((0x3fffffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)),30);
        bufp->chgIData(oldp+424,((0x3fffffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgIData(oldp+425,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr),32);
        bufp->chgBit(oldp+426,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup));
        bufp->chgBit(oldp+427,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+428,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+429,((0U == (3U & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr 
                                             >> 0x1cU)))));
        bufp->chgBit(oldp+430,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3));
        bufp->chgCData(oldp+431,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count),2);
        bufp->chgCData(oldp+432,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count),2);
        bufp->chgCData(oldp+433,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count),2);
        bufp->chgCData(oldp+434,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count),2);
        bufp->chgCData(oldp+435,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+436,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1));
        bufp->chgBit(oldp+437,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG));
        bufp->chgBit(oldp+438,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+439,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_awready));
        bufp->chgBit(oldp+440,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready));
        bufp->chgBit(oldp+441,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_bvalid));
        bufp->chgBit(oldp+442,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_arready));
        bufp->chgBit(oldp+443,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid));
        bufp->chgIData(oldp+444,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata),32);
        bufp->chgBit(oldp+445,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal));
        bufp->chgBit(oldp+446,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q_io_deq_ready));
        bufp->chgBit(oldp+447,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal));
        bufp->chgBit(oldp+448,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready));
        bufp->chgBit(oldp+449,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal));
        bufp->chgBit(oldp+450,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__deq_valid));
        bufp->chgCData(oldp+451,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size),3);
        bufp->chgBit(oldp+452,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal));
        bufp->chgBit(oldp+453,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__deq_valid));
        bufp->chgCData(oldp+454,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size),3);
        bufp->chgBit(oldp+455,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal));
        bufp->chgBit(oldp+456,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__deq_valid));
        bufp->chgBit(oldp+457,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready));
        bufp->chgBit(oldp+458,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready));
        bufp->chgBit(oldp+459,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready));
        bufp->chgBit(oldp+460,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__instReturn));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgCData(oldp+461,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r),8);
        bufp->chgBit(oldp+462,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_pready));
        bufp->chgIData(oldp+463,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_prdata),32);
        bufp->chgBit(oldp+464,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+465,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid));
        bufp->chgIData(oldp+466,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_in_rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgBit(oldp+467,(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG));
        bufp->chgBit(oldp+468,(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1));
        bufp->chgBit(oldp+469,((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgBit(oldp+470,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask));
        bufp->chgBit(oldp+471,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+472,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+473,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+474,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+475,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    bufp->chgBit(oldp+476,(vlSelf->clock));
    bufp->chgBit(oldp+477,(vlSelf->reset));
    bufp->chgBit(oldp+478,(vlSelf->cpuClock));
    bufp->chgBit(oldp+479,(vlSelf->coreSel));
    bufp->chgSData(oldp+480,(vlSelf->externalPins_mygpio_out),16);
    bufp->chgSData(oldp+481,(vlSelf->externalPins_mygpio_in),16);
    bufp->chgCData(oldp+482,(vlSelf->externalPins_mygpio_seg_0),8);
    bufp->chgCData(oldp+483,(vlSelf->externalPins_mygpio_seg_1),8);
    bufp->chgCData(oldp+484,(vlSelf->externalPins_mygpio_seg_2),8);
    bufp->chgCData(oldp+485,(vlSelf->externalPins_mygpio_seg_3),8);
    bufp->chgCData(oldp+486,(vlSelf->externalPins_mygpio_seg_4),8);
    bufp->chgCData(oldp+487,(vlSelf->externalPins_mygpio_seg_5),8);
    bufp->chgCData(oldp+488,(vlSelf->externalPins_mygpio_seg_6),8);
    bufp->chgCData(oldp+489,(vlSelf->externalPins_mygpio_seg_7),8);
    bufp->chgBit(oldp+490,(vlSelf->externalPins_uart0_rx));
    bufp->chgBit(oldp+491,(vlSelf->externalPins_uart0_tx));
    bufp->chgBit(oldp+492,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->chgBit(oldp+493,((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss) 
                                  | ((((2U == (IData)(vlSelf->SimTop__DOT__flash__DOT__state)) 
                                       & (0U == (IData)(vlSelf->SimTop__DOT__flash__DOT__counter)))
                                       ? vlSelf->SimTop__DOT__flash__DOT__data_bswap
                                       : vlSelf->SimTop__DOT__flash__DOT__data) 
                                     >> 0x1fU)))));
    bufp->chgBit(oldp+494,((1U & (IData)(vlSelf->externalPins_mygpio_in))));
    bufp->chgBit(oldp+495,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 1U))));
    bufp->chgBit(oldp+496,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 0xaU))));
    bufp->chgBit(oldp+497,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 0xbU))));
    bufp->chgBit(oldp+498,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 0xcU))));
    bufp->chgBit(oldp+499,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 0xdU))));
    bufp->chgBit(oldp+500,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 0xeU))));
    bufp->chgBit(oldp+501,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 0xfU))));
    bufp->chgBit(oldp+502,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 2U))));
    bufp->chgBit(oldp+503,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 3U))));
    bufp->chgBit(oldp+504,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 4U))));
    bufp->chgBit(oldp+505,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 5U))));
    bufp->chgBit(oldp+506,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 6U))));
    bufp->chgBit(oldp+507,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 7U))));
    bufp->chgBit(oldp+508,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 8U))));
    bufp->chgBit(oldp+509,((1U & ((IData)(vlSelf->externalPins_mygpio_in) 
                                  >> 9U))));
    bufp->chgIData(oldp+510,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel)
                               ? (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r) 
                                   << 0x18U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_r))))
                               : 0U)),32);
    bufp->chgBit(oldp+511,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we));
    bufp->chgBit(oldp+512,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_re));
    bufp->chgBit(oldp+513,((((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)) 
                             | (8U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) 
                            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2))));
    bufp->chgBit(oldp+514,((1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active)) 
                                  | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready)))));
    bufp->chgCData(oldp+515,(((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                               ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0) 
                                  | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0) 
                                     & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0)))
                               : ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                                   ? 2U : ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                                            ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_pready)
                                                ? (
                                                   (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___cdc_auto_sink_out_rready) 
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
    bufp->chgBit(oldp+516,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG) 
                            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid))));
    bufp->chgBit(oldp+517,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_in_REG) 
                            & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid))));
    bufp->chgIData(oldp+518,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr),32);
    bufp->chgIData(oldp+519,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr),32);
    bufp->chgIData(oldp+520,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data),32);
    bufp->chgCData(oldp+521,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb),4);
    bufp->chgIData(oldp+522,(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__instReturn)
                               ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata
                               : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r)),32);
    bufp->chgBit(oldp+523,((((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid)) 
                            | ((6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_bvalid)))));
    bufp->chgIData(oldp+524,(((0U == (0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                               >> 0xfU)))
                               ? 0U : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
                              [(0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                                         >> 0xfU))])),32);
    bufp->chgIData(oldp+525,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0]),32);
    bufp->chgIData(oldp+526,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[1]),32);
    bufp->chgIData(oldp+527,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[2]),32);
    bufp->chgIData(oldp+528,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[3]),32);
    bufp->chgIData(oldp+529,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[4]),32);
    bufp->chgIData(oldp+530,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[5]),32);
    bufp->chgIData(oldp+531,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[6]),32);
    bufp->chgIData(oldp+532,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[7]),32);
    bufp->chgIData(oldp+533,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[8]),32);
    bufp->chgIData(oldp+534,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[9]),32);
    bufp->chgIData(oldp+535,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[10]),32);
    bufp->chgIData(oldp+536,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[11]),32);
    bufp->chgIData(oldp+537,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[12]),32);
    bufp->chgIData(oldp+538,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[13]),32);
    bufp->chgIData(oldp+539,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[14]),32);
    bufp->chgIData(oldp+540,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[15]),32);
    bufp->chgIData(oldp+541,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[16]),32);
    bufp->chgIData(oldp+542,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[17]),32);
    bufp->chgIData(oldp+543,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[18]),32);
    bufp->chgIData(oldp+544,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[19]),32);
    bufp->chgIData(oldp+545,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[20]),32);
    bufp->chgIData(oldp+546,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[21]),32);
    bufp->chgIData(oldp+547,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[22]),32);
    bufp->chgIData(oldp+548,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[23]),32);
    bufp->chgIData(oldp+549,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[24]),32);
    bufp->chgIData(oldp+550,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[25]),32);
    bufp->chgIData(oldp+551,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[26]),32);
    bufp->chgIData(oldp+552,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[27]),32);
    bufp->chgIData(oldp+553,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[28]),32);
    bufp->chgIData(oldp+554,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[29]),32);
    bufp->chgIData(oldp+555,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[30]),32);
    bufp->chgIData(oldp+556,(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[31]),32);
    bufp->chgIData(oldp+557,(vlSelf->SimTop__DOT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+558,(((0xfffffeU & (vlSelf->SimTop__DOT__flash__DOT__addr 
                                            << 1U)) 
                              | (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi))),32);
    bufp->chgIData(oldp+559,(vlSelf->SimTop__DOT__flash__DOT__data_bswap),32);
}

void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_cleanup\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
}
