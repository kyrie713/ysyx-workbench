VERILATOR ?= verilator

NETLIST_GZ ?= /home/huang/ecc/ysyx_25080202/runs/default/Synthesis_yosys/output/ysyx_25080202_Synthesis_sim.v.gz
PDK_ROOT ?= /home/huang/icsprout55-pdk

STD_CELL_ROOT := $(PDK_ROOT)/IP/STD_cell/ics55_LLSC_H7C_V1p10C100
CELL_VSRCS := \
	$(STD_CELL_ROOT)/ics55_LLSC_H7CH/verilog/ics55_LLSC_H7CH.v \
	$(STD_CELL_ROOT)/ics55_LLSC_H7CR/verilog/ics55_LLSC_H7CR.v \
	$(STD_CELL_ROOT)/ics55_LLSC_H7CL/verilog/ics55_LLSC_H7CL.v

BUILD_DIR ?= build
OBJ_DIR := $(BUILD_DIR)/obj_dir
NETLIST_V := $(BUILD_DIR)/$(notdir $(basename $(NETLIST_GZ)))
BIN := $(BUILD_DIR)/netlist_sim
IMAGE ?= $(abspath ../../am-kernels/kernels/hello/build/hello-minirv-npc.bin)
MAX_CYCLES ?= 1000000000

VERILATOR_FLAGS := \
	--cc --exe --build --trace \
	--top-module netlist_top \
	--Mdir $(OBJ_DIR) \
	--timescale 1ns/1ns \
	--no-timing \
	-D__VERILATOR__ -Dfunctional \
	-Wno-fatal -Wno-IMPLICIT \
	--x-assign fast --x-initial fast

$(NETLIST_V): $(NETLIST_GZ)
	@mkdir -p $(BUILD_DIR)
	gunzip -c $< > $@

$(BIN): $(NETLIST_V) netlist_top.v netlist-main.cpp netlist-pmem.cpp $(CELL_VSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		$(abspath netlist_top.v) \
		$(abspath $(NETLIST_V)) \
		$(CELL_VSRCS) \
		$(abspath netlist-main.cpp) \
		$(abspath netlist-pmem.cpp) \
		-o $(abspath $(BIN))

build: $(BIN)

run: $(BIN)
	$(BIN) $(IMAGE) $(MAX_CYCLES)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: build run clean
