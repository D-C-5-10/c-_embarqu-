#include "uart.h"
void uart_init(void)
{
 RCC->AHB1ENR |= 0x1;
}