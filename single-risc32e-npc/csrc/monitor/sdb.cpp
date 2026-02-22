
#include <readline/readline.h>
#include <readline/history.h>
#include "../include/isa_def.h"
#include <stdlib.h>
#include <stdbool.h>
#include "../../Config/auto.conf.h"

void cpu_exec(uint64_t n);
#ifdef CONFIG_BATCH_MODE
    static int is_batch_mode = true;
#else
    static int is_batch_mode = false;
#endif
extern "C" int pmem_read(int raddr);
void init_regex();
void init_wp_pool();
void scan_registers();
void display_wp();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;
  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");
  if (line_read && *line_read) {
    add_history(line_read);
  }
  return line_read;
}



static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  npc_state.state = NPC_QUIT;
  return -1;
}

static int cmd_help(char *args);
static int cmd_si(char *args){
  char *arg = strtok(NULL, " ");
  int i = 0;
  if(arg == NULL)
	{
		cpu_exec(1);
	}
  else 
  {
    i = strtol(arg,NULL,10);
    cpu_exec(i);   
  }
  return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL, " ");
  if(strcmp(arg,"r") == 0){
    scan_registers();
  }
//   else if( strcmp(arg,"w")==0)
//   {
//     display_wp();
    
//   }
  return 0;
}
static int cmd_x(char *args){
  char *argone = strtok(NULL," ");
  char *argtwo = strtok(NULL," ");
  int i = strtol(argone,NULL,10);
  uint32_t address = strtol(argtwo,NULL,16);
  
  for(int j = 0;j<i;j++)
  {
    printf("0x%08x: 0x%08x\n",address+j*4,pmem_read(address+j*4));
  }
  return 0;
}


static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Execute the program step by step and pause after executing N instructions. If N is not specified, the default value is 1",cmd_si},
  { "info", "Print the program state", cmd_info},
  { "x", "scanf men", cmd_x},
};


#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

// void sdb_set_batch_mode() {
//   is_batch_mode = true;
// }

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif
    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

