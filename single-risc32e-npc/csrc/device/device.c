

#include <SDL2/SDL.h>
#include "../include/utils.h"
#include "../include/isa_def.h"
#include "../include/map.h"
#include "../include/common.h"

uint64_t get_system_time_us();
void init_map();
void init_vga();
void init_i8042();
#define TIMER_HZ 60

void send_key(uint8_t, bool);
void vga_update_screen();

void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_system_time_us();
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;

  vga_update_screen();


  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        npc_state.state = NPC_QUIT;
        break;
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
      default: break;
    }
  }

}



void sdl_clear_event_queue() {
  SDL_Event event;
  while (SDL_PollEvent(&event));
}

void init_device() {
  //IFDEF(CONFIG_TARGET_AM, ioe_init());
  init_map();

  //IFDEF(CONFIG_HAS_SERIAL, init_serial());
  //IFDEF(CONFIG_HAS_TIMER, init_timer());
  init_vga();
  init_i8042();

}
