// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__trace_chg_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSimTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_0\n"); );
    // Body
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VSimTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSimTop___024root__trace_chg_dtype____0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 16>& __VdtypeVar);
void VSimTop___024root__trace_chg_dtype____1(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar);
extern const VlWide<16>/*511:0*/ VSimTop__ConstPool__CONST_haf0ddab7_0;

void VSimTop___024root__trace_chg_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_0_sub_0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgIData(oldp+2,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT),32);
        bufp->chgIData(oldp+3,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wdata),32);
        bufp->chgCData(oldp+4,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wmask),4);
        bufp->chgIData(oldp+5,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_araddr),32);
        bufp->chgIData(oldp+6,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_1),32);
        bufp->chgIData(oldp+7,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__rdata_2),32);
        bufp->chgIData(oldp+8,((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw)
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
                                & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_done))))),32);
        bufp->chgIData(oldp+9,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load)
                                 ? (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw)
                                      ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg
                                      : (0x000000ffU 
                                         & ((- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu))) 
                                            & ((2U 
                                                & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                                    ? 
                                                   (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                                    >> 0x00000018U)
                                                    : 
                                                   (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                                    >> 0x00000010U))
                                                : (
                                                   (1U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                                    ? 
                                                   (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg 
                                                    >> 8U)
                                                    : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg))))) 
                                    & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_done))))
                                 : (((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE) 
                                     | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr))
                                     ? ((IData)(4U) 
                                        + vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)
                                     : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)
                                         ? (((0x0b00U 
                                              == (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                  >> 0x00000014U))
                                              ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__csr__DOT__mcycle)
                                              : ((0x0b80U 
                                                  == 
                                                  (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                   >> 0x00000014U))
                                                  ? (IData)(
                                                            (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__csr__DOT__mcycle 
                                                             >> 0x00000020U))
                                                  : 
                                                 ((0x0f11U 
                                                   == 
                                                   (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                    >> 0x00000014U))
                                                   ? 0x79737978U
                                                   : 
                                                  (0x017eb18aU 
                                                   & (- (IData)(
                                                                (0x0f12U 
                                                                 == 
                                                                 (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                                  >> 0x00000014U)))))))) 
                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))))
                                         : (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT 
                                            & (- (IData)(
                                                         ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE) 
                                                          | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH) 
                                                             | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE)))))))))),32);
        bufp->chgIData(oldp+10,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__A),32);
        bufp->chgIData(oldp+11,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__B),32);
        bufp->chgIData(oldp+12,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr)
                                  ? (0xfffffffeU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
                                  : ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)
                                      ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
                                      : ((IData)(4U) 
                                         + vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+13,(((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                               & (((9U > (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                                    ? (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                       >> 0x0000001fU)
                                    : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                  & (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))))));
        bufp->chgBit(oldp+14,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen)))));
        bufp->chgBit(oldp+15,(((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                               & ((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                  & ((9U <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                        >> 1U))))));
        bufp->chgBit(oldp+16,(((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                               & ((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                  & ((9U <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                        >> 2U))))));
        bufp->chgBit(oldp+17,(((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                               & ((9U <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                      >> 3U) & (0U 
                                                != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)))))));
        bufp->chgCData(oldp+18,((0x0000000fU & (- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen))))))),4);
        bufp->chgCData(oldp+19,((((((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                    & ((9U <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                       & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                           >> 3U) & 
                                          (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))))) 
                                   << 3U) | (((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                              & ((7U 
                                                  != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                 & ((9U 
                                                     <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                       >> 2U)))) 
                                             << 2U)) 
                                 | ((((0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                      & ((7U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                         & ((9U <= (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                               >> 1U)))) 
                                     << 1U) | ((7U 
                                                != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                                               & (((9U 
                                                    > (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))
                                                    ? 
                                                   (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                                                    >> 0x0000001fU)
                                                    : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))))))),4);
        bufp->chgBit(oldp+20,((1U & (~ ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                        >> 1U)))));
        bufp->chgBit(oldp+21,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+22,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U))));
        bufp->chgBit(oldp+24,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+25,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+26,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+27,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+28,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+29,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgCData(oldp+30,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+31,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+32,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+33,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgCData(oldp+34,((0x0000000fU & (0xe841U 
                                                >> 
                                                ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr) 
                                                 << 2U)))),4);
        bufp->chgBit(oldp+35,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 4U))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                     >> 3U))));
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                     >> 2U))));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                     >> 1U))));
        bufp->chgBit(oldp+40,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))));
        bufp->chgCData(oldp+41,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr),8);
        bufp->chgBit(oldp+42,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+43,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2));
        bufp->chgBit(oldp+44,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3));
        bufp->chgBit(oldp+45,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4));
        bufp->chgBit(oldp+46,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+47,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+48,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+49,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+50,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+51,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+52,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+53,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+54,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+55,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+56,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+57,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+58,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+59,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+60,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+61,((0U != (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] 
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
        bufp->chgCData(oldp+62,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgSData(oldp+63,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+64,((1U & (~ (0U != (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt))))));
        bufp->chgCData(oldp+65,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+66,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+67,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+68,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+69,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+70,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+71,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+72,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+73,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+74,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+75,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+76,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+77,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+78,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+79,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+80,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+81,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+82,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+83,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+84,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                               & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+85,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+86,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+87,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+88,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+89,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+90,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgBit(oldp+91,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgBit(oldp+92,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+93,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        VSimTop___024root__trace_chg_dtype____0(vlSelf, bufp, 94, vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo);
        bufp->chgCData(oldp+110,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+111,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U]),3);
        bufp->chgCData(oldp+112,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U]),3);
        bufp->chgCData(oldp+113,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U]),3);
        bufp->chgCData(oldp+114,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U]),3);
        bufp->chgCData(oldp+115,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U]),3);
        bufp->chgCData(oldp+116,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U]),3);
        bufp->chgCData(oldp+117,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U]),3);
        bufp->chgCData(oldp+118,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U]),3);
        bufp->chgCData(oldp+119,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U]),3);
        bufp->chgCData(oldp+120,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U]),3);
        bufp->chgCData(oldp+121,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10U]),3);
        bufp->chgCData(oldp+122,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11U]),3);
        bufp->chgCData(oldp+123,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12U]),3);
        bufp->chgCData(oldp+124,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13U]),3);
        bufp->chgCData(oldp+125,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14U]),3);
        bufp->chgCData(oldp+126,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U]),3);
        bufp->chgBit(oldp+127,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+128,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait),5);
        bufp->chgCData(oldp+129,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd),3);
        bufp->chgBit(oldp+130,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init));
        bufp->chgBit(oldp+131,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready));
        bufp->chgIData(oldp+132,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data),32);
        bufp->chgBit(oldp+133,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st));
        bufp->chgBit(oldp+134,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st));
        bufp->chgCData(oldp+135,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt),8);
        bufp->chgCData(oldp+136,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state),6);
        bufp->chgIData(oldp+137,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr),24);
        bufp->chgIData(oldp+138,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata),32);
        bufp->chgBit(oldp+139,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce));
        bufp->chgBit(oldp+140,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen));
        bufp->chgBit(oldp+141,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
        bufp->chgBit(oldp+142,((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))));
        bufp->chgBit(oldp+143,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay));
        bufp->chgCData(oldp+144,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state),5);
        bufp->chgCData(oldp+145,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt),5);
        bufp->chgIData(oldp+146,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt),18);
        bufp->chgIData(oldp+147,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca),32);
        bufp->chgCData(oldp+148,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt),8);
        bufp->chgCData(oldp+149,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt),8);
        bufp->chgCData(oldp+150,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data),8);
        bufp->chgCData(oldp+151,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt),5);
        bufp->chgCData(oldp+152,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt),4);
        bufp->chgCData(oldp+153,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd),3);
        bufp->chgBit(oldp+154,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst));
        bufp->chgBit(oldp+155,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st));
        bufp->chgBit(oldp+156,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st));
        bufp->chgBit(oldp+157,(((4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
                                | ((0x0cU == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
                                   | (0x14U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))))));
        bufp->chgCData(oldp+158,((0x000000ffU & (((- (IData)(
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
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+159,((1U & ((~ ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                          | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                             & (0x00800000U 
                                                == 
                                                (0x01800000U 
                                                 & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                      | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)))));
        bufp->chgBit(oldp+160,((1U & ((~ ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                                          | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                                             & (0x01000000U 
                                                == 
                                                (0x01800000U 
                                                 & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                                      | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)))));
        bufp->chgSData(oldp+161,((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                           [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]) 
                                   << 3U) | vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
        bufp->chgCData(oldp+162,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
        bufp->chgIData(oldp+163,(((8U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))
                                   ? ((((0x0000ff00U 
                                         & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                            << 8U)) 
                                        | (0x000000ffU 
                                           & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                              >> 8U))) 
                                       << 0x00000010U) 
                                      | ((0x0000ff00U 
                                          & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                             >> 8U)) 
                                         | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
                                            >> 0x00000018U)))
                                   : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+164,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg),16);
        bufp->chgCData(oldp+165,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0),8);
        bufp->chgCData(oldp+166,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1),8);
        bufp->chgCData(oldp+167,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2),8);
        bufp->chgCData(oldp+168,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3),8);
        bufp->chgCData(oldp+169,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4),8);
        bufp->chgCData(oldp+170,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5),8);
        bufp->chgCData(oldp+171,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6),8);
        bufp->chgCData(oldp+172,(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7),8);
        bufp->chgBit(oldp+173,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg))));
        bufp->chgBit(oldp+174,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 1U))));
        bufp->chgBit(oldp+175,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+176,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+177,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+178,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+179,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+180,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+181,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 2U))));
        bufp->chgBit(oldp+182,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 3U))));
        bufp->chgBit(oldp+183,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 4U))));
        bufp->chgBit(oldp+184,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 5U))));
        bufp->chgBit(oldp+185,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 6U))));
        bufp->chgBit(oldp+186,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 7U))));
        bufp->chgBit(oldp+187,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 8U))));
        bufp->chgBit(oldp+188,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg) 
                                      >> 9U))));
        bufp->chgBit(oldp+189,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0))));
        bufp->chgBit(oldp+190,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                      >> 1U))));
        bufp->chgBit(oldp+191,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                      >> 2U))));
        bufp->chgBit(oldp+192,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                      >> 3U))));
        bufp->chgBit(oldp+193,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                      >> 4U))));
        bufp->chgBit(oldp+194,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                      >> 5U))));
        bufp->chgBit(oldp+195,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                      >> 6U))));
        bufp->chgBit(oldp+196,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_0) 
                                      >> 7U))));
        bufp->chgBit(oldp+197,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1))));
        bufp->chgBit(oldp+198,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                      >> 1U))));
        bufp->chgBit(oldp+199,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                      >> 2U))));
        bufp->chgBit(oldp+200,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                      >> 3U))));
        bufp->chgBit(oldp+201,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                      >> 4U))));
        bufp->chgBit(oldp+202,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                      >> 5U))));
        bufp->chgBit(oldp+203,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                      >> 6U))));
        bufp->chgBit(oldp+204,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_1) 
                                      >> 7U))));
        bufp->chgBit(oldp+205,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2))));
        bufp->chgBit(oldp+206,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                      >> 1U))));
        bufp->chgBit(oldp+207,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                      >> 2U))));
        bufp->chgBit(oldp+208,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                      >> 3U))));
        bufp->chgBit(oldp+209,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                      >> 4U))));
        bufp->chgBit(oldp+210,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                      >> 5U))));
        bufp->chgBit(oldp+211,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                      >> 6U))));
        bufp->chgBit(oldp+212,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_2) 
                                      >> 7U))));
        bufp->chgBit(oldp+213,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3))));
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                      >> 1U))));
        bufp->chgBit(oldp+215,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                      >> 2U))));
        bufp->chgBit(oldp+216,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                      >> 3U))));
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                      >> 4U))));
        bufp->chgBit(oldp+218,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                      >> 5U))));
        bufp->chgBit(oldp+219,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                      >> 6U))));
        bufp->chgBit(oldp+220,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_3) 
                                      >> 7U))));
        bufp->chgBit(oldp+221,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4))));
        bufp->chgBit(oldp+222,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                      >> 1U))));
        bufp->chgBit(oldp+223,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                      >> 2U))));
        bufp->chgBit(oldp+224,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                      >> 3U))));
        bufp->chgBit(oldp+225,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                      >> 4U))));
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                      >> 5U))));
        bufp->chgBit(oldp+227,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                      >> 6U))));
        bufp->chgBit(oldp+228,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_4) 
                                      >> 7U))));
        bufp->chgBit(oldp+229,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5))));
        bufp->chgBit(oldp+230,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                      >> 1U))));
        bufp->chgBit(oldp+231,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                      >> 2U))));
        bufp->chgBit(oldp+232,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                      >> 3U))));
        bufp->chgBit(oldp+233,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                      >> 4U))));
        bufp->chgBit(oldp+234,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                      >> 5U))));
        bufp->chgBit(oldp+235,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                      >> 6U))));
        bufp->chgBit(oldp+236,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_5) 
                                      >> 7U))));
        bufp->chgBit(oldp+237,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6))));
        bufp->chgBit(oldp+238,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                      >> 1U))));
        bufp->chgBit(oldp+239,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                      >> 2U))));
        bufp->chgBit(oldp+240,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                      >> 3U))));
        bufp->chgBit(oldp+241,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                      >> 4U))));
        bufp->chgBit(oldp+242,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                      >> 5U))));
        bufp->chgBit(oldp+243,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                      >> 6U))));
        bufp->chgBit(oldp+244,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_6) 
                                      >> 7U))));
        bufp->chgBit(oldp+245,((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7))));
        bufp->chgBit(oldp+246,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                      >> 1U))));
        bufp->chgBit(oldp+247,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                      >> 2U))));
        bufp->chgBit(oldp+248,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                      >> 3U))));
        bufp->chgBit(oldp+249,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                      >> 4U))));
        bufp->chgBit(oldp+250,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                      >> 5U))));
        bufp->chgBit(oldp+251,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                      >> 6U))));
        bufp->chgBit(oldp+252,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_mygpio_seg_7) 
                                      >> 7U))));
        bufp->chgBit(oldp+253,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write));
        bufp->chgIData(oldp+254,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wdata_reg),32);
        bufp->chgCData(oldp+255,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_pstrb),4);
        bufp->chgCData(oldp+256,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w_reg),8);
        VSimTop___024root__trace_chg_dtype____1(vlSelf, bufp, 257, vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram);
        bufp->chgIData(oldp+273,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_seg_reg),32);
        bufp->chgCData(oldp+274,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__hex_to_seg__Vstatic__active_high),8);
        bufp->chgIData(oldp+275,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg),32);
        bufp->chgIData(oldp+276,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg),32);
        bufp->chgCData(oldp+277,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg),4);
        bufp->chgBit(oldp+278,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active));
        bufp->chgBit(oldp+279,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel));
        bufp->chgCData(oldp+280,((3U & ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                         ? ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                             ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)
                                             : ((- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg) 
                                                                >> 1U))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)))))))
                                         : ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                             ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)
                                             : (1U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg) 
                                                                  >> 1U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))))))))))),2);
        bufp->chgCData(oldp+281,(((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                   ? ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                       ? ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                           ? 0x20U : 
                                          ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                            ? 0x20U
                                            : 0x10U))
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37))
                                   : ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37)
                                       : ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                           ? ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                               ? 0x10U
                                               : 8U)
                                           : ((1U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                               ? 8U
                                               : 0x20U))))),8);
        bufp->chgIData(oldp+282,(((0xffff0000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg) 
                                  | (0x0000ffffU & 
                                     ((8U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                       ? ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                           ? ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                               ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg
                                               : ((1U 
                                                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                   ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg
                                                   : 
                                                  (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
                                                   >> 0x00000010U)))
                                           : ((0x0000ff00U 
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
                                       : ((4U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                           ? ((0x0000ff00U 
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
                                           : ((2U & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg))
                                                   ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg
                                                   : 
                                                  ((0x0000ff00U 
                                                    & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg) 
                                                   | (0x000000ffU 
                                                      & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg 
                                                         >> 8U))))
                                               : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg)))))),32);
        bufp->chgBit(oldp+283,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel));
        bufp->chgBit(oldp+284,((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))));
        bufp->chgBit(oldp+285,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_awready));
        bufp->chgBit(oldp+286,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_0));
        bufp->chgIData(oldp+287,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_addr),32);
        bufp->chgCData(oldp+288,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_0_size),3);
        bufp->chgBit(oldp+289,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_0));
        bufp->chgIData(oldp+290,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_data),32);
        bufp->chgCData(oldp+291,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_0_strb),4);
        bufp->chgBit(oldp+292,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)) 
                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG))));
        bufp->chgBit(oldp+293,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_arready));
        bufp->chgBit(oldp+294,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0));
        bufp->chgIData(oldp+295,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_addr),32);
        bufp->chgCData(oldp+296,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_0_size),3);
        bufp->chgBit(oldp+297,(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)) 
                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG))));
        bufp->chgCData(oldp+298,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state),2);
        bufp->chgIData(oldp+299,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__araddr_reg),32);
        bufp->chgIData(oldp+300,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__awaddr_reg),32);
        bufp->chgCData(oldp+301,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__wstrb_reg),4);
        bufp->chgIData(oldp+302,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+303,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)))));
        bufp->chgBit(oldp+304,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)))));
        bufp->chgBit(oldp+305,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_0));
        bufp->chgBit(oldp+306,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)))));
        bufp->chgIData(oldp+307,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_0_data),32);
        bufp->chgIData(oldp+308,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata),32);
        bufp->chgBit(oldp+309,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0));
        bufp->chgBit(oldp+310,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG));
        bufp->chgBit(oldp+311,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1)))));
        bufp->chgBit(oldp+312,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__valid_1));
        bufp->chgBit(oldp+313,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1)))));
        bufp->chgBit(oldp+314,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_1));
        bufp->chgIData(oldp+315,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__elts_1_data),32);
        bufp->chgBit(oldp+316,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1));
        bufp->chgIData(oldp+317,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_addr),32);
        bufp->chgCData(oldp+318,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__elts_1_size),3);
        bufp->chgBit(oldp+319,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1));
        bufp->chgIData(oldp+320,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_addr),32);
        bufp->chgCData(oldp+321,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__elts_1_size),3);
        bufp->chgBit(oldp+322,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1));
        bufp->chgIData(oldp+323,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_data),32);
        bufp->chgCData(oldp+324,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__elts_1_strb),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[10U])))) {
        bufp->chgBit(oldp+325,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel) 
                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0))));
        bufp->chgBit(oldp+326,(((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0))));
        bufp->chgBit(oldp+327,(((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3))));
        bufp->chgBit(oldp+328,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_psel) 
                                & (0U == (0x30000000U 
                                          & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)))));
        bufp->chgBit(oldp+329,((IData)(((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)) 
                                        & (0U == (0x30000000U 
                                                  & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+330,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state),3);
        bufp->chgCData(oldp+331,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__command_byte),8);
        bufp->chgIData(oldp+332,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__current_address),24);
        bufp->chgCData(oldp+333,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter),6);
        bufp->chgCData(oldp+334,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter),3);
        bufp->chgCData(oldp+335,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter),6);
        bufp->chgBit(oldp+336,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable));
        bufp->chgCData(oldp+337,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in),4);
        bufp->chgCData(oldp+338,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out),4);
        bufp->chgBit(oldp+339,(vlSelfRef.SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+340,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31) 
                                | ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                                   | (5U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))));
        bufp->chgCData(oldp+341,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_size),3);
        bufp->chgBit(oldp+342,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31) 
                                | ((3U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD)) 
                                   | (4U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))));
        bufp->chgBit(oldp+343,((6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))));
        bufp->chgBit(oldp+344,(((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                                | (((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)) 
                                    & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_reqValid)) 
                                   | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead)))));
        bufp->chgCData(oldp+345,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arsize),3);
        bufp->chgBit(oldp+346,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rready));
        bufp->chgIData(oldp+347,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr),32);
        bufp->chgCData(oldp+348,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize),3);
        bufp->chgBit(oldp+349,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_valid));
        bufp->chgCData(oldp+350,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count),2);
        bufp->chgIData(oldp+351,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata),32);
        bufp->chgCData(oldp+352,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb),4);
        bufp->chgBit(oldp+353,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_valid));
        bufp->chgCData(oldp+354,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count),2);
        bufp->chgCData(oldp+355,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count),2);
        bufp->chgIData(oldp+356,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr),32);
        bufp->chgCData(oldp+357,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize),3);
        bufp->chgBit(oldp+358,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_valid));
        bufp->chgCData(oldp+359,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count),2);
        bufp->chgCData(oldp+360,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count),2);
        bufp->chgBit(oldp+361,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG));
        bufp->chgIData(oldp+362,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC),32);
        bufp->chgBit(oldp+363,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_reqValid));
        bufp->chgBit(oldp+364,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_reqValid));
        bufp->chgCData(oldp+365,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_size),2);
        bufp->chgBit(oldp+366,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_wen));
        bufp->chgBit(oldp+367,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad));
        bufp->chgCData(oldp+368,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI),2);
        bufp->chgCData(oldp+369,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD),3);
        bufp->chgBit(oldp+370,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead));
        bufp->chgIData(oldp+371,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r),32);
        bufp->chgIData(oldp+372,(((IData)(4U) + vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)),32);
        bufp->chgBit(oldp+373,((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE) 
                                 | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE) 
                                    | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE) 
                                       | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))))) 
                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid))));
        bufp->chgBit(oldp+374,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr));
        bufp->chgCData(oldp+375,((0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+376,((0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+377,((0x0000001fU & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                 >> 7U))),5);
        bufp->chgIData(oldp+378,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__imm),32);
        bufp->chgBit(oldp+379,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__R_TYPE));
        bufp->chgBit(oldp+380,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE_ARITH));
        bufp->chgBit(oldp+381,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__L_TYPE_LOAD));
        bufp->chgBit(oldp+382,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__S_TYPE));
        bufp->chgBit(oldp+383,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_TYPE));
        bufp->chgBit(oldp+384,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_TYPE));
        bufp->chgBit(oldp+385,((IData)(((0x00000020U 
                                         == (0x00000060U 
                                             & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)))));
        bufp->chgBit(oldp+386,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__B_TYPE));
        bufp->chgBit(oldp+387,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE));
        bufp->chgBit(oldp+388,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__U_lui));
        bufp->chgBit(oldp+389,((IData)(((0x00000030U 
                                         == (0xfe000070U 
                                             & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17)))));
        bufp->chgBit(oldp+390,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lw));
        bufp->chgBit(oldp+391,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__exu__DOT__l_lbu));
        bufp->chgBit(oldp+392,((IData)(((0x00000010U 
                                         == (0x00000070U 
                                             & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17)))));
        bufp->chgBit(oldp+393,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sw));
        bufp->chgBit(oldp+394,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__S_sb));
        bufp->chgBit(oldp+395,((IData)(((0x00100073U 
                                         == vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst) 
                                        & ((1U != (7U 
                                                   & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                      >> 0x0000000cU))) 
                                           & (2U != 
                                              (7U & 
                                               (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                >> 0x0000000cU))))))));
        bufp->chgBit(oldp+396,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__I_csrrw));
        bufp->chgBit(oldp+397,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__I_csrrs));
        bufp->chgSData(oldp+398,((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                  >> 0x00000014U)),12);
        bufp->chgIData(oldp+399,((((0x0b00U == (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                >> 0x00000014U))
                                    ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__csr__DOT__mcycle)
                                    : ((0x0b80U == 
                                        (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                         >> 0x00000014U))
                                        ? (IData)((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__csr__DOT__mcycle 
                                                   >> 0x00000020U))
                                        : ((0x0f11U 
                                            == (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                >> 0x00000014U))
                                            ? 0x79737978U
                                            : (0x017eb18aU 
                                               & (- (IData)(
                                                            (0x0f12U 
                                                             == 
                                                             (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                              >> 0x00000014U)))))))) 
                                  & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))))),32);
        bufp->chgIData(oldp+400,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__inst_reg),32);
        bufp->chgBit(oldp+401,((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state))));
        bufp->chgBit(oldp+402,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_done));
        bufp->chgBit(oldp+403,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid));
        bufp->chgQData(oldp+404,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__csr__DOT__mcycle),64);
        bufp->chgIData(oldp+406,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst),32);
        bufp->chgCData(oldp+407,((0x0000007fU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)),7);
        bufp->chgCData(oldp+408,((7U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+409,((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                  >> 0x00000019U)),7);
        bufp->chgIData(oldp+410,((((- (IData)((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                     >> 0x00000014U))),32);
        bufp->chgIData(oldp+411,((((- (IData)((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | ((0x00000fe0U & 
                                      (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                       >> 0x00000014U)) 
                                     | (0x0000001fU 
                                        & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                           >> 7U))))),32);
        bufp->chgIData(oldp+412,((((- (IData)((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | ((0x00000800U & 
                                      (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                       << 4U)) | ((0x000007e0U 
                                                   & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+413,((0xfffff000U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst)),32);
        bufp->chgIData(oldp+414,((((- (IData)((vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                               >> 0x0000001fU))) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__idu__DOT__inst 
                                           >> 0x00000014U))))),32);
        bufp->chgCData(oldp+415,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__state),2);
        bufp->chgSData(oldp+416,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__lfsr),16);
        bufp->chgIData(oldp+417,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ifu__DOT__req_delay_count),32);
        bufp->chgCData(oldp+418,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__state),2);
        bufp->chgIData(oldp+419,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__load_data_reg),32);
        bufp->chgSData(oldp+420,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lfsr),16);
        bufp->chgIData(oldp+421,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__req_delay_count),32);
        bufp->chgBit(oldp+422,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load));
        bufp->chgBit(oldp+423,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store));
        bufp->chgBit(oldp+424,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_load) 
                                | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__is_store))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+425,(vlSelfRef.SimTop__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+426,(vlSelfRef.SimTop__DOT__flash__DOT__counter),8);
        bufp->chgCData(oldp+427,(vlSelfRef.SimTop__DOT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+428,(vlSelfRef.SimTop__DOT__flash__DOT__addr),24);
        bufp->chgIData(oldp+429,(vlSelfRef.SimTop__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+430,(((1U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state)) 
                                & (0x17U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+431,(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_sck));
        bufp->chgBit(oldp+432,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss));
        bufp->chgBit(oldp+433,(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_mosi));
        bufp->chgBit(oldp+434,(vlSelfRef.SimTop__DOT__asic__DOT___soc_psram_sck_o));
        bufp->chgBit(oldp+435,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgCData(oldp+436,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgSData(oldp+437,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgSData(oldp+438,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgBit(oldp+439,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+440,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+441,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+442,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+443,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+444,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+445,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse));
        bufp->chgCData(oldp+446,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+447,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+448,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgCData(oldp+449,((0x000000ffU & VSimTop__ConstPool__CONST_haf0ddab7_0
                                  [(0x0000000fU & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))])),8);
        bufp->chgBit(oldp+450,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+451,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i));
        bufp->chgCData(oldp+452,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+453,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+454,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+455,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+456,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+457,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+458,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+459,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgSData(oldp+460,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+461,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+462,((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+463,((7U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+464,((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+465,((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+466,((0x0000000fU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                                 - (IData)(1U)))),4);
        bufp->chgSData(oldp+467,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+468,((0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                                 >> 2U))),8);
        bufp->chgCData(oldp+469,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+470,((0x0000000fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+471,((0x000000ffU & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                                 >> 3U))),8);
        bufp->chgCData(oldp+472,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+473,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+474,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+475,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+476,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+477,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+478,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgCData(oldp+479,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+480,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+481,((0x0000000fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+482,(vlSelfRef.SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad));
        bufp->chgBit(oldp+483,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready));
        bufp->chgBit(oldp+484,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel));
        bufp->chgBit(oldp+485,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re));
        bufp->chgBit(oldp+486,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+487,(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_0));
        bufp->chgBit(oldp+488,(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_1));
        bufp->chgBit(oldp+489,(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_2));
        bufp->chgBit(oldp+490,(vlSelfRef.SimTop__DOT__asic__DOT__psram_dio_3));
        bufp->chgCData(oldp+491,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__io_qspi_io_di_i),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[10U]))) {
        bufp->chgBit(oldp+492,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel));
        bufp->chgBit(oldp+493,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_penable));
        bufp->chgIData(oldp+494,((0x1fffffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)),29);
        bufp->chgBit(oldp+495,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel) 
                                & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_penable))));
        bufp->chgIData(oldp+496,((0x1fffffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)),32);
        bufp->chgCData(oldp+497,((7U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)),3);
        bufp->chgCData(oldp+498,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+499,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_dat_i),8);
        VSimTop___024root__trace_chg_dtype____1(vlSelf, bufp, 500, vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram);
        bufp->chgIData(oldp+516,((0x3fffffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)),30);
        bufp->chgBit(oldp+517,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_3_psel));
        bufp->chgBit(oldp+518,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_3_pready));
        bufp->chgIData(oldp+519,((0x3fffffffU & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)),32);
        bufp->chgBit(oldp+520,((IData)(((0U == (0x0000000cU 
                                                & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)))));
        bufp->chgBit(oldp+521,((IData)(((8U == (0x0000000cU 
                                                & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)))));
        bufp->chgIData(oldp+522,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr),32);
        bufp->chgBit(oldp+523,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup));
        bufp->chgBit(oldp+524,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+525,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))));
        bufp->chgBit(oldp+526,((0U == (3U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                             >> 0x0000001cU)))));
        bufp->chgBit(oldp+527,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_3));
        bufp->chgCData(oldp+528,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count),2);
        bufp->chgCData(oldp+529,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count),2);
        bufp->chgCData(oldp+530,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count),2);
        bufp->chgCData(oldp+531,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count),2);
        bufp->chgCData(oldp+532,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[11U]))) {
        bufp->chgBit(oldp+533,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1));
        bufp->chgBit(oldp+534,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG));
        bufp->chgBit(oldp+535,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[12U]))) {
        bufp->chgBit(oldp+536,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_awready));
        bufp->chgBit(oldp+537,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_wready));
        bufp->chgBit(oldp+538,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid));
        bufp->chgBit(oldp+539,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_arready));
        bufp->chgBit(oldp+540,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid));
        bufp->chgIData(oldp+541,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata),32);
        bufp->chgBit(oldp+542,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal));
        bufp->chgBit(oldp+543,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+544,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__equal));
        bufp->chgBit(oldp+545,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+546,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal));
        bufp->chgBit(oldp+547,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_valid));
        bufp->chgCData(oldp+548,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_size),3);
        bufp->chgBit(oldp+549,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal));
        bufp->chgBit(oldp+550,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_valid));
        bufp->chgCData(oldp+551,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_size),3);
        bufp->chgBit(oldp+552,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal));
        bufp->chgBit(oldp+553,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_valid));
        bufp->chgBit(oldp+554,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready));
        bufp->chgBit(oldp+555,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready));
        bufp->chgBit(oldp+556,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready));
        bufp->chgBit(oldp+557,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_respValid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[13U]))) {
        bufp->chgBit(oldp+558,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))));
        bufp->chgBit(oldp+559,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_bvalid));
        bufp->chgBit(oldp+560,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rvalid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[14U]))) {
        bufp->chgBit(oldp+561,(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG));
        bufp->chgBit(oldp+562,(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1));
        bufp->chgBit(oldp+563,((1U & (~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc_reset_REG_1)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[15U]))) {
        bufp->chgBit(oldp+564,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask));
        bufp->chgBit(oldp+565,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+566,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+567,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+568,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+569,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    bufp->chgBit(oldp+570,(vlSelfRef.clock));
    bufp->chgBit(oldp+571,(vlSelfRef.reset));
    bufp->chgBit(oldp+572,(vlSelfRef.cpuClock));
    bufp->chgBit(oldp+573,(vlSelfRef.coreSel));
    bufp->chgSData(oldp+574,(vlSelfRef.externalPins_mygpio_in),16);
    bufp->chgBit(oldp+575,(vlSelfRef.externalPins_uart0_rx));
    bufp->chgBit(oldp+576,(vlSelfRef.externalPins_uart0_tx));
    bufp->chgBit(oldp+577,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+578,((1U & ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT__extra_ss) 
                                  | (((2U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelfRef.SimTop__DOT__flash__DOT__counter)))
                                      ? (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                         >> 7U) : (vlSelfRef.SimTop__DOT__flash__DOT__data 
                                                   >> 0x0000001fU))))));
    bufp->chgCData(oldp+579,(((4U & (((~ ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
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
    bufp->chgBit(oldp+580,((1U & (IData)(vlSelfRef.externalPins_mygpio_in))));
    bufp->chgBit(oldp+581,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 1U))));
    bufp->chgBit(oldp+582,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 0x0000000aU))));
    bufp->chgBit(oldp+583,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 0x0000000bU))));
    bufp->chgBit(oldp+584,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 0x0000000cU))));
    bufp->chgBit(oldp+585,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 0x0000000dU))));
    bufp->chgBit(oldp+586,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 0x0000000eU))));
    bufp->chgBit(oldp+587,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 0x0000000fU))));
    bufp->chgBit(oldp+588,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 2U))));
    bufp->chgBit(oldp+589,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 3U))));
    bufp->chgBit(oldp+590,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 4U))));
    bufp->chgBit(oldp+591,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 5U))));
    bufp->chgBit(oldp+592,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 6U))));
    bufp->chgBit(oldp+593,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 7U))));
    bufp->chgBit(oldp+594,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 8U))));
    bufp->chgBit(oldp+595,((1U & ((IData)(vlSelfRef.externalPins_mygpio_in) 
                                  >> 9U))));
    bufp->chgIData(oldp+596,((((((4U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
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
                                << 0x00000018U) | (
                                                   (0x00ff0000U 
                                                    & (((4U 
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
                                                   | ((0x0000ff00U 
                                                       & (((4U 
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
                              & (- (IData)((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_1_psel))))),32);
    bufp->chgBit(oldp+597,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_we_i));
    bufp->chgBit(oldp+598,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__wb_re_i));
    bufp->chgCData(oldp+599,((0x000000ffU & ((4U & vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr)
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
    bufp->chgBit(oldp+600,(vlSelfRef.externalPins_uart0_rx));
    bufp->chgCData(oldp+601,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
                             [vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom]),8);
    bufp->chgBit(oldp+602,((((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN)) 
                             | (8U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) 
                            & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2))));
    bufp->chgIData(oldp+603,((((0U == (3U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                             >> 2U)))
                                ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg)
                                : ((1U == (3U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                                 >> 2U)))
                                    ? (IData)(vlSelfRef.externalPins_mygpio_in)
                                    : (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_seg_reg 
                                       & (- (IData)(
                                                    (2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                                         >> 2U)))))))) 
                              & (- (IData)(((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)) 
                                            & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_out_3_psel)))))),32);
    bufp->chgIData(oldp+604,(((0U == (3U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                            >> 2U)))
                               ? (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_out_reg)
                               : ((1U == (3U & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                                >> 2U)))
                                   ? (IData)(vlSelfRef.externalPins_mygpio_in)
                                   : (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_2__DOT__mgpio__DOT__gpio_seg_reg 
                                      & (- (IData)(
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                                        >> 2U))))))))),32);
    bufp->chgBit(oldp+605,((1U & ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active)) 
                                  | (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT___npsram_nmi_ready)))));
    bufp->chgIData(oldp+606,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel)
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
    bufp->chgIData(oldp+607,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__auto_anon_in_prdata),32);
    bufp->chgIData(oldp+608,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rdata),32);
    bufp->chgCData(oldp+609,(((0U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                               ? ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_0) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))
                               : ((1U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                                   ? 2U : ((2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)
                                                ? 2U
                                                : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25))
                                            : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25))))),2);
    bufp->chgBit(oldp+610,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG) 
                            & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_bvalid))));
    bufp->chgBit(oldp+611,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__enq_in_REG) 
                            & (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__axi4xbar__DOT__auto_anon_in_rvalid))));
    bufp->chgIData(oldp+612,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__io_enq_bits_addr),32);
    bufp->chgIData(oldp+613,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__io_enq_bits_addr),32);
    bufp->chgIData(oldp+614,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_data),32);
    bufp->chgCData(oldp+615,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__io_enq_bits_strb),4);
    bufp->chgIData(oldp+616,(((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__io_ifu_respValid)
                               ? vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__lsu__DOT__lsu_rdata
                               : vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__io_ifu_rdata_r)),32);
    bufp->chgBit(oldp+617,((((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_bvalid) 
                             & (6U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))) 
                            | ((IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__cmp__DOT__io_out_rvalid) 
                               & (2U == (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))))));
    bufp->chgIData(oldp+618,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[10U]),32);
    bufp->chgIData(oldp+619,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[31]),32);
    bufp->chgIData(oldp+620,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[30]),32);
    bufp->chgIData(oldp+621,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[29]),32);
    bufp->chgIData(oldp+622,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[28]),32);
    bufp->chgIData(oldp+623,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[27]),32);
    bufp->chgIData(oldp+624,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[26]),32);
    bufp->chgIData(oldp+625,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[25]),32);
    bufp->chgIData(oldp+626,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[24]),32);
    bufp->chgIData(oldp+627,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[23]),32);
    bufp->chgIData(oldp+628,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[22]),32);
    bufp->chgIData(oldp+629,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[21]),32);
    bufp->chgIData(oldp+630,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[20]),32);
    bufp->chgIData(oldp+631,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[19]),32);
    bufp->chgIData(oldp+632,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[18]),32);
    bufp->chgIData(oldp+633,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[17]),32);
    bufp->chgIData(oldp+634,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[16]),32);
    bufp->chgIData(oldp+635,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[15]),32);
    bufp->chgIData(oldp+636,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[14]),32);
    bufp->chgIData(oldp+637,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[13]),32);
    bufp->chgIData(oldp+638,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[12]),32);
    bufp->chgIData(oldp+639,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[11]),32);
    bufp->chgIData(oldp+640,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[10]),32);
    bufp->chgIData(oldp+641,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[9]),32);
    bufp->chgIData(oldp+642,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[8]),32);
    bufp->chgIData(oldp+643,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[7]),32);
    bufp->chgIData(oldp+644,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[6]),32);
    bufp->chgIData(oldp+645,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[5]),32);
    bufp->chgIData(oldp+646,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[4]),32);
    bufp->chgIData(oldp+647,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[3]),32);
    bufp->chgIData(oldp+648,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[2]),32);
    bufp->chgIData(oldp+649,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[1]),32);
    bufp->chgIData(oldp+650,(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf[0]),32);
    bufp->chgCData(oldp+651,(((4U & (((~ ((~ (IData)(vlSelfRef.SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
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
    bufp->chgIData(oldp+652,(vlSelfRef.SimTop__DOT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+653,(((0x00fffffeU & (vlSelfRef.SimTop__DOT__flash__DOT__addr 
                                              << 1U)) 
                              | (IData)(vlSelfRef.SimTop__DOT__asic__DOT___soc_spi_mosi))),32);
    bufp->chgIData(oldp+654,(((((0x0000ff00U & (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                << 8U)) 
                                | (0x000000ffU & (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                  >> 8U))) 
                               << 0x00000010U) | ((0x0000ff00U 
                                                   & (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelfRef.SimTop__DOT__flash__DOT__rdata 
                                                     >> 0x00000018U)))),32);
}

void VSimTop___024root__trace_chg_dtype____0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_dtype____0\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[15]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[14]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[13]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[12]),3);
    bufp->chgCData(oldp+4,(__VdtypeVar[11]),3);
    bufp->chgCData(oldp+5,(__VdtypeVar[10]),3);
    bufp->chgCData(oldp+6,(__VdtypeVar[9]),3);
    bufp->chgCData(oldp+7,(__VdtypeVar[8]),3);
    bufp->chgCData(oldp+8,(__VdtypeVar[7]),3);
    bufp->chgCData(oldp+9,(__VdtypeVar[6]),3);
    bufp->chgCData(oldp+10,(__VdtypeVar[5]),3);
    bufp->chgCData(oldp+11,(__VdtypeVar[4]),3);
    bufp->chgCData(oldp+12,(__VdtypeVar[3]),3);
    bufp->chgCData(oldp+13,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+14,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+15,(__VdtypeVar[0]),3);
}

void VSimTop___024root__trace_chg_dtype____1(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_dtype____1\n"); );
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[15]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[14]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[13]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[12]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[11]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[10]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[9]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[8]),8);
    bufp->chgCData(oldp+8,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+9,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+10,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+11,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+12,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+13,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+14,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+15,(__VdtypeVar[0]),8);
}

void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_cleanup\n"); );
    // Body
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSymsp->TOP.__Vm_traceActivity[10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[15U] = 0U;
}
