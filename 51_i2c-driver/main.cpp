#include "uart.h"
#include <stdio.h>
#include "mcal_reg.h"

#include "adc.h"
#include "i2c.h"


void pseudoDelayMs(int n);


#define SLAVE_ADRR 0x68

char  datafrom_rtc[15];
int status =0;
int main()
{
   // adc1_init();
	  i2c_ds1307_rtc_Init();
  
	/*Enable clock for GPIOA*/
  mcal::reg::reg_access<std::uint32_t,
                               std::uint32_t,
                               mcal::reg::ahb1enr,
                               0x01>::reg_or();

		 /*Set PA5 to output*/													 
	mcal::reg::reg_access<std::uint32_t,
                               std::uint32_t,
                               mcal::reg::gpioa_moder,
                               (1U<<10)>::reg_or();
	 while(1){
	
    i2c1_burstRead( SLAVE_ADRR, 0,  7,datafrom_rtc);
   status  = datafrom_rtc[0] &1;
		 
	if(status){
						mcal::reg::reg_access<std::uint32_t,
																			 std::uint32_t,
																			 mcal::reg::gpioa_odr,
                                       (1U<<5)>::reg_or();	
	
	   }
	else{
			    mcal::reg::reg_access<std::uint32_t,
																			std::uint32_t,
																			mcal::reg::gpioa_odr,
																			(1U<<5)>::reg_not();	
	}
	pseudoDelayMs(10);
	}
}


void pseudoDelayMs( int n){
   int i;
	for(;n>0;n--){
	   for(i=0;i<3195;i++);
	}
}


