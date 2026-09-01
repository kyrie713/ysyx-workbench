// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_INLINE_OPT void VSimTop___024root___ico_sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__R2_data 
        = ((0U == (0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                            >> 0x14U))) ? 0U : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__regfile__DOT__rf
           [(0x1fU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT____Vcellinp__idu__inst 
                      >> 0x14U))]);
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal)
            ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
            : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__next_pc 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__I_jalr)
            ? (0xfffffffeU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT)
            : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__J_TYPE)
                ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
                : ((IData)(4U) + vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask = 0U;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_araddr 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__lsuRead)
            ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT
            : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC);
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
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wdata;
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal)
            ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_araddr
            : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr);
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
}

void VSimTop___024root___eval_ico(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VSimTop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VSimTop___024root___eval_act(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 2048> VSimTop__ConstPool__TABLE_h10c88e1c_0;
extern const VlUnpacked<CData/*3:0*/, 64> VSimTop__ConstPool__TABLE_h4abec798_0;
extern const VlUnpacked<CData/*3:0*/, 4> VSimTop__ConstPool__TABLE_h05f4911a_0;

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
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
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*2:0*/ __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*2:0*/ __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0;
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
    // Body
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_spi_sck 
        = vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_spi_mosi 
        = vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0U;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
        = vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready;
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state;
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_spi_sck 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                & (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
               & ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                  | (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck)))
               ? (~ (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck))
               : (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck)));
    vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_spi_mosi 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                     | (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))
               ? (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[
                  (3U & (((0x800U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                           ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                              - (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                           : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                              - (IData)(1U))) >> 5U))] 
                  >> (0x1fU & ((0x800U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                                ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                   - (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                   - (IData)(1U)))))
               : (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi)));
    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable) 
               & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0))) 
              & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write)
                     ? 0U : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                             | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask)
               ? 0U : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                       | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7) 
                          & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7_d))))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write)
                     ? 0U : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                             | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask)
               ? 0U : (1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                             | (((IData)(vlSelf->__VdfgTmp_h0138f4a2__0) 
                                 >> 2U) & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4_d)))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask)
               ? 0U : (1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                             | ((IData)(vlSelf->__VdfgTmp_h0138f4a2__0) 
                                & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3_d)))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask)
               ? 0U : (1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                             | (((IData)(vlSelf->__VdfgTmp_h0138f4a2__0) 
                                 >> 1U) & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2_d)))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (((((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
               | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset))
               ? 0U : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                       | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0) 
                          & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0_d))))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read)
               ? 0U : (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                        & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int))
                        ? 1U : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
                                   >> 3U)))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read)
               ? 0U : (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                        & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int))
                        ? 1U : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier)))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask)
               ? 0U : (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                        & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int))
                        ? 1U : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
                                   >> 2U)))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count) 
                == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read))
               ? 0U : (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                        & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int))
                        ? 1U : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier)))));
    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write) 
               | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read) 
                  & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir))))
               ? 0U : (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                        & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int))
                        ? 1U : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
                                   >> 1U)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask)
               ? 0U : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                       | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                          & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d))))));
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real));
    __Vtableidx3 = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)))))))))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__interrupt 
        = VSimTop__ConstPool__TABLE_h10c88e1c_0[__Vtableidx3];
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0)));
    if (vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__neg_edge 
            = ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                 & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck)) 
                & (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
               | (((~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)))) 
                   & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck))) 
                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push;
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        } else if ((IData)((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        } else {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? ((IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss) 
                                                   | ((((2U 
                                                         == (IData)(vlSelf->SimTop__DOT__flash__DOT__state)) 
                                                        & (0U 
                                                           == (IData)(vlSelf->SimTop__DOT__flash__DOT__counter)))
                                                        ? vlSelf->SimTop__DOT__flash__DOT__data_bswap
                                                        : vlSelf->SimTop__DOT__flash__DOT__data) 
                                                      >> 0x1fU))
                                                : (
                                                   vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if ((1U & (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip))))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip = 0U;
        }
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)
                         ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))
                             : 0x80U)));
        if (((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite)) 
             & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata 
                                   | (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        } else if ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl));
        }
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)((0x18U == (0x18U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                   << 7U) | (((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                              << 6U) | (((IData)((0x11U 
                                                  == 
                                                  (0x11U 
                                                   & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                         << 5U) | ((IData)(
                                                           (0x10U 
                                                            != 
                                                            (0x12U 
                                                             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                                   << 4U)))));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset;
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_re) 
                     & (0U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr))) 
                    & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t;
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        } else if ((2U == (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = (7U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
                __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 1U;
                __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 
                    = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = (7U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 1U;
            __Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__neg_edge = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msi_reset;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r 
            = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 1U;
    }
    if (__Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16] 
            = __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    }
    if (__Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17] = 0U;
    }
    if (__Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18] 
            = __Vdlyvval__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    }
    if (__Vdlyvset__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    if (vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__wb_dat;
        if (((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite)) 
             & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata);
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                         >> 6U));
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
             & (7U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        if (((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real) 
               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)) 
              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel)) 
             & (8U == (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init 
                = (1U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg);
        }
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready = 0U;
        if (((((((((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
                   | (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
                  | (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
                 | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
                | (4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
               | (5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
              | (6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) 
             | (7U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)))) {
            if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                if ((0U != vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt)) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt 
                        = (0x3ffffU & (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt 
                                       - (IData)(1U)));
                } else {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 1U;
                }
            } else if ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca = 0x66000000U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                    = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 2U;
            } else if ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd) 
                     == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd))) {
                    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                         != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait))) {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                    }
                    if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt))) {
                        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 3U;
                    }
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                        = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                                    - (IData)(1U)));
                } else {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd)));
                }
            } else if ((3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca = 0x99000000U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                    = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 4U;
            } else if ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd) 
                     == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd))) {
                    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                         != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait))) {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                    }
                    if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt))) {
                        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 5U;
                    }
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                        = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                                    - (IData)(1U)));
                } else {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd)));
                }
            } else if ((5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca = 0x35000000U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                    = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 8U;
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 6U;
            } else if ((6U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd) 
                     == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd))) {
                    if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                         != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait))) {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                    }
                    if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt))) {
                        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 7U;
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done = 1U;
                    }
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                        = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                                    - (IData)(1U)));
                } else {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd)));
                }
            } else {
                vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o = 0U;
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst = 0U;
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                        = (0x38000000U | vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr);
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 0x20U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 9U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 0xcU;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt = 0U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0U;
                } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                        = (0xeb000000U | vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr);
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 0x20U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 9U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 0xaU;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt = 0xcU;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt = 0U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 0U;
                } else {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                }
            }
        } else if ((8U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
                = (1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o)));
            if (vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt 
                    = (0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt) 
                                - (IData)(1U)));
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                    = (1U | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                             << 1U));
                if ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt;
                }
            }
        } else if ((9U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
                = (1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o)));
            if (vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt 
                    = (0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt) 
                                - (IData)(4U)));
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                    = (1U | (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
                             << 4U));
                if ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt;
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data 
                        = (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata);
                }
            }
        } else if ((0xaU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
                = (1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o)));
            __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt 
                = (0xfU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt) 
                           - (IData)(1U)));
            if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt))) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 0xbU;
            }
        } else if ((0xbU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
                = (1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o)));
            if (vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o) {
                if ((8U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        = ((0xffffff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data) 
                           | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data));
                } else if ((0x10U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        = ((0xffff00ffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data) 
                           | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                              << 8U));
                } else if ((0x18U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        = ((0xff00ffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data) 
                           | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                              << 0x10U));
                }
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data 
                    = ((0xf0U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                                 << 4U)) | (((IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_3_p2c) 
                                             << 3U) 
                                            | (((IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_2_p2c) 
                                                << 2U) 
                                               | (((IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_1_p2c) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_p2c)))));
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt 
                    = (0xffU & ((IData)(4U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)));
                if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt) 
                     == (0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt) 
                                  - (IData)(4U))))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 0xdU;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
                }
            }
        } else if ((0xcU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o 
                = (1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o)));
            if (vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o) {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data 
                    = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte_upd)
                        ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte)
                        : (0xfU | (0xf0U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                                            << 4U))));
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt 
                    = (0xffU & ((IData)(4U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)));
                if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt) 
                     == (0xffU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt) 
                                  - (IData)(4U))))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 0xeU;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait;
                }
            }
        } else if ((0xdU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd) 
                 == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd))) {
                if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                     != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait))) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data 
                        = ((0xffffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data) 
                           | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data) 
                              << 0x18U));
                }
                if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 7U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready = 1U;
                }
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                    = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                                - (IData)(1U)));
            } else {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd)));
            }
        } else if ((0xeU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd) 
                 == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd))) {
                if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                     != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait))) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
                }
                if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 7U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready = 1U;
                }
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
                    = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt) 
                                - (IData)(1U)));
            } else {
                __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd)));
            }
        }
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_prdata = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_init = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_dev_rst = 1U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_boot_cnt = 0xc350U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce = 1U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca_bit_cnt;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_cfg_chd;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_ce_cnt;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state_tgt;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_wait_cnt;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_ca;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_byte_data;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelf->__VdfgTmp_h0138f4a2__0) 
              >> 2U));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->__VdfgTmp_h0138f4a2__0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((IData)(vlSelf->__VdfgTmp_h0138f4a2__0) 
              >> 1U));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx4 = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1))))))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__iir 
        = VSimTop__ConstPool__TABLE_h4abec798_0[__Vtableidx4];
    if (vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
             & (4U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)))) {
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        if (((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real) 
               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)) 
              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel)) 
             & (0U == (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait 
                = (0x1fU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg);
        }
        if (((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real) 
               & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)) 
              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_cfg_reg_sel)) 
             & (4U == (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg)))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd 
                = (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg);
        }
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st = 1U;
        } else if ((0xeU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st = 0U;
        }
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st = 1U;
        } else if ((0xdU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st = 0U;
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel) {
            if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state))) {
                if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re) 
                     & (0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 1U;
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_xfer_bit_cnt;
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr 
                        = (0xffffffU & ((0x7fffffU 
                                         & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg) 
                                        + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_addr_ofst)));
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_disp_wdata;
                } else if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re) 
                            & (~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wstrbReg)))))) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 3U;
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt = 0x20U;
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr 
                        = (0x7fffffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg);
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__wdataReg;
                }
            } else if ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state))) {
                if ((7U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st = 1U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 2U;
                }
            } else if ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st = 0U;
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 0U;
                }
            } else if ((3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state))) {
                if ((7U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state))) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st = 1U;
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 4U;
                }
            } else if ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st = 0U;
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready) {
                    __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 0U;
                }
            }
        }
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__start_dlc 
            = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
                & (0U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr))) 
               & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U));
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1_d = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_wait = 0x12U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_cfg_chd = 4U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_wr_st = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_rd_st = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_rd_st = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_wr_st = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_xfer_data_bit_cnt = 0U;
        __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_addr = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_mem_wdata = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__start_dlc = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1)) 
                 | (IData)(vlSelf->externalPins_uart0_rx)));
    __Vtableidx1 = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VSimTop__ConstPool__TABLE_h05f4911a_0[__Vtableidx1];
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__s_xfer_new_byte_upd 
        = ((4U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
           | ((0xcU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt)) 
              | (0x14U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_xfer_data_bit_cnt))));
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__r_fsm_state;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_ready;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state 
        = __Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state;
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
               & (2U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr))) 
              & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                 >> 1U)));
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_sio_oen 
        = ((0xaU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)) 
           | (0xbU == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_fsm_state)));
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*2:0*/ __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0;
    IData/*22:0*/ __Vdlyvdim0__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0;
    __Vdlyvdim0__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 0;
    CData/*2:0*/ __Vdlyvlsb__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0;
    __Vdlyvlsb__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 0;
    CData/*3:0*/ __Vdlyvval__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0;
    __Vdlyvval__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0;
    __Vdlyvset__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 0;
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
    // Body
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode 
        = vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte 
        = vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter 
        = vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter 
        = vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address 
        = vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
        = vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter;
    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state 
        = vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state;
    __Vdlyvset__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 0U;
    if ((4U & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
        if ((2U & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
            } else if (vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
            } else if (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                        & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o))) {
                vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in 
                    = vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i;
                __Vdlyvval__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 
                    = vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in;
                __Vdlyvset__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 = 1U;
                __Vdlyvlsb__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 
                    = (7U & (((IData)(7U) - ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter) 
                                             << 2U)) 
                             - (IData)(3U)));
                __Vdlyvdim0__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0 
                    = (0x7fffffU & vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address);
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter)));
                if ((1U == (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address 
                        = (0xffffffU & ((IData)(1U) 
                                        + vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address));
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                    if ((0x7fffffU == vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address)) {
                        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address = 0U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
            if (vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
            } else if ((1U & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                              & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o))))) {
                vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_out 
                    = (0xfU & (vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__mem_array
                               [(0x7fffffU & vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address)] 
                               >> (7U & (((IData)(7U) 
                                          - ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter) 
                                             << 2U)) 
                                         - (IData)(3U)))));
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter)));
                if ((1U == (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter)));
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address 
                        = (0xffffffU & ((IData)(1U) 
                                        + vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address));
                    if ((0x7fffffU == vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address)) {
                        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address = 0U;
                    }
                } else if ((4U == (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter = 0U;
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
                }
            }
        } else if (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                    & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o))) {
            __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter)));
            if ((5U == (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter))) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter = 0U;
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 1U;
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 5U;
            }
        }
    } else if ((2U & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
        if ((1U & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
            if (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                 & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o))) {
                vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in 
                    = vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i;
                vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT____Vlvbound_hb15e3313__0 
                    = vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in;
                if ((0x17U >= (0x1fU & (((IData)(0x17U) 
                                         - ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter) 
                                            << 2U)) 
                                        - (IData)(3U))))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address 
                        = (((~ ((IData)(0xfU) << (0x1fU 
                                                  & (((IData)(0x17U) 
                                                      - 
                                                      ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter) 
                                                       << 2U)) 
                                                     - (IData)(3U))))) 
                            & __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address) 
                           | (0xffffffU & ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT____Vlvbound_hb15e3313__0) 
                                           << (0x1fU 
                                               & (((IData)(0x17U) 
                                                   - 
                                                   ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter) 
                                                    << 2U)) 
                                                  - (IData)(3U))))));
                }
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter)));
                if ((5U == (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state 
                        = ((0xebU == (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte))
                            ? 4U : ((0x38U == (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte))
                                     ? 6U : 0U));
                }
            }
        } else if (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
                    & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o))) {
            vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in 
                = vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i;
            __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte 
                = ((0U == (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))
                    ? ((0xfU & (IData)(__Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                       | ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in) 
                          << 4U)) : ((0xf0U & (IData)(__Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                                     | (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in)));
            __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter)));
            if ((1U == (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state 
                    = ((0xebU == ((0xf0U & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                                  | (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in)))
                        ? 3U : ((0x38U == ((0xf0U & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                                           | (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_data_in)))
                                 ? 3U : 0U));
            }
        }
    } else if ((1U & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state))) {
        if (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o))) {
            __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte 
                = (((~ ((IData)(1U) << (7U & ((IData)(7U) 
                                              - (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))))) 
                    & (IData)(__Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                   | (0xffU & ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i)) 
                               << (7U & ((IData)(7U) 
                                         - (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))))));
            __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter)));
            if ((7U == (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter))) {
                __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
                if ((0x66U == ((0xfeU & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                               | (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i))))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                } else if ((0x99U == ((0xfeU & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                                      | (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i))))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                } else if ((0x35U == ((0xfeU & (IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte)) 
                                      | (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i))))) {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode = 1U;
                } else {
                    __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad)))) {
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter = 0U;
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter = 0U;
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter = 0U;
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address = 0U;
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte = 0U;
        vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable = 0U;
        __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state 
            = ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode)
                ? 2U : 1U);
    }
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__r_fsm_state;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__bit_counter;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__current_address 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__current_address;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__byte_counter;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__dummy_cycle_counter;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__command_byte 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__command_byte;
    vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode 
        = __Vdly__SimTop__DOT__espPsram__DOT__psram__DOT__qspi_mode;
    if (__Vdlyvset__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0) {
        vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__mem_array[__Vdlyvdim0__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0))) 
                & vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__mem_array
                [__Vdlyvdim0__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0]) 
               | (0xffU & ((IData)(__Vdlyvval__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0) 
                           << (IData)(__Vdlyvlsb__SimTop__DOT__espPsram__DOT__psram__DOT__mem_array__v0))));
    }
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
    vlSelf->SimTop__DOT__espPsram__DOT____Vcelloutt__psram__sio__out 
        = ((3U & ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out0) 
                  & (- (IData)((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable))))) 
           | (0xcU & ((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__sio__out__strong__out1) 
                      & ((- (IData)((IData)(vlSelf->SimTop__DOT__espPsram__DOT__psram__DOT__io_output_enable))) 
                         << 2U))));
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__6(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->SimTop__DOT__flash__DOT__data = vlSelf->__Vdly__SimTop__DOT__flash__DOT__data;
    vlSelf->SimTop__DOT__flash__DOT__addr = vlSelf->__Vdly__SimTop__DOT__flash__DOT__addr;
    vlSelf->SimTop__DOT__flash__DOT__cmd = vlSelf->__Vdly__SimTop__DOT__flash__DOT__cmd;
    vlSelf->SimTop__DOT__flash__DOT__counter = vlSelf->__Vdly__SimTop__DOT__flash__DOT__counter;
    vlSelf->SimTop__DOT__flash__DOT__state = vlSelf->__Vdly__SimTop__DOT__flash__DOT__state;
}

extern const VlUnpacked<CData/*7:0*/, 256> VSimTop__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> VSimTop__ConstPool__TABLE_he38796ec_0;

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__7(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__7\n"); );
    // Init
    CData/*7:0*/ SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_ss;
    SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_ss = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelf->SimTop__DOT__asic__DOT___soc_psram_sck_o 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_psram_sck_o;
    vlSelf->SimTop__DOT__asic__DOT___soc_spi_mosi = vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_spi_mosi;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    if (vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                    }
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in;
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
        }
        if ((((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                >> 0xcU) & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)) 
              & (~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
             & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_irq_out = 1U;
        } else if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_irq_out = 0U;
        }
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_irq_out = 0U;
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
        } else if ((2U == (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
            if (VL_UNLIKELY((0x10U > (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count)));
                VL_WRITEF("%c",8,vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                    = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
                if (1U) { VL_FFLUSH_I(1U); }
            }
        } else if ((1U == (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0U < (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count 
                    = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count) 
                                - (IData)(1U)));
            }
        } else if (VL_UNLIKELY((3U == (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                        << 1U) | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            VL_WRITEF("%c",8,vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
            if (1U) { VL_FFLUSH_I(1U); }
        }
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rstate;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__pos_edge 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                 & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck))) 
                & (1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
               | ((~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)))) 
                  & (IData)(vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck))) 
              | (((~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)))) 
                  & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                     >> 8U)) & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
               & (2U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr))) 
              & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                 >> 2U)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
               & (0U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr))) 
              & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                    >> 7U))));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->SimTop__DOT__asic__DOT___soc_spi_sck = vlSelf->__Vdly__SimTop__DOT__asic__DOT___soc_spi_sck;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl;
    if (vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            if ((0U < (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                        } else {
                            vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
    } else {
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tf_count)));
    if (vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable 
            = ((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)) 
               & (~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc)))));
        if (((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (5U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite)) 
             & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwdata));
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we) 
             & (3U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__enable = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    }
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__dlc;
    SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_ss 
        = (0xffU & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ss) 
                       & ((- (IData)(((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__tip) 
                                      & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                                         >> 0xdU)))) 
                          | (- (IData)((1U & (~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT__ctrl) 
                                                 >> 0xdU)))))))));
    vlSelf->SimTop__DOT__asic__DOT___soc_spi_ss = (1U 
                                                   & (IData)(SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fspi_ss));
    __Vtableidx2 = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__block_value 
        = VSimTop__ConstPool__TABLE_hccb3c341_0[__Vtableidx2];
    __Vtableidx5 = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VSimTop__ConstPool__TABLE_he38796ec_0[__Vtableidx5];
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->externalPins_uart0_tx = (IData)((((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr) 
                                              >> 4U) 
                                             | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__srx_pad));
}

VL_INLINE_OPT void VSimTop___024root___nba_comb__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__active) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_sel 
        = ((0x40U == (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg 
                      >> 0x18U)) & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done));
    vlSelf->SimTop__DOT__asic__DOT___psram_nss_o_psram_nss_o_pad_pad 
        = (1U & ((~ ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done)) 
                     | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__u_psram_core__DOT__r_init_done) 
                        & (0U == (0x1800000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__addrReg))))) 
                 | (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_psram_ce)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_2 
        = ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT_____05Fin_pready));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__s_mem_valid_re 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real_delay)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__npsram__DOT__nmi_valid_real));
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
}

VL_INLINE_OPT void VSimTop___024root___nba_comb__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_comb__TOP__1\n"); );
    // Body
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
    vlSelf->SimTop__DOT__asic__DOT____Vcellinp__soc__psram_io_di_i 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_3_p2c) 
            << 3U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_2_p2c) 
                       << 2U) | (((IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_1_p2c) 
                                  << 1U) | (IData)(vlSelf->SimTop__DOT__asic__DOT___psram_dio_list_pad_pad_p2c))));
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__8(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count;
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count 
        = vlSelf->__Vdly__SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count;
    if ((1U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN))) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_pstrb;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write;
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pstrb = 0xfU;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_pwrite 
            = (8U != (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN));
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_11__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT____Vcellinp___GEN_11__in_penable) 
           & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_1__DOT___GEN_0)));
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice_3__DOT__mpsram__DOT__setup 
        = ((~ (IData)(((0U == (0x30000000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)) 
                       & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))))) 
           & (IData)(((0U == (0x30000000U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)) 
                      & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel))));
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_1) 
           & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_psel));
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__9(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG_1 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu_reset_REG 
        = vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1;
}

VL_INLINE_OPT void VSimTop___024root___nba_comb__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__equal 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_bsource__DOT__count) 
           == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_bsink__DOT__count));
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
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q__DOT__valid_0;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_rready;
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_lsu_rdata 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__io_deq_bits1_rdata;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count)));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__enq_q_io_deq_ready 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeIn_rsource__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeIn_rsink__DOT__count)));
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_araddr;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___master_bridge_io_master_arsize;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__deq_valid 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_valid;
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready 
            = (1U & ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count))));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_raddr;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__io_deq_bits1_rsize;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__deq_valid 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__count)));
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__ALU_OUT;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_size;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__deq_valid 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_valid;
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready 
            = (1U & ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count))));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_addr 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_raddr;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT____Vcellinp__io_deq_q__io_enq_bits_size 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__io_deq_bits1_rsize;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__deq_valid 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__count)));
    }
    if (vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__equal) {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wdata;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cpu_io_lsu_wmask;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__deq_valid 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_valid;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)));
    } else {
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_data 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rdata;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT____Vcellinp__io_deq_q__io_enq_bits_strb 
            = vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__io_deq_bits1_rstrb;
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__deq_valid 
            = ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count) 
                      >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count)));
        vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready 
            = (1U & ((1U & ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__count) 
                            >> 1U)) != (1U & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__count))));
    }
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__instReturn 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_rvalid) 
           & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateI)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_arready 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_ready));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_arsink__DOT__deq_valid));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_awready 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_awsource__DOT__enq_in_ready));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_awsink__DOT__deq_valid));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT___valid_1_T_4 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__io_deq_q__DOT__valid_1)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__sink__DOT__nodeOut_wsink__DOT__deq_valid));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_arsource__DOT__enq_in_REG) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cdc__DOT__source__DOT__nodeOut_wsource__DOT__enq_in_ready));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT___stateD_T_21 
        = ((0U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__stateD))
            ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidLoad)
                ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_arready)
                    ? 2U : 1U) : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__bridge0__DOT__isValidStore)
                                   ? ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_awready)
                                       ? (4U | ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready) 
                                                << 1U))
                                       : ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT___cmp_io_in_0_wready)
                                           ? 5U : 3U))
                                   : 0U)) : 0U);
}

VL_INLINE_OPT void VSimTop___024root___nba_comb__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_comb__TOP__3\n"); );
    // Init
    CData/*0:0*/ SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT____VdfgTmp_h3e8b818c__0;
    SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT____VdfgTmp_h3e8b818c__0 = 0;
    // Body
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_out_paddr)));
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
    SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT____VdfgTmp_h3e8b818c__0 
        = (((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_pready) 
            & (2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))) 
           | (3U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT___axi42apb_auto_in_rdata 
        = ((2U == (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__state))
            ? vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_in_prdata
            : vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rdata_r);
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)) 
           & (IData)(SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT____VdfgTmp_h3e8b818c__0));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write) 
           & (IData)(SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT____VdfgTmp_h3e8b818c__0));
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
}

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__10(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG));
    vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG = 
        (1U & (~ (IData)(vlSelf->reset)));
}

VL_INLINE_OPT void VSimTop___024root___nba_comb__TOP__4(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_comb__TOP__4\n"); );
    // Init
    CData/*0:0*/ SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____VdfgTmp_hc1925006__0;
    SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____VdfgTmp_hc1925006__0 = 0;
    // Body
    SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((IData)(vlSelf->SimTop__DOT__asic__DOT__soc_reset_REG_1) 
           & ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_penable)) 
              & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_we 
        = ((IData)(SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write));
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__axi42apb__DOT__is_write)) 
           & (IData)(SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT____VdfgTmp_hc1925006__0));
}

VL_INLINE_OPT void VSimTop___024root___nba_comb__TOP__5(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_comb__TOP__5\n"); );
    // Body
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
    vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->SimTop__DOT__asic__DOT__soc__DOT__DefDevice__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
}

void VSimTop___024root___nba_sequent__TOP__0(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_sequent__TOP__2(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_sequent__TOP__4(VSimTop___024root* vlSelf);
void VSimTop___024root___nba_sequent__TOP__5(VSimTop___024root* vlSelf);

void VSimTop___024root___eval_nba(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VSimTop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VSimTop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VSimTop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VSimTop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSimTop___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VSimTop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VSimTop___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VSimTop___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(3U) | vlSelf->__VnbaTriggered.at(4U))) {
        VSimTop___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(4U) | vlSelf->__VnbaTriggered.at(7U))) {
        VSimTop___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VSimTop___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSimTop___024root___nba_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U))) {
        VSimTop___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(3U) | vlSelf->__VnbaTriggered.at(4U))) {
        VSimTop___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSimTop___024root___nba_sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U))) {
        VSimTop___024root___nba_comb__TOP__4(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        VSimTop___024root___nba_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
}

void VSimTop___024root___eval_triggers__ico(VSimTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__ico(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
void VSimTop___024root___eval_triggers__act(VSimTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__nba(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<8> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VSimTop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VSimTop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 3500, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VSimTop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VSimTop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSimTop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 3500, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSimTop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSimTop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/ElaborateTop.v", 3500, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSimTop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->cpuClock & 0xfeU))) {
        Verilated::overWidthError("cpuClock");}
    if (VL_UNLIKELY((vlSelf->coreSel & 0xfeU))) {
        Verilated::overWidthError("coreSel");}
    if (VL_UNLIKELY((vlSelf->externalPins_uart0_rx 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_uart0_rx");}
}
#endif  // VL_DEBUG
