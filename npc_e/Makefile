SOC ?= 1
TOPNAME = SimTop
YSYXSOC_HOME ?= $(abspath ../ysyxSoC)
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build --cc --trace  \
				-O3 --x-assign fast --x-initial fast --noassert

IVERILOG ?= iverilog
IVERILOG_VPI ?= iverilog-vpi
VVP ?= vvp
IVERILOG_DIR := $(abspath ./iverilog)
IVERILOG_BUILD_DIR ?= ./build-iverilog
IVERILOG_VVP_FILE := $(IVERILOG_BUILD_DIR)/npc.vvp
IVERILOG_VPI_MODULE := $(IVERILOG_BUILD_DIR)/pmem_vpi.vpi
IVERILOG_VSRCS := $(shell find $(abspath ./vsrc) -name '*.v') \
				$(IVERILOG_DIR)/iverilog_top.v
IVERILOG_IMAGE ?= $(abspath ../am-kernels/tests/cpu-tests/build/dummy-minirv-npc.bin)
IVERILOG_MAX_CYCLES ?= 1000000000
IVERILOG_WAVE_CYCLES ?= 5000
IVERILOG_RUN_ARGS ?=

ifeq ($(SOC),1)
TOPNAME = SimTop
BUILD_DIR ?= ./build-soc
SOC_IMAGE ?= $(if $(IMAGE),$(IMAGE),$(YSYXSOC_HOME)/ready-to-run/minirv/hello-minirv-ysyxsoc.bin)
SOC_RUN_CYCLES ?= 1000000000000

VERILATOR_CFLAGS += --timescale 1ns/1ns --no-timing -sv \
				-D__VERILOG__ -DPDK_BEHAV -D__UART_TO_CONSOLE__ \
				-I$(YSYXSOC_HOME)/perip/uart16550/rtl \
				-I$(YSYXSOC_HOME)/perip/spi/rtl

SOC_PERIP_VSRCS := $(shell find $(YSYXSOC_HOME)/perip -type f \( -name '*.v' -o -name '*.sv' \))
VSRCS := $(shell find $(abspath ./vsrc) -name '*.v' ! -name 'top.v') \
		$(YSYXSOC_HOME)/ready-to-run/minirv/ElaborateTop.v \
		$(SOC_PERIP_VSRCS)
SRC_AUTO_BIND := $(abspath $(BUILD_DIR)/auto_bind.cpp)
CSRCS := $(abspath ./csrc/npc-main.cpp) $(SRC_AUTO_BIND)
CXXFLAGS += -DYSYXSOC
else
# SimpleBus 延迟测试参数，可在 make 命令行覆盖。
IFU_MEM_LATENCY ?= 1
LSU_MEM_LATENCY ?= 1
IFU_MEM_RANDOM_DELAY ?= 0
LSU_MEM_RANDOM_DELAY ?= 0
IFU_RANDOM_REQ_DELAY ?= 0
LSU_RANDOM_REQ_DELAY ?= 0
MAX_MEM_LATENCY ?= 20
MAX_REQ_DELAY ?= 3
VERILATOR_CFLAGS += -GIFU_MEM_LATENCY=$(IFU_MEM_LATENCY) \
				-GLSU_MEM_LATENCY=$(LSU_MEM_LATENCY) \
				-GIFU_MEM_RANDOM_DELAY=$(IFU_MEM_RANDOM_DELAY) \
				-GLSU_MEM_RANDOM_DELAY=$(LSU_MEM_RANDOM_DELAY) \
				-GIFU_RANDOM_REQ_DELAY=$(IFU_RANDOM_REQ_DELAY) \
				-GLSU_RANDOM_REQ_DELAY=$(LSU_RANDOM_REQ_DELAY) \
				-GMAX_MEM_LATENCY=$(MAX_MEM_LATENCY) \
				-GMAX_REQ_DELAY=$(MAX_REQ_DELAY)

BUILD_DIR ?= ./build

# project source
VSRCS := $(shell find $(abspath ./vsrc) -name '*.v')
CSRCS := $(shell find $(abspath ./csrc) -name '*.c' -o -name '*.cc' -o -name '*.cpp')
endif

OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)   

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))  

ifeq ($(SOC),1)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
endif


include $(NVBOARD_HOME)/scripts/nvboard.mk


INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
ifeq ($(SOC),0)
CXXFLAGS += -I /home/huang/ysyx-workbench/nemu/tools/capstone/repo/include
LDFLAGS += -L /home/huang/ysyx-workbench/nemu/tools/capstone/repo/ -lcapstone -lSDL2 -lSDL2_image -lreadline
endif


# Kconfig 配置
KCONFIG_DIR    := ./Config
KCONFIG_CONF   := $(KCONFIG_DIR)/.config
KCONFIG_HEADER := $(KCONFIG_DIR)/auto.conf.h

# $(shell mkdir -p $(BUILD_DIR))
# $(shell mkdir -p $(KCONFIG_DIR))

# menuconfig 规则
menuconfig:
	@mkdir -p $(KCONFIG_DIR)
	cd $(KCONFIG_DIR) && kconfig-mconf ../Kconfig

# auto.conf.h 由 .config 自动生成
$(KCONFIG_HEADER): $(KCONFIG_CONF)
	@echo "// Auto generated header" > $@
	@grep -E '^CONFIG_' $(KCONFIG_CONF) | sed 's/^\(.*\)=y$$/#define \1 1/' >> $@

$(BIN): $(VSRCS) $(CSRCS) $(KCONFIG_HEADER) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE) \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
all: default
  

ifeq ($(SOC),1)
sim: $(BIN)
	@$(call git_commit, "sim RTL")
	@echo "Running simulation with git commit..."
	$(BIN) $(SOC_IMAGE) $(SOC_RUN_CYCLES)

run: $(BIN)
	$(BIN) $(SOC_IMAGE) $(SOC_RUN_CYCLES)
else
sim: $(BIN)
	@$(call git_commit, "sim RTL")
	@echo "Running simulation with git commit..."
	$(BIN) +trace

run: $(BIN)
	./$(BIN) $(IMAGE) 
endif

$(IVERILOG_VPI_MODULE): $(IVERILOG_DIR)/pmem_vpi.c
	@mkdir -p $(IVERILOG_BUILD_DIR)
	cd $(IVERILOG_BUILD_DIR) && $(IVERILOG_VPI) $(abspath $<)

$(IVERILOG_VVP_FILE): $(IVERILOG_VSRCS)
	@mkdir -p $(IVERILOG_BUILD_DIR)
	$(IVERILOG) -g2012 -Wall -Wno-timescale -s iverilog_top -o $@ $(IVERILOG_VSRCS)

iverilog-build: $(IVERILOG_VPI_MODULE) $(IVERILOG_VVP_FILE)

iverilog-run: iverilog-build
	$(VVP) -M$(abspath $(IVERILOG_BUILD_DIR)) -mpmem_vpi \
		$(abspath $(IVERILOG_VVP_FILE)) \
		+IMAGE=$(abspath $(IVERILOG_IMAGE)) \
		+MAX_CYCLES=$(IVERILOG_MAX_CYCLES) $(IVERILOG_RUN_ARGS)

iverilog-wave: IVERILOG_RUN_ARGS += +WAVE +WAVE_CYCLES=$(IVERILOG_WAVE_CYCLES)
iverilog-wave: iverilog-run
	
clean:
	rm -rf $(BUILD_DIR) $(IVERILOG_BUILD_DIR) wave.vcd

.PHONY: default all clean sim iverilog-build iverilog-run iverilog-wave
