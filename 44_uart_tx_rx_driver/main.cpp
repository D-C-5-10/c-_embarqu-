#include "mcal_reg.h"




char uart_read(void);
void uart_write(int ch);

char  msg_ch;
int main()
{
	 /*Enable clock to GPIOA*/
 	mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::ahb1enr,(1U<<0)>::reg_or();
	
	 /*Enable clock to UART2*/
 	mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::apb1enr,(1U<<17)>::reg_or();
	
  /*Configure PA2,PA3 as  ALT pin UART2 TX,RX*/
	mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::gpioa_moder,(0U<<6)>::reg_or();
	mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::gpioa_moder,(1U<<7)>::reg_or();
	
	mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::gpioa_moder,(0U<<4)>::reg_or();
	mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::gpioa_moder,(1U<<5)>::reg_or();
	
  /*Set ALT type  to UART2 for PA3 and PA2*/  
	mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::gpioa_afrl,0x7700>::reg_or();
	
	/*Confidure USART2 baudrate 9600  @ 16MHz*/
	mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::uart2_brr,0x0683>::reg_set();
 
	/*Enable Rx,8-bit*/
  mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::uart2_cr1,0x00C>::reg_set();
	
  /*1 stop bit*/
	 mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::uart2_cr2,0x000>::reg_set();
  /*No flow control*/
	mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::uart2_cr3,0x000>::reg_set();
	
   /*Enable UART*/
	 mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::uart2_cr1,0x2000>::reg_or();
	 

	while(1){
	
		  msg_ch =  uart_read();
		  uart_write(msg_ch);
		  for(int i=0;i<1800000;i++){}


	}
}




char uart_read(void){
	
	char rcv_ch;

	
	/*wait until char arrives*/
	while(!(mcal::reg::UART2->SR) & 0x0020) {}   //0010 0000  
	
		rcv_ch  =  mcal::reg::reg_access<std::uint32_t,std::uint32_t,mcal::reg::uart2_dr,0U>::reg_get();
  
		return rcv_ch;
}


void uart_write(int ch){
 
	std::uint32_t _ch =  ch & 0xFF;
	
	/*Wait until TX buffer is empty*/
	while(!(mcal::reg::UART2->SR & 0x0080)){}
		mcal::reg::reg_access_dynamic<std::uint32_t,std::uint32_t>::reg_set(mcal::reg::uart2_dr,_ch);

}

