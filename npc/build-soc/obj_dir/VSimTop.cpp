// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimTop__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSimTop::VSimTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSimTop__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , cpuClock{vlSymsp->TOP.cpuClock}
    , coreSel{vlSymsp->TOP.coreSel}
    , externalPins_mygpio_seg_0{vlSymsp->TOP.externalPins_mygpio_seg_0}
    , externalPins_mygpio_seg_1{vlSymsp->TOP.externalPins_mygpio_seg_1}
    , externalPins_mygpio_seg_2{vlSymsp->TOP.externalPins_mygpio_seg_2}
    , externalPins_mygpio_seg_3{vlSymsp->TOP.externalPins_mygpio_seg_3}
    , externalPins_mygpio_seg_4{vlSymsp->TOP.externalPins_mygpio_seg_4}
    , externalPins_mygpio_seg_5{vlSymsp->TOP.externalPins_mygpio_seg_5}
    , externalPins_mygpio_seg_6{vlSymsp->TOP.externalPins_mygpio_seg_6}
    , externalPins_mygpio_seg_7{vlSymsp->TOP.externalPins_mygpio_seg_7}
    , externalPins_uart0_rx{vlSymsp->TOP.externalPins_uart0_rx}
    , externalPins_uart0_tx{vlSymsp->TOP.externalPins_uart0_tx}
    , externalPins_mygpio_out{vlSymsp->TOP.externalPins_mygpio_out}
    , externalPins_mygpio_in{vlSymsp->TOP.externalPins_mygpio_in}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VSimTop::VSimTop(const char* _vcname__)
    : VSimTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSimTop::~VSimTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___eval_static(VSimTop___024root* vlSelf);
VL_ATTR_COLD void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf);
VL_ATTR_COLD bool VSimTop___024root___eval_stl(VSimTop___024root* vlSelf, CData/*0:0*/ firstIteration);
void VSimTop___024root___eval_sample(VSimTop___024root* vlSelf);
bool VSimTop___024root___eval_ico(VSimTop___024root* vlSelf, CData/*0:0*/ firstIteration);
bool VSimTop___024root___eval_act(VSimTop___024root* vlSelf);
bool VSimTop___024root___eval_inact(VSimTop___024root* vlSelf);
bool VSimTop___024root___eval_nba(VSimTop___024root* vlSelf);
bool VSimTop___024root___eval_obs(VSimTop___024root* vlSelf);
bool VSimTop___024root___eval_react(VSimTop___024root* vlSelf);
void VSimTop___024root___eval_postponed(VSimTop___024root* vlSelf);
VL_ATTR_COLD void VSimTop___024root___eval_final(VSimTop___024root* vlSelf);
VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__stl(VSimTop___024root* vlSelf);
VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__ico(VSimTop___024root* vlSelf);
VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__act(VSimTop___024root* vlSelf);
VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__nba(VSimTop___024root* vlSelf);
VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__obs(VSimTop___024root* vlSelf);
VL_ATTR_COLD void VSimTop___024root___eval_dump_triggers__react(VSimTop___024root* vlSelf);

void VSimTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimTop::eval_step\n"); );
    m_evalLoop.eval();
}

void VSimTop::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    VSimTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void VSimTop::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VSimTop::evalStatic() {
    VSimTop___024root___eval_static(&(vlSymsp->TOP));
}

void VSimTop::evalInitial() {
    VSimTop___024root___eval_initial(&(vlSymsp->TOP));
}

bool VSimTop::evalStl(bool firstIteration) {
    return VSimTop___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void VSimTop::evalSample() {
    VSimTop___024root___eval_sample(&(vlSymsp->TOP));
}

bool VSimTop::evalIco(bool firstIteration) {
    return VSimTop___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool VSimTop::evalAct() {
    return VSimTop___024root___eval_act(&(vlSymsp->TOP));
}

bool VSimTop::evalInact() {
    return VSimTop___024root___eval_inact(&(vlSymsp->TOP));
}

bool VSimTop::evalNba() {
    return VSimTop___024root___eval_nba(&(vlSymsp->TOP));
}

bool VSimTop::evalObs() {
    return VSimTop___024root___eval_obs(&(vlSymsp->TOP));
}

bool VSimTop::evalReact() {
    return VSimTop___024root___eval_react(&(vlSymsp->TOP));
}

void VSimTop::evalPostponed() {
    VSimTop___024root___eval_postponed(&(vlSymsp->TOP));
}

void VSimTop::evalFinal() {
    VSimTop___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSimTop::dumpTriggersStl() {
    VSimTop___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSimTop::dumpTriggersIco() {
    VSimTop___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSimTop::dumpTriggersAct() {
    VSimTop___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSimTop::dumpTriggersNba() {
    VSimTop___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSimTop::dumpTriggersObs() {
    VSimTop___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void VSimTop::dumpTriggersReact() {
    VSimTop___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool VSimTop::eventsPending() { return false; }

uint64_t VSimTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSimTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSimTop::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSimTop::hierName() const { return vlSymsp->name(); }
const char* VSimTop::modelName() const { return "VSimTop"; }
unsigned VSimTop::threads() const { return 1; }
void VSimTop::prepareClone() const { contextp()->prepareClone(); }
void VSimTop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VSimTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VSimTop___024root__trace_decl_types(VerilatedVcd* tracep);

void VSimTop___024root__trace_init_top(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VSimTop___024root__trace_decl_types(tracep);
    VSimTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSimTop___024root__trace_register(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimTop::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSimTop::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 698);
    VSimTop___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
