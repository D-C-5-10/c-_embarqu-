#include "mcal_reg.h"
//GPIOD connecter à AHB1(168Mhz)
//LED PD12 PD13 PD14 PD15
//GPIOD = 0x40020C00
//Moder OFFSET = 0x00
//ODR OFFSET =0x14
//RCC 0x40023800
//AHB1RNR OFFSET 0x30
#define RCC_AHB1ENR (*((volatile unsigned int*) 0x40023830))
#define GPIOD (*((volatile unsigned int*) 0x40020C00))
#define MODER (*((volatile unsigned int*) 0x40020C00))
#define ODR (*((volatile unsigned int*) 0x40020C14))

class LED 
{
	public :
		typedef std::uint32_t port_type;
	  typedef std::uint32_t bval_type;
	LED(const port_type p, bval_type b):port(p),bval(b)
	{
		//DISABLE PIN
		*reinterpret_cast<volatile port_type *>(port) &= ~(1U<<bval);
		//SET PIN AS OUTPUT
		const port_type gpio_mode_reg = port - 0x14;
		*reinterpret_cast<volatile port_type *> (gpio_mode_reg) |= (1U<<(bval*2));
		
		
	}
	void toggle()const
	{
		*reinterpret_cast<volatile port_type *>(port) ^= (1U<<bval);
	}
	void pseudo_delay(int n )
	{
		int i =0;
		for(;i<n;++i)
		{
			for(i=0;i<3200;++i){}
		}
	}
	private :
		const port_type port ;
		const bval_type bval ;
	
	
};




int main ()
	{
	  RCC_AHB1ENR |= (1U<<3) ;//enable clock for GPIOD
		LED LD12(mcal::reg::gpiod,mcal::reg::gpio_pin12);
		LED LD13(mcal::reg::gpiod,mcal::reg::gpio_pin13);
		LED LD14(mcal::reg::gpiod,mcal::reg::gpio_pin14);
		LED LD15(mcal::reg::gpiod,mcal::reg::gpio_pin15);
		while(1)
		{
			LD12.toggle();
			LD13.toggle();
			LD14.toggle();
			LD15.toggle();
			LD12.pseudo_delay(1000);
			
		}
	
  }
	
	
