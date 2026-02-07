#include <am.h>

#define DEVICE_BASE  0xa0000000
#define SERIAL_PORT       (DEVICE_BASE + 0x00003f8)
#define RTC_ADDR            (DEVICE_BASE + 0x0000048)

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = *(volatile uint32_t *)(RTC_ADDR + 4);
  uptime->us <<=32;
  uptime->us += *(volatile uint32_t *)(RTC_ADDR);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
