#include "uart.h"

int main(void)
{
	int A ;
	uart_init();
	while(1){
		uart_write('Y');
		for(int i=0;i<180000;++i){}
		A = uart_read();
	}
	

}

