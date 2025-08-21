# Makefile for AbstractMachine Kernels and Libraries

### *Get a more readable version of this Makefile* by `make html` (requires python-markdown)
html:
	cat Makefile | sed 's/^\([^#]\)/    \1/g' | markdown_py > Makefile.html
.PHONY: html

## 1. Basic Setup and Checks

### Default to create a bare-metal kernel image   ifeq 是 Makefile 中的一个条件判断指令，用于检查两个值是否相等。如果相等，则执行 ifeq 块中的内容；如果不相等，则跳过该块。
ifeq ($(MAKECMDGOALS),)
  MAKECMDGOALS  = image
  .DEFAULT_GOAL = image
endif

### Override checks when `make clean/clean-all/html`  如果不包含，则为空
ifeq ($(findstring $(MAKECMDGOALS),clean|clean-all|html),)

### Print build info message   $(info ...)：打印信息到标准输出  $ 符号用于引用变量或函数,和普通文本做区分
$(info # Building $(NAME)-$(MAKECMDGOALS) [$(ARCH)])

### Check: environment variable `$AM_HOME` looks sane    //$(wildcard ...) 是 Makefile 中的一个内置函数，用于检查文件或目录是否存在。如果路径存在，则返回路径,否则，返回空字符串
ifeq ($(wildcard $(AM_HOME)/am/include/am.h),)
  $(error $$AM_HOME must be an AbstractMachine repo)
endif
# $(error ...) 是 Makefile 中的一个内置函数，用于打印错误信息并终止 Makefile 的执行

### Check: environment variable `$ARCH` must be in the supported list
ARCHS = $(basename $(notdir $(shell ls $(AM_HOME)/scripts/*.mk)))
ifeq ($(filter $(ARCHS), $(ARCH)), )
  $(error Expected $$ARCH in {$(ARCHS)}, Got "$(ARCH)")
endif
# $(shell ...) 是 Makefile 中的一个内置函数，用于执行 Shell 命令并捕获其输出。
# notdir 是 Makefile 中的一个内置函数，用于从路径中提取文件名，去掉路径部分。
# basename 函数的作用是从给定的文件名中去掉扩展名，只保留文件的基名,如riscv64.mk，使用后成riscv64
# $(filter ...) 是 Makefile 中的一个内置函数，用于从一个列表中筛选出匹配特定模式的单词。如果有,返回匹配的单词列表。否则，返回空字符串.

### Extract instruction set architecture (`ISA`) and platform from `$ARCH`. Example: `ARCH=x86_64-qemu -> ISA=x86_64; PLATFORM=qemu`
ARCH_SPLIT = $(subst -, ,$(ARCH))
ISA        = $(word 1,$(ARCH_SPLIT))
PLATFORM   = $(word 2,$(ARCH_SPLIT))
# $(subst ...)：这是 Makefile 中的一个内置函数，用于替换字符串中的某些字符。$(subst from,to,text)将 text 中的 from 替换为 to
# 将 $(ARCH) 中的连字符 - 替换为空格，从而将字符串分割成多个单词。
# 第二行代码的作用是提取 $(ARCH_SPLIT) 中的第一个单词，并将其赋值给变量 ISA
# 第三行代码的作用是提取 $(ARCH_SPLIT) 中的第二个单词，并将其赋值给变量 PLATFORM

### Check if there is something to build
ifeq ($(flavor SRCS), undefined)
  $(error Nothing to build)
endif
# $(flavor variable) 是 Makefile 中的一个内置函数，用于检查变量的类型。
# 返回变量的类型，可能的值有：undefined：变量未定义。recursive：变量是递归扩展的。simple：变量是简单扩展的
# 递归扩展:递归扩展的变量在定义时，其值可以包含其他变量的引用。这些引用在变量被使用时才会被展开（即替换为实际值）。因此，递归扩展的变量在使用时会进行多次展开，直到所有引用都被替换为实际值。
# 简单扩展:简单扩展的变量在定义时，其值会立即展开。也就是说，变量的值在定义时就会被替换为实际值，而不是在使用时才展开。

### Checks end here
endif

## 2. General Compilation Targets

### Create the destination directory (`build/$ARCH`)
WORK_DIR  = $(shell pwd)
DST_DIR   = $(WORK_DIR)/build/$(ARCH)
$(shell mkdir -p $(DST_DIR))
# DST_DIR：目标目录（Destination Directory）
# mkdir -p 是一个 Shell 命令，用于创建目录。-p 选项的作用是：如果目录已存在，则不会报错。如果目录的父目录不存在，则会自动创建父目录 

### Compilation targets (a binary image or archive)
IMAGE_REL = build/$(NAME)-$(ARCH)
IMAGE     = $(abspath $(IMAGE_REL))
ARCHIVE   = $(WORK_DIR)/build/$(NAME)-$(ARCH).a
#相对路径是从当前工作目录开始的路径,绝对路径是从文件系统的根目录（/ 或 C:\ 等）开始的完整路径。
#静态库文件（.a 文件）是一个包含多个目标文件（.o 文件）的归档文件，通常用于链接到可执行文件中。
#ARCHIVE：这个变量通常用于表示一个静态库文件的路径。在构建过程中，静态库文件会被生成并放置在这个路径下。

### Collect the files to be linked: object files (`.o`) and libraries (`.a`)
OBJS      = $(addprefix $(DST_DIR)/, $(addsuffix .o, $(basename $(SRCS))))
LIBS     := $(sort $(LIBS) am klib) # lazy evaluation ("=") causes infinite recursions
LINKAGE   = $(OBJS)  # library archives are added by LIB_TEMPLATE below
# $(addsuffix ...) 是一个 Makefile 函数，用于在每个文件名后添加指定的后缀。
# $(addprefix ...) 是一个 Makefile 函数，用于在每个文件名前添加指定的前缀。
# $(sort ...) 是一个 Makefile 函数，用于对列表中的元素进行排序。排序是基于字典顺序的
# := 是 Makefile 中的赋值运算符，表示立即展开。与 = 不同，:= 不会进行递归展开，因此可以避免无限递归的问题。
# A = $(A) foo,这会导致无限递归，因为 A 的值依赖于它自己，Makefile 会不断尝试展开 A，最终导致错误。
# A := $(A) foo,这不会导致无限递归，因为 A 的值在定义时被立即展开一次。如果 A 之前没有定义，那么 $(A) 的值为空，A 的最终值将是 foo。

## 3. General Compilation Flags

### (Cross) compilers, e.g., mips-linux-gnu-g++
AS        = $(CROSS_COMPILE)gcc
CC        = $(CROSS_COMPILE)gcc
CXX       = $(CROSS_COMPILE)g++
LD        = $(CROSS_COMPILE)ld
AR        = $(CROSS_COMPILE)ar
OBJDUMP   = $(CROSS_COMPILE)objdump
OBJCOPY   = $(CROSS_COMPILE)objcopy
READELF   = $(CROSS_COMPILE)readelf
# CROSS_COMPILE：这是一个变量，它的值是一个字符串，通常是一个路径前缀，用于指定交叉编译工具链的工具名称

### Compilation flags
INC_PATH += $(WORK_DIR)/include $(addsuffix /include/, $(addprefix $(AM_HOME)/, $(LIBS)))
INCFLAGS += $(addprefix -I, $(INC_PATH))
# +=：追加值，不会覆盖变量的原有值，而是将新值添加到原有值的末尾

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
# -D 选项用于定义预处理器宏。这些宏在编译过程中会被预处理器使用，通常用于条件编译或传递配置信息。
# -D<宏名>=<宏值>
# echo 用于输出其参数的内容 echo $(ISA) 输出 riscv32
# |：这是一个管道操作符，用于将前一个命令的输出作为下一个命令的输入。
# tr a-z A-Z：这是一个 tr 命令，用于将小写字母转换为大写字母.

## 4. Arch-Specific Configurations

### Paste in arch-specific configurations (e.g., from `scripts/x86_64-qemu.mk`)
-include $(AM_HOME)/scripts/$(ARCH).mk

## 5. Compilation Rules

### Rule (compile): a single `.c` -> `.o` (gcc)
$(DST_DIR)/%.o: %.c
	@mkdir -p $(dir $@) && echo + CC $<
	@$(CC) -std=gnu11 $(CFLAGS) -c -o $@ $(realpath $<)
# %.o 表示目标文件的扩展名是.o %.c 表示源文件的扩展名是.c
# @用于抑制命令的回显 不会将命令本身打印到终端上，只会打印命令的输出 如@echo Hello 输出hello 而不是echo Hello
# $@：这是一个 Makefile 的内置变量，表示当前目标文件的路径。例如，如果目标文件是 build/main.o，那么 $@ 的值是 build/main.o。
# $(dir ...)：这是一个 Makefile 函数，用于提取路径的目录部分。例如，如果 $@ 是 build/main.o，那么 $(dir $@) 的值是 build/
# $<：这是一个 Makefile 的内置变量，表示依赖列表中的第一个依赖项
# $(CC) 是 Makefile 里的一个变量，通常代表 C 语言的编译器。 
# -std=gnu11 告诉编译器使用 GNU 扩展的 C11 标准来编译代码。
# $(CFLAGS) 一个变量，代表编译参数（flags），如 -O2 -Wall 等。通常在 Makefile 顶部定义。
# -c 告诉编译器只编译，不链接。生成的是目标文件（.o 文件），不是可执行文件。
# -o $@ -o：指定输出文件名 $@：自动变量，代表规则的目标文件名。
# $(realpath …)：Makefile 的函数，返回参数的绝对路径。

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
# --relative-to . 这个参数告诉 realpath 输出的路径要相对于当前目录. 
# $(AR) ：这是一个变量，通常代表归档工具（archive tool），在大多数环境下它的值是 ar，即 Unix 下用来创建、修改、提取静态库的工具。
# $^ ：自动变量，代表所有的依赖文件（prerequisites），通常是你要打包进库的 .o 对象文件。

else
# $(1): library name
define LIB_TEMPLATE =
$$(AM_HOME)/$(1)/build/$(1)-$$(ARCH).a: force
	@$$(MAKE) -s -C $$(AM_HOME)/$(1) archive
LINKAGE += $$(AM_HOME)/$(1)/build/$(1)-$$(ARCH).a
endef
#单个 $ ：立即展开（现在就变成变量值）。 两个 $$ ：延迟展开，等到模板被 call 时再处理。

### Rule (recursive make): build a dependent library (am, klib, ...)
$(foreach lib, $(LIBS), $(eval $(call LIB_TEMPLATE,$(lib))))
endif
# $(foreach var, list, do-something)) 对 list 里面的每个元素，都执行一次 do-something，每次用变量 var 代表当前这个元素。
# eval 的意思是让 Makefile 立即把里面的内容当成新的 Makefile 语句来处理，而不是作为普通变量文本。
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
# archive: $(ARCHIVE) 表示目标 archive 依赖于变量 $(ARCHIVE) 的内容。

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
