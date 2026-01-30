# Makefile for AbstractMachine Kernels and Libraries

### *Get a more readable version of this Makefile* by `make html` (requires python-markdown)
html:
	cat Makefile | sed 's/^\([^#]\)/    \1/g' | markdown_py > Makefile.html
.PHONY: html

## 1. Basic Setup and Checks

#顶层 Makefile 开头会处理 MAKECMDGOALS、打印构建信息，并做若干检查：
#会检查 $(AM_HOME)/am/include/am.h 是否存在（确认 AM_HOME 指向正确的 repo）。
#会列出 $(AM_HOME)/scripts/*.mk 中支持的 ARCH（把这些名称放到 ARCHS），并检查你传入的 ARCH 是否在支持列表里。如果不在，会报错退出。
#最关键：把 ARCH 拆分为 ISA 与 PLATFORM：
#ARCH_SPLIT = $(subst -, ,$(ARCH))
#ISA        = $(word 1,$(ARCH_SPLIT))
#PLATFORM   = $(word 2,$(ARCH_SPLIT))
#所以 ARCH=riscv32-nemu → ISA=riscv32、PLATFORM=nemu。

### Default to create a bare-metal kernel image
ifeq ($(MAKECMDGOALS),)
  MAKECMDGOALS  = image
  .DEFAULT_GOAL = image
endif
#如果没有指定任何目标,（即make直接运行，没有run/image/clean...），则默认把MAKECMDGOALS设为image，并把默认目标设为image。

### Override checks when `make clean/clean-all/html`
ifeq ($(findstring $(MAKECMDGOALS),clean|clean-all|html),)#目标集合 MAKECMDGOALS 中包含 clean、clean-all 或 html 时，跳过下面的检查和报错

### Print build info message
$(info # Building $(NAME)-$(MAKECMDGOALS) [$(ARCH)])#在 Make 执行阶段打印一行信息到标准输出，方便观察

### Check: environment variable `$AM_HOME` looks sane
ifeq ($(wildcard $(AM_HOME)/am/include/am.h),)#若 $(AM_HOME)/am/include/am.h 不存在，就 $(error ...) 报错并停止 make。
  $(error $$AM_HOME must be an AbstractMachine repo)
endif

### Check: environment variable `$ARCH` must be in the supported list
ARCHS = $(basename $(notdir $(shell ls $(AM_HOME)/scripts/*.mk)))#最终是一个空格分隔的可选 ARCH 名称集合,如riscv32-nemu.
ifeq ($(filter $(ARCHS), $(ARCH)), )#$(filter $(ARCHS), $(ARCH))：如果 $(ARCH) 在 ARCHS 中则会返回该值，否则返回空。
  $(error Expected $$ARCH in {$(ARCHS)}, Got "$(ARCH)")
endif

### Extract instruction set architecture (`ISA`) and platform from `$ARCH`. Example: `ARCH=x86_64-qemu -> ISA=x86_64; PLATFORM=qemu`
ARCH_SPLIT = $(subst -, ,$(ARCH))#把 - 替换为空格，把 riscv32-nemu 变成 riscv32 nemu（两个“词”）
ISA        = $(word 1,$(ARCH_SPLIT))#riscv32
PLATFORM   = $(word 2,$(ARCH_SPLIT))#nemu

### Check if there is something to build
ifeq ($(flavor SRCS), undefined)#flavor 是 GNU make 的内置函数，$(flavor SRCS) 返回变量 SRCS 的类型／赋值方式
  $(error Nothing to build)
endif

### Checks end here
endif

## 2. General Compilation Targets

### Create the destination directory (`build/$ARCH`)
#第一部分：设置构建目录
WORK_DIR  = $(shell pwd)#/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/
DST_DIR   = $(WORK_DIR)/build/$(ARCH)#这里会存放所有编译之后的.o 文件。如果 ARCH是riscv32-nemuDST_DIR = /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/riscv32-nemu
$(shell mkdir -p $(DST_DIR))#确保 DST_DIR 目录存在。如果目录不存在，mkdir -p 会创建它

### Compilation targets (a binary image or archive)
IMAGE_REL = build/$(NAME)-$(ARCH)#假设 NAME=dummy，ARCH=riscv32-nemu,IMAGE_REL:build/dummy-riscv32-nemu
IMAGE     = $(abspath $(IMAGE_REL))#绝对路径 /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32-nemu
ARCHIVE   = $(WORK_DIR)/build/$(NAME)-$(ARCH).a#打包库时生成的.a,（archive 模式才会用）

### Collect the files to be linked: object files (`.o`) and libraries (`.a`)
OBJS      = $(addprefix $(DST_DIR)/, $(addsuffix .o, $(basename $(SRCS))))#/home/.../abstract-machine/build/riscv32-nemu/tests/dummy.o这些就是后面编译任务的 .o 文件输出位置
LIBS     := $(sort $(LIBS) am klib) # lazy evaluation ("=") causes infinite recursions
LINKAGE   = $(OBJS)  # library archives are added by LIB_TEMPLATE below
#LINKAGE = $(OBJS),LINKAGE 开始只有.o文件,例如：/build/riscv32-nemu/tests/dummy.o 
#后面AM会用LIB_TEMPLATE动态加入$AM_HOME/am/build/am-riscv32-nemu.a,$AM_HOME/klib/build/klib-riscv32-nemu.a.
#所以最终：LINKAGE =    dummy.o     am-riscv32-nemu.a       klib-riscv32-nemu.a     这是最后链接 ELF 时全部要参与链接的东西

## 3. General Compilation Flags
#这是 交叉编译 的标准写法，用来编译非本机架构的程序    在 x86 电脑上编译给 RISC-V 或 MIPS
### (Cross) compilers, e.g., mips-linux-gnu-g++
AS        = $(CROSS_COMPILE)gcc
CC        = $(CROSS_COMPILE)gcc
CXX       = $(CROSS_COMPILE)g++
LD        = $(CROSS_COMPILE)ld
AR        = $(CROSS_COMPILE)ar
OBJDUMP   = $(CROSS_COMPILE)objdump
OBJCOPY   = $(CROSS_COMPILE)objcopy
READELF   = $(CROSS_COMPILE)readelf

### Compilation flags
INC_PATH += $(WORK_DIR)/include $(addsuffix /include/, $(addprefix $(AM_HOME)/, $(LIBS)))
INCFLAGS += $(addprefix -I, $(INC_PATH))#gcc 看到 -I 才会把这个路径当成 include 搜索路径
#$(WORK_DIR)/include  /home/ysys/am/include      AM中通常有多个库，例如：LIBS = klib klibtest $(addprefix $(AM_HOME)/, $(LIBS))
#$(addprefix $(AM_HOME)/, $(LIBS))生成：   /home/ysys/am/klib     /home/ysys/am/klibtest
#再用 addsuffix 加 /include/   /home/ysys/am/klib/include/   /home/ysys/am/klibtest/include/
ARCH_H := arch/$(ARCH).h
CFLAGS   += -O2 -MMD -Wall -Werror $(INCFLAGS) \
            -D__ISA__=\"$(ISA)\" -D__ISA_$(shell echo $(ISA) | tr a-z A-Z)__ \
            -D__ARCH__=$(ARCH) -D__ARCH_$(shell echo $(ARCH) | tr a-z A-Z | tr - _) \
            -D__PLATFORM__=$(PLATFORM) -D__PLATFORM_$(shell echo $(PLATFORM) | tr a-z A-Z | tr - _) \
            -DARCH_H=\"$(ARCH_H)\" \
            -fno-asynchronous-unwind-tables -fno-builtin -fno-stack-protector \
            -Wno-main -U_FORTIFY_SOURCE -fvisibility=hidden
CXXFLAGS +=  $(CFLAGS) -ffreestanding -fno-rtti -fno-exceptions
ASFLAGS  += -MMD $(INCFLAGS)
LDFLAGS  += -z noexecstack $(addprefix -T, $(LDSCRIPTS))
##-D__ISA_$(shell echo $(ISA) | tr a-z A-Z)__ \    等价于     define __ISA_RISCV32__ 1 将指令集架构的名称转换为大写
## 4. Arch-Specific Configurations

### Paste in arch-specific configurations (e.g., from `scripts/x86_64-qemu.mk`)
-include $(AM_HOME)/scripts/$(ARCH).mk    #/home/huang/ysyx-workbench/abstract-machine/scripts/riscv32-nemu.mk

## 5. Compilation Rules

### Rule (compile): a single `.c` -> `.o` (gcc)
$(DST_DIR)/%.o: %.c
	@mkdir -p $(dir $@) && echo + CC $<
	@$(CC) -std=gnu11 $(CFLAGS) -c -o $@ $(realpath $<)

### Rule (compile): a single `.cc` -> `.o` (g++)
$(DST_DIR)/%.o: %.cc
	@mkdir -p $(dir $@) && echo + CXX $<
	@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $(realpath $<)

### Rule (compile): a single `.cpp` -> `.o` (g++)
$(DST_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@) && echo + CXX $<
	@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $(realpath $<)

### Rule (compile): a single `.S` -> `.o` (gcc, which preprocesses and calls as)
$(DST_DIR)/%.o: %.S
	@mkdir -p $(dir $@) && echo + AS $<
	@$(AS) $(ASFLAGS) -c -o $@ $(realpath $<)

ifeq ($(MAKECMDGOALS),archive)
### Rule (archive): objects (`*.o`) -> `ARCHIVE.a` (ar)
$(ARCHIVE): $(OBJS)
	@echo + AR "->" $(shell realpath $@ --relative-to .)
	@$(AR) rcs $@ $^
else
# $(1): library name
define LIB_TEMPLATE =
$$(AM_HOME)/$(1)/build/$(1)-$$(ARCH).a: force
	@$$(MAKE) -s -C $$(AM_HOME)/$(1) archive
LINKAGE += $$(AM_HOME)/$(1)/build/$(1)-$$(ARCH).a
endef

### Rule (recursive make): build a dependent library (am, klib, ...)
$(foreach lib, $(LIBS), $(eval $(call LIB_TEMPLATE,$(lib))))
endif

### Rule (link): objects (`*.o`) and libraries (`*.a`) -> `IMAGE.elf`, the final ELF binary to be packed into image (ld)
$(IMAGE).elf: $(LINKAGE) $(LDSCRIPTS)
	@echo \# Creating image [$(ARCH)]
	@echo + LD "->" $(IMAGE_REL).elf
ifneq ($(filter $(ARCH),native),)
	@$(CXX) -o $@ -Wl,--whole-archive $(LINKAGE) -Wl,-no-whole-archive $(LDFLAGS_CXX)
else
	@$(LD) $(LDFLAGS) -o $@ --start-group $(LINKAGE) --end-group
endif

### Rule (`#include` dependencies): paste in `.d` files generated by gcc on `-MMD`
-include $(addprefix $(DST_DIR)/, $(addsuffix .d, $(basename $(SRCS))))

## 6. Miscellaneous

### Build order control
image: image-dep
archive: $(ARCHIVE)
image-dep: $(IMAGE).elf
.PHONY: image image-dep archive run

### Force to rebuild a rule
force:
.PHONY: force

### Clean a single project (remove `build/`)
clean:
	rm -rf Makefile.html $(WORK_DIR)/build/
.PHONY: clean

### Clean all sub-projects within depth 2 (and ignore errors)
CLEAN_ALL = $(dir $(shell find . -mindepth 2 -name Makefile))
clean-all: $(CLEAN_ALL) clean
$(CLEAN_ALL):
	-@$(MAKE) -s -C $@ clean
.PHONY: clean-all $(CLEAN_ALL)
