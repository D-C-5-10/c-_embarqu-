#include "uart.h"
void uart_init(void)
{
	/*******Initialisation*******/
  RCC->AHB1ENR  = 0x1; //enable GPIOA clk
	RCC->APB1ENR = 0x20000; //enable USART2 clk
	/*******configuration*******/
	GPIOA->MODER = 0x00A0; // seting pin 2 and 3 to alternate mode
	GPIOA->AFR[0] |= 0x7700; //Alternate function for usart2 AF7 in AFRL
	USART2->BRR = 0x0683;// 9600 Baud rate (default)
	USART2->CR1 = 0x000C; // enable tx,Rx and 8 bit data 
	USART2->CR2 =0x000;  //1 stop bit
	USART2->CR3 = 0x000; // No flow control
	USART2->CR1 |= 0x2000; // enable USART
}
int uart_write(int ch)
{
	while(!(USART2->SR & 0x0080)){} //wait until tx idle
	USART2->DR = (ch & 0xFF);
	return 1;
}
int uart_read(void)
{
	while(!(USART2->SR & 0x0020)){}
  return USART2->DR ;
}
	