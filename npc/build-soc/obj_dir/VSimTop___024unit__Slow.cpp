// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop__pch.h"


VSimTop___024unit::VSimTop___024unit() = default;
VSimTop___024unit::~VSimTop___024unit() = default;

void VSimTop___024unit::ctor(VSimTop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VSimTop___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VSimTop___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
