#***************************************************************************************
# Copyright (c) 2014-2024 Zihao Yu, Nanjing University
#
# NEMU is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#          http://license.coscl.org.cn/MulanPSL2
#
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
#
# See the Mulan PSL v2 for more details.
#**************************************************************************************/

-include $(NEMU_HOME)/../Makefile
include $(NEMU_HOME)/scripts/build.mk

include $(NEMU_HOME)/tools/difftest.mk
# -include 如果文件不存在，-include 不会报错，而是会忽略这个文件。这与 include 指令不同，include 会在文件不存在时报错。

compile_git:
	$(call git_commit, "compile NEMU")
$(BINARY):: compile_git
# $(call ...) 是 Makefile 中的一个函数调用，用于调用一个自定义的函数。
# git_commit 是一个自定义函数 compile NEMU" 是传递给 git_commit 函数的参数，表示这次操作的描述信息。

# Some convenient rules

override ARGS ?= --log=$(BUILD_DIR)/nemu-log.txt#由于ARGS已经被定义为 NEMUFLAGS 的值，所以 override 语句并不会改变 ARGS。
override ARGS += $(ARGS_DIFF)
# ?= 条件赋值操作符 如果变量 ARGS 已经被定义,则保持其当前值,如果未被定义，则将其值设置为 --log=$(BUILD_DIR)/nemu-log.txt

# Command to execute NEMU
IMG ?=
NEMU_EXEC := $(BINARY) $(ARGS) $(IMG)
#:= 这是一个立即赋值操作符 ;$(BINARY) NEMU的可执行文件路径;$(ARGS) 运行NEMU时需要传递的参数;$(IMG) 运行NEMU时需要加载的镜像文件路径

run-env: $(BINARY) $(DIFF_REF_SO)

run: run-env
	$(call git_commit, "run NEMU")
	$(NEMU_EXEC)

gdb: run-env
	$(call git_commit, "gdb NEMU")
	gdb -s $(BINARY) --args $(NEMU_EXEC)

clean-tools = $(dir $(shell find ./tools -maxdepth 2 -mindepth 2 -name "Makefile"))
$(clean-tools):
	-@$(MAKE) -s -C $@ clean
clean-tools: $(clean-tools)
clean-all: clean distclean clean-tools

.PHONY: run gdb run-env clean-tools clean-all $(clean-tools)
