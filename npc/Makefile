TOPNAME = top
# NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build --cc --trace  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)   

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))  

# SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp) 
# $(SRC_AUTO_BIND): $(NXDC_FILES)
# 	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@ 

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v") # 所有.v文件 即你编写的verilog文件
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp") 
# 所有c++文件，其实就是sim_main.cpp和auto_bind.cpp
#CSRCS += $(SRC_AUTO_BIND)


#include $(NVBOARD_HOME)/scripts/nvboard.mk 


INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -I /home/huang/ysyx-workbench/nemu/tools/capstone/repo/include -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -L /home/huang/ysyx-workbench/nemu/tools/capstone/repo/ -lcapstone -lSDL2 -lSDL2_image


$(BIN): $(VSRCS) $(CSRCS) #$(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
all: default
  


sim: $(BIN)
	@$(call git_commit, "sim RTL") 
	@echo "Running simulation with git commit..."
	./build/top +trace  

run: $(BIN)
# 	@if [ -z "$(IMAGE)" ];then \
# 		echo "Error: 请通过 'IMAGE=xxx.bin' 指定镜像文件路径new"; \
# 		exit 1;\
# 	fi
	./$(BIN) $(IMAGE) +trace
	
clean:
	rm -rf $(BUILD_DIR) wave.vcd

.PHONY: default all clean  sim  # 添加sim到伪目标列表


