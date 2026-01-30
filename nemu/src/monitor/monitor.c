/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm();

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  Log("Exercise: Please remove me in the source code and compile NEMU again.");
  //assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;
static char *elf_file = NULL;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size 如果你没有在命令行传入镜像文件，就使用内置的默认程序（大小 4096 字节）
  }

  FILE *fp = fopen(img_file, "rb");//以“二进制模式”打开文件
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  //这是标准 C 获取文件大小的套路,fseek(fp, 0, SEEK_END) → 把文件指针跳到末尾,ftell(fp) → 返回当前位置 = 文件的字节大小.
  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);//把文件指针挪回开头,因为刚才为了获取文件大小，我们移动到了文件尾，现在要回到头部才能读
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);//fread()是C标准库函数,用来：从文件读数据到内存,返回“成功读了多少块”.把镜像文件一次性读 size 字节到 guest 内存里，从 RESET_VECTOR 这个地址开始写入。
  assert(ret == 1);

  fclose(fp);
  return size;//这个 size 会传给 difftest，让 diff-test 知道你的程序大小
}//作用：把镜像文件（你的程序）读到 NEMU 的模拟内存里

static int parse_args(int argc, char *argv[]) {//是一个用于解析命令行参数的函数
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"ftrace"   , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {//: 就代表“这个选项需要一个参数”
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;//收到 -p 1234 或 --port 1234 optarg是刚刚解析出来的参数的值（这里是字符串 "1234"）sscanf 用来把字符串转成整数 存到变量difftest_port
      case 'l': log_file = optarg; break;//optarg 是解析出来的参数的值,下面的同理
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--ftrace=FILE        ELF_FILE to log\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}
void parse_elf(const char *elf_file);
void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);
  printf("elf -- >%s\n", elf_file);
  /* Set random seed. */
  parse_elf(elf_file);
  
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();//本质上是：加载程序 → 初始化 CPU → 准备开始执行
//void init_isa() {
//   /* Load built-in image. */
//   memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

//   /* Initialize this virtual computer system. */
//   restart();
// }
// 这个函数做两件事：
// 1. 把内建的镜像（img 数组）复制到模拟内存的 reset 地址处
// 就像开机时把“系统镜像”加载到内存里。
// 2. 调用 restart() 初始化 CPU 寄存器、PC 等，让模拟器进入“上电状态”。

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();
  //printf("img_size = %ld\n",img_size);
  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm());

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
