IVERILOG ?= iverilog
IVERILOG_VPI ?= iverilog-vpi
VVP ?= vvp

NETLIST_GZ ?= /home/huang/ecc/ysyx_25080202/runs/default/Synthesis_yosys/output/ysyx_25080202_Synthesis_sim.v.gz
PDK_ROOT ?= /home/huang/icsprout55-pdk

STD_CELL_ROOT := $(PDK_ROOT)/IP/STD_cell/ics55_LLSC_H7C_V1p10C100
CELL_VSRCS := \
	$(STD_CELL_ROOT)/ics55_LLSC_H7CH/verilog/ics55_LLSC_H7CH.v \
	$(STD_CELL_ROOT)/ics55_LLSC_H7CR/verilog/ics55_LLSC_H7CR.v \
	$(STD_CELL_ROOT)/ics55_LLSC_H7CL/verilog/ics55_LLSC_H7CL.v

BUILD_DIR ?= build-iverilog
NETLIST_V := $(BUILD_DIR)/$(notdir $(basename $(NETLIST_GZ)))
VVP_FILE := $(BUILD_DIR)/netlist.vvp
VPI_MODULE := $(BUILD_DIR)/netlist_pmem_vpi.vpi
IMAGE ?= $(abspath ../../../am-kernels/tests/cpu-tests/build/load-store-minirv-npc.bin)
MAX_CYCLES ?= 1000000000
IVERILOG_RUN_ARGS ?=

$(NETLIST_V): $(NETLIST_GZ)
	@mkdir -p $(BUILD_DIR)
	gunzip -c $< > $@

$(VPI_MODULE): netlist_pmem_vpi.c
	@mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && $(IVERILOG_VPI) $(abspath $<)

$(VVP_FILE): $(NETLIST_V) netlist_iverilog_top.v $(CELL_VSRCS)
	@mkdir -p $(BUILD_DIR)
	$(IVERILOG) -g2012 -Dfunctional -Wall -Wno-timescale \
		-s netlist_iverilog_top -o $@ \
		$(abspath netlist_iverilog_top.v) \
		$(abspath $(NETLIST_V)) \
		$(CELL_VSRCS)

build: $(VPI_MODULE) $(VVP_FILE)

run: build
	$(VVP) -M$(abspath $(BUILD_DIR)) -mnetlist_pmem_vpi \
		$(abspath $(VVP_FILE)) \
		+IMAGE=$(abspath $(IMAGE)) \
		+MAX_CYCLES=$(MAX_CYCLES) $(IVERILOG_RUN_ARGS)

wave: IVERILOG_RUN_ARGS += +WAVE
wave: run

clean:
	rm -rf $(BUILD_DIR)

.PHONY: build run wave clean
