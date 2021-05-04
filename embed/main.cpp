#include "uart.h"

int main(void)
{
	uart_init();
	while(1){
		uart_write('Y');
		for(int i=0;i<180000;++i){}
	}

}

