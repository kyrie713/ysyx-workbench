#include <nvboard.h>
#include "VSimTop.h"

void nvboard_bind_all_pins(VSimTop* top) {
	nvboard_bind_pin( &top->externalPins_uart0_tx, 1, UART_TX);
	nvboard_bind_pin( &top->externalPins_uart0_rx, 1, UART_RX);
	nvboard_bind_pin( &top->externalPins_mygpio_out, 16, LD15, LD14, LD13, LD12, LD11, LD10, LD9, LD8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}
