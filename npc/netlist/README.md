# NPC 仿真运行说明

本文档记录当前 NPC 工程中四种常用仿真方式的运行方法：

1. minirv 网表 Verilator 功能仿真（E 阶段签核包）
2. minirv 网表 Icarus 四值仿真（E 阶段签核包）
3. RV32E 接入 ysyxSoC RTL 功能回归（当前 D 阶段）
4. RV32E RTL 仿真（当前 D 阶段默认入口）

> 签核边界：第 2/3 节使用的是 E 阶段 `minirv` 网表和镜像；第 4 节使用当前 RV32E 核，并接入与 `minirv` 共用的 ysyxSoC 平台，因此第 4 节结果可用于 RV32E 的 SoC 功能回归。当前 D 阶段的最终网表签核仍必须在重新生成 RV32E 综合网表后，使用该网表重新执行网表 Verilator、Icarus 和时序检查。

> D 阶段 RV32E 核不实现 CTE/异常处理：`mstatus`、`mtvec`、`mepc`、`mcause` 及 `ecall`/`mret` 控制路径已移除。因此本阶段只把普通 RV32E 指令、MMIO、`mcycle/mcycleh` 计时和 `ebreak` 结束作为支持范围；依赖 CTE 的 `yield-os`、`thread-os` 或中断/异常测试不能作为通过依据。

除特别说明外，以下命令都可以在任意目录执行，因为命令中使用了绝对路径。

## 1. 环境准备

先加载 OSS CAD Suite 环境：

~~~bash
source /home/huang/oss-cad-suite/environment
~~~

如果 AM_HOME 和 NVBOARD_HOME 还没有设置，再执行：

~~~bash
export AM_HOME=/home/huang/ysyx-workbench/abstract-machine
export NVBOARD_HOME=/home/huang/ysyx-workbench/nvboard
~~~

当前默认综合网表为：

~~~text
/home/huang/ecc/ysyx_25080202/runs/default/Synthesis_yosys/output/ysyx_25080202_Synthesis_sim.v.gz
~~~

如果重新综合生成了新的网表，可以通过 NETLIST_GZ=... 指定新文件。

## 2. Verilator 网表仿真

### 2.1 编译网表仿真程序

进入 NPC 工程目录：

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist build
~~~

该命令会自动完成以下工作：

- 解压 Synthesis_sim.v.gz
- 加入三份 ICsprout55 标准单元行为模型
- 使用 --no-timing 和 -Dfunctional 进行功能仿真
- 生成 netlist/build/netlist_sim

### 2.2 运行 load-store

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/load-store-minirv-npc.bin \
  MAX_CYCLES=1000000
~~~

### 2.3 运行 microbench

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/benchmarks/microbench/build/microbench-minirv-npc.bin \
  MAX_CYCLES=100000000
~~~

### 2.4 运行 hello

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/kernels/hello/build/hello-minirv-npc.bin
~~~

正常结果应包括程序输出、HIT GOOD TRAP (ebreak fetched)，并且命令返回 0。

当前综合网表是按照 SoC 复位地址 0x30000000 生成的，而 minirv-npc 镜像入口为 0x80000000。网表仿真内存模型将这两个地址映射到同一份内存，专门用于兼容当前综合网表；这不会修改 CPU RTL。

### 2.5 更换综合网表或 PDK 路径

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist clean
make -C netlist run \
  NETLIST_GZ=/path/to/xxx_Synthesis_sim.v.gz \
  PDK_ROOT=/path/to/icsprout55-pdk \
  IMAGE=/path/to/program.bin
~~~

## 3. Icarus 网表四值仿真

Icarus 网表仿真目录为：

~~~text
/home/huang/ysyx-workbench/npc/netlist/iverilog
~~~

### 3.1 编译

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog build
~~~

编译时使用：

- Synthesis_sim.v 网表
- 三份 ICsprout55 标准单元模型
- -g2012
- -Dfunctional
- VPI 访存模块 netlist_pmem_vpi.vpi

标准单元模型中的大量 implicit definition of wire 警告来自 PDK 文件，通常不需要修改 PDK。

### 3.2 运行 load-store

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/load-store-minirv-npc.bin \
  MAX_CYCLES=1000000
~~~

### 3.3 运行 microbench

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/benchmarks/microbench/build/microbench-minirv-npc.bin \
  MAX_CYCLES=100000000
~~~

Icarus 对标准单元网表进行逐事件仿真，速度会比 Verilator 慢很多。测试过程中长时间没有输出是正常现象，只要进程仍在运行即可继续等待。

如果 VPI 检测到 X/Z 地址、写数据或写掩码，会输出 [VPI] 错误并结束仿真。正常结束时应看到：

~~~text
MicroBench PASS
HIT GOOD TRAP (ebreak fetched)
~~~

### 3.4 运行 hello

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/kernels/hello/build/hello-minirv-npc.bin
~~~

## 4. RV32E SoC 入口

当前 `npc` 默认是独立 RV32E 核。SoC 运行统一使用 `riscv32e-ysyxsoc` 架构名；该架构会用 RV32E 编译参数生成 ELF，自动调用 `gen.sh` 封装启动镜像，并运行 `npc/build-soc/SimTop`。

### 4.1 运行 hello

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/kernels/hello
NPC_HEADLESS=1 make ARCH=riscv32e-ysyxsoc run
~~~

桌面环境可以去掉 `NPC_HEADLESS=1`。正常结果应包含 `Hello, AbstractMachine!`、`HIT GOOD TRAP`、退休指令数和 IPC 统计。

### 4.2 运行其他 RV32E 程序

把 `ARCH` 替换为 `riscv32e-ysyxsoc` 即可，例如：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests
NPC_HEADLESS=1 make ARCH=riscv32e-ysyxsoc ALL=load-store run
~~~

每个程序的 SoC 镜像位于其 `build/` 目录，名称形如 `program-riscv32e-ysyxsoc.bin`。

运行全部 CPU 测试（35 项）：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests
NPC_HEADLESS=1 make ARCH=riscv32e-ysyxsoc run
~~~

运行 MicroBench 的正确性规模：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/benchmarks/microbench
NPC_HEADLESS=1 make ARCH=riscv32e-ysyxsoc mainargs=test run
~~~

### 4.3 旧 SoC 镜像（仅历史兼容）

~~~bash
cd /home/huang/ysyx-workbench/npc
make SOC=1 run
~~~

默认镜像为：

~~~text
/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/hello-minirv-ysyxsoc.bin
~~~

### 4.4 旧 SoC 程序（仅历史命令）

例如运行 CPU 测试中的 dummy：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests
make ARCH=minirv-ysyxsoc ALL=dummy run
~~~

运行 CPU 测试中的 load-store：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests
make ARCH=minirv-ysyxsoc ALL=load-store run
~~~

运行 microbench：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/benchmarks/microbench
make ARCH=minirv-ysyxsoc run
~~~

运行 hello kernel：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/kernels/hello
make ARCH=minirv-ysyxsoc run
~~~

这些命令仅适用于旧的 minirv-ysyxsoc 镜像；RV32E 程序请使用 4.1/4.2 的 SoC 入口或下一节的独立入口。

## 5. 运行 RV32E NPC

### 5.1 用 Icarus RTL 流程运行

这是检查 RV32E 镜像和当前 D 阶段 RTL 的四值仿真方式。进入 NPC 目录：

~~~bash
cd /home/huang/ysyx-workbench/npc
make iverilog-run \
  IVERILOG_IMAGE=/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/load-store-riscv32e-npc.bin \
  IVERILOG_MAX_CYCLES=1000000
~~~

运行 hello：

~~~bash
cd /home/huang/ysyx-workbench/npc
make iverilog-run \
  IVERILOG_IMAGE=/home/huang/ysyx-workbench/am-kernels/kernels/hello/build/hello-riscv32e-npc.bin
~~~

运行全部 CPU 测试镜像：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests
for image in build/*-riscv32e-npc.bin; do
  echo "===== Running $image ====="
  make -C ../../../npc iverilog-run \
    IVERILOG_IMAGE="$PWD/$image" || exit 1
done
~~~

### 5.2 通过 AM 的 run 目标运行

也可以在 CPU 测试目录执行：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests
make ARCH=riscv32e-npc ALL=load-store run
~~~

该命令使用 abstract-machine/scripts/riscv32e-npc.mk，并依赖：

~~~make
NPC_BIN ?= /home/huang/ysyx-workbench/npc/build/top
~~~

默认 `make` 会生成 `/home/huang/ysyx-workbench/npc/build/top`，可直接运行 RV32E 镜像；旧 SoC 版本生成的 `build-soc/SimTop` 不能替代它。

### 5.3 RV32E 指令集回归

该回归直接运行当前 D 阶段 RV32E RTL，覆盖 38 个 RV32I 指令测试：

~~~bash
cd /home/huang/ysyx-workbench/riscv-tests
make ARCH=riscv32e-npc TEST_ISA=i \
  ALL='simple add addi and andi auipc beq bge bgeu blt bltu bne jal jalr lb lbu lh lhu lw lui or ori sb sh sll slli slt slti sltiu sltu sra srai srl srli sub sw xor xori' \
  run
~~~

预期结果为 `test list [38 item(s)]`，每项均为 `PASS`。

### 5.4 直接构建和运行当前 RV32E 核

~~~bash
cd /home/huang/ysyx-workbench/npc
make
./build/top /home/huang/ysyx-workbench/am-kernels/kernels/hello/build/hello-riscv32e-npc.bin
~~~

## 6. 查看波形

### 6.1 Icarus RTL 波形

运行指定测试的前 5000 个周期并生成波形：

~~~bash
cd /home/huang/ysyx-workbench/npc
make iverilog-wave \
  IVERILOG_IMAGE=/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/load-store-riscv32e-npc.bin \
  IVERILOG_WAVE_CYCLES=5000
~~~

波形文件：

~~~text
/home/huang/ysyx-workbench/npc/build-iverilog/wave.vcd
~~~

### 6.2 Icarus 网表波形

建议使用较小的 load-store，否则综合网表波形文件可能很大：

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog wave \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/load-store-minirv-npc.bin \
  MAX_CYCLES=1000000
~~~

波形文件：

~~~text
/home/huang/ysyx-workbench/npc/netlist/iverilog/netlist-wave.vcd
~~~

### 6.3 minirv-ysyxsoc SoC 波形

当前 npc-main.cpp 支持通过环境变量开启 SoC 波形：

~~~bash
cd /home/huang/ysyx-workbench/npc
NPC_WAVEFORM=1 make run
~~~

波形文件：

~~~text
/home/huang/ysyx-workbench/npc/wave.vcd
~~~

该流程从程序进入 0x80000000 后开始记录，默认记录 2500 个 SoC 周期。

### 6.4 用 GTKWave 打开

~~~bash
gtkwave /home/huang/ysyx-workbench/npc/netlist/iverilog/netlist-wave.vcd
~~~

Icarus 网表波形中优先查看以下信号：

~~~text
clock
reset
ifu_reqValid
ifu_addr
ifu_respValid
ifu_rdata
lsu_reqValid
lsu_addr
lsu_wen
lsu_wdata
lsu_wmask
lsu_respValid
lsu_rdata
~~~

取指时应观察到 ifu_reqValid 有效后，下一次响应中 ifu_respValid 有效且 ifu_rdata 为指令。数据访问时应观察 lsu_reqValid、lsu_addr、lsu_wen、lsu_wdata 和 lsu_wmask，读操作或写操作完成后对应的 lsu_respValid 应有效。

当前 Verilator 网表程序只开启了 trace 编译支持，没有在 netlist-main.cpp 中默认创建 VCD；查看综合网表波形请使用上面的 Icarus 网表 wave 目标。

## 7. 清理生成物

清理 Verilator 网表仿真：

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist clean
~~~

清理 Icarus 网表仿真：

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog clean
~~~

清理 NPC SoC 和 RTL Icarus 生成物：

~~~bash
cd /home/huang/ysyx-workbench/npc
make clean
~~~
