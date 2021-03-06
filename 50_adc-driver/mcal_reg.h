#ifndef _MCAL_REG_H
#define _MCAL_REG_H

#include <cstdint>
#include "mcal_reg_access.h"
#include "mcal_reg_access_dynamic.h"



namespace mcal{

   namespace reg{
	 
		  // Global base addresses.
      const std::uint32_t periph_base     =  0x40000000U;


      // Individual unit base addresses.
      const std::uint32_t ahb1periph_base = periph_base     + 0x00020000U;
      const std::uint32_t rcc_base        = ahb1periph_base + 0x00003800U;
      
			const std::uint32_t ahb1enr =	rcc_base + 0x30;
			const std::uint32_t ahb2enr =	rcc_base + 0x34;
			const std::uint32_t ahb3enr =	rcc_base + 0x38;
		 
		 	const std::uint32_t apb1enr = rcc_base+ 0x40;
		 	const std::uint32_t apb2enr = rcc_base+ 0x44;

      
			const std::uint32_t gpioa_base      = ahb1periph_base +  0x0000;
      const std::uint32_t gpiob_base      = ahb1periph_base +  0x0400;
      const std::uint32_t gpioc_base      = ahb1periph_base +  0x0800;
      const std::uint32_t gpiod_base      = ahb1periph_base +  0x0C00;
      const std::uint32_t gpioe_base      = ahb1periph_base +  0x1000;
      const std::uint32_t gpiof_base      = ahb1periph_base +  0x1400;
      const std::uint32_t gpiog_base      = ahb1periph_base +  0x1800;
			
			
		  const std::uint32_t uart1_base      = 0x40011000;
      const std::uint32_t uart2_base      = 0x40004400;
			const std::uint32_t uart6_base      = 0x40011400;
			
			const std::uint32_t scb_base        =  0xE000E000U;
			const std::uint32_t systick_base 		= scb_base + 0x010U; //systick  = 0xE000E010U
			const std::uint32_t tim2_base = periph_base;

			const std::uint32_t adc1_base  = 0x40012000U;


      // Port registers.
			
      const std::uint32_t moder_offset     =  0x0000;  
      const std::uint32_t otyper_offset    =  0x0004;  
      const std::uint32_t ospeedr_offset   =  0x0008;  
      const std::uint32_t pupdr_offset     =  0x000C;  
      const std::uint32_t idr_offset       =  0x0010;  
      const std::uint32_t odr_offset       =  0x0014;  
      const std::uint32_t bsrr_offset      =  0x0018;  
      const std::uint32_t lckr_offset      =  0x001C;  
      const std::uint32_t afrl_offset      =  0x0020;  
      const std::uint32_t afrh_offset      =  0x0024;  

      const std::uint32_t gpioa_moder     = gpioa_base      +  moder_offset;  
      const std::uint32_t gpioa_otyper    = gpioa_base      +  otyper_offset;  
      const std::uint32_t gpioa_ospeedr   = gpioa_base      +  ospeedr_offset;  
      const std::uint32_t gpioa_pupdr     = gpioa_base      +  pupdr_offset;  
      const std::uint32_t gpioa_idr       = gpioa_base      +  idr_offset;  
      const std::uint32_t gpioa_odr       = gpioa_base      +  odr_offset;  
      const std::uint32_t gpioa_bsrr      = gpioa_base      +  bsrr_offset;  
      const std::uint32_t gpioa_lckr      = gpioa_base      +  lckr_offset;  
      const std::uint32_t gpioa_afrl      = gpioa_base      +  afrl_offset;  
      const std::uint32_t gpioa_afrh      = gpioa_base      +  afrh_offset;  

      const std::uint32_t gpiob_moder     = gpiob_base      +  moder_offset;  
      const std::uint32_t gpiob_otyper    = gpiob_base      +  otyper_offset;  
      const std::uint32_t gpiob_ospeedr   = gpiob_base      +  ospeedr_offset;  
      const std::uint32_t gpiob_pupdr     = gpiob_base      +  pupdr_offset;  
      const std::uint32_t gpiob_idr       = gpiob_base      +  idr_offset;  
      const std::uint32_t gpiob_odr       = gpiob_base      +  odr_offset;  
      const std::uint32_t gpiob_bsrr      = gpiob_base      +  bsrr_offset;  
      const std::uint32_t gpiob_lckr      = gpiob_base      +  lckr_offset;  
      const std::uint32_t gpiob_afrl      = gpiob_base      +  afrl_offset;  
      const std::uint32_t gpiob_afrh      = gpiob_base      +  afrh_offset;  

      const std::uint32_t gpioc_moder     = gpioc_base      +  moder_offset;  
      const std::uint32_t gpioc_otyper    = gpioc_base      +  otyper_offset;  
      const std::uint32_t gpioc_ospeedr   = gpioc_base      +  ospeedr_offset;  
      const std::uint32_t gpioc_pupdr     = gpioc_base      +  pupdr_offset;  
      const std::uint32_t gpioc_idr       = gpioc_base      +  idr_offset;  
      const std::uint32_t gpioc_odr       = gpioc_base      +  odr_offset;  
      const std::uint32_t gpioc_bsrr      = gpioc_base      +  bsrr_offset;  
      const std::uint32_t gpioc_lckr      = gpioc_base      +  lckr_offset;  
      const std::uint32_t gpioc_afrl      = gpioc_base      +  afrl_offset;  
      const std::uint32_t gpioc_afrh      = gpioc_base      +  afrh_offset;  

      const std::uint32_t gpiod_moder     = gpiod_base      +  moder_offset;  
      const std::uint32_t gpiod_otyper    = gpiod_base      +  otyper_offset;  
      const std::uint32_t gpiod_ospeedr   = gpiod_base      +  ospeedr_offset;  
      const std::uint32_t gpiod_pupdr     = gpiod_base      +  pupdr_offset;  
      const std::uint32_t gpiod_idr       = gpiod_base      +  idr_offset;  
      const std::uint32_t gpiod_odr       = gpiod_base      +  odr_offset;  
      const std::uint32_t gpiod_bsrr      = gpiod_base      +  bsrr_offset;  
      const std::uint32_t gpiod_lckr      = gpiod_base      +  lckr_offset;  
      const std::uint32_t gpiod_afrl      = gpiod_base      +  afrl_offset;  
      const std::uint32_t gpiod_afrh      = gpiod_base      +  afrh_offset;  

      const std::uint32_t gpioe_moder     = gpioe_base      +  moder_offset;  
      const std::uint32_t gpioe_otyper    = gpioe_base      +  otyper_offset;  
      const std::uint32_t gpioe_ospeedr   = gpioe_base      +  ospeedr_offset;  
      const std::uint32_t gpioe_pupdr     = gpioe_base      +  pupdr_offset;  
      const std::uint32_t gpioe_idr       = gpioe_base      +  idr_offset;  
      const std::uint32_t gpioe_odr       = gpioe_base      +  odr_offset;  
      const std::uint32_t gpioe_bsrr      = gpioe_base      +  bsrr_offset;  
      const std::uint32_t gpioe_lckr      = gpioe_base      +  lckr_offset;  
      const std::uint32_t gpioe_afrl      = gpioe_base      +  afrl_offset;  
      const std::uint32_t gpioe_afrh      = gpioe_base      +  afrh_offset;  

      const std::uint32_t gpiof_moder     = gpiof_base      +  moder_offset;  
      const std::uint32_t gpiof_otyper    = gpiof_base      +  otyper_offset;  
      const std::uint32_t gpiof_ospeedr   = gpiof_base      +  ospeedr_offset;  
      const std::uint32_t gpiof_pupdr     = gpiof_base      +  pupdr_offset;  
      const std::uint32_t gpiof_idr       = gpiof_base      +  idr_offset;  
      const std::uint32_t gpiof_odr       = gpiof_base      +  odr_offset;  
      const std::uint32_t gpiof_bsrr      = gpiof_base      +  bsrr_offset;  
      const std::uint32_t gpiof_lckr      = gpiof_base      +  lckr_offset;  
      const std::uint32_t gpiof_afrl      = gpiof_base      +  afrl_offset;  
      const std::uint32_t gpiof_afrh      = gpiof_base      +  afrh_offset;  

      const std::uint32_t gpiog_moder     = gpiog_base      +  moder_offset;  
      const std::uint32_t gpiog_otyper    = gpiog_base      +  otyper_offset;  
      const std::uint32_t gpiog_ospeedr   = gpiog_base      +  ospeedr_offset;  
      const std::uint32_t gpiog_pupdr     = gpiog_base      +  pupdr_offset;  
      const std::uint32_t gpiog_idr       = gpiog_base      +  idr_offset;  
      const std::uint32_t gpiog_odr       = gpiog_base      +  odr_offset;  
      const std::uint32_t gpiog_bsrr      = gpiog_base      +  bsrr_offset;  
      const std::uint32_t gpiog_lckr      = gpiog_base      +  lckr_offset;  
      const std::uint32_t gpiog_afrl      = gpiog_base      +  afrl_offset;  
      const std::uint32_t gpiog_afrh      = gpiog_base      +  afrh_offset;  
	 
	 
	   //USART Registers
		 	const std::uint32_t sr_offset      = 0x00 ;
			const std::uint32_t dr_offset      = 0x04 ;
			const std::uint32_t brr_offset     = 0x08 ;
			const std::uint32_t cr1_offset     = 0x0C ;
			const std::uint32_t cr2_offset     = 0x10 ;
			const std::uint32_t cr3_offset     = 0x14 ;
			
			const std::uint32_t uart2_sr       = uart2_base + sr_offset ;
			const std::uint32_t uart2_dr       = uart2_base + dr_offset ;
			const std::uint32_t uart2_brr      = uart2_base + brr_offset ;
			const std::uint32_t uart2_cr1      = uart2_base + cr1_offset ;
			const std::uint32_t uart2_cr2      = uart2_base + cr2_offset ;
			const std::uint32_t uart2_cr3      = uart2_base + cr3_offset ;

       
			 typedef struct
				{
					volatile std::uint32_t SR;         /*!< USART Status register,                   Address offset: 0x00 */
					volatile std::uint32_t DR;         /*!< USART Data register,                     Address offset: 0x04 */
					volatile std::uint32_t BRR;        /*!< USART Baud rate register,                Address offset: 0x08 */
					volatile std::uint32_t CR1;        /*!< USART Control register 1,                Address offset: 0x0C */
					volatile std::uint32_t CR2;        /*!< USART Control register 2,                Address offset: 0x10 */
					volatile std::uint32_t CR3;        /*!< USART Control register 3,                Address offset: 0x14 */
				} USART_TypeDef;






				//Systick Registers 
				
				const std::uint32_t ctrl_offset 					=  0x000;
			  const std::uint32_t load_offset 					=  0x004; 
        const std::uint32_t val_offset 				    =  0x008;
		    const std::uint32_t calib_offset 					=  0x00C;

			  const std::uint32_t systick_ctrl 					=  systick_base + ctrl_offset;
		    const std::uint32_t systick_load 					=  systick_base + load_offset;
		    const std::uint32_t systick_val 					=  systick_base + val_offset;
		    const std::uint32_t systick_calib 				=  systick_base + calib_offset;
				
				typedef struct
				{
					volatile std::uint32_t  CTRL;
					volatile std::uint32_t  LOAD;
					volatile std::uint32_t  VAL;
					volatile std::uint32_t  CALIB;

				}SYSTICK_TypeDef;
		
       
				
							
			//TIM2 Registers
			
			const std::uint32_t tim_psc_offset 					=  0x28;
			const std::uint32_t tim_arr_offset 					=  0x2C;
		  const std::uint32_t tim_cnt_offset 					=  0x24;
			
		  const std::uint32_t tim_cr1_offset 					=  0x00;
		  const std::uint32_t tim_cr2_offset 					=  0x04; 
		  const std::uint32_t tim_cr3_offset 					=  0x3C; 
		  const std::uint32_t tim_cr4_offset 					=  0x40; 

			const std::uint32_t tim2_smcr_offset 				=  0x08;
		  const std::uint32_t tim2_dier_offset 				=  0x0C;
			
			const std::uint32_t tim2_sr_offset 					=  0x10;
			const std::uint32_t tim2_egr_offset 				=  0x14;
			
			const std::uint32_t tim2_ccmr1_offset 		  =  0x18;

			const std::uint32_t tim2_ccmr2_offset 			=  0x1C;
			const std::uint32_t tim2_ccer_offset 				=  0x20;
			
			const std::uint32_t tim2_ccr1_offset 				=  0x34;

			
			
			const std::uint32_t tim2_ccr1 				=  tim2_ccr1_offset + tim2_base;
		
			const std::uint32_t tim2_smcr 				=  tim2_smcr_offset + tim2_base;
		  const std::uint32_t tim2_dier 				=  tim2_dier_offset + tim2_base;

		  const std::uint32_t tim2_sr				    =  tim2_sr_offset + tim2_base;
			const std::uint32_t tim2_egr					=  tim2_egr_offset+ tim2_base;
			
			const std::uint32_t tim2_ccmr1				=  tim2_ccmr1_offset + tim2_base;

			const std::uint32_t tim2_ccmr2				=  tim2_ccmr2_offset + tim2_base;
			const std::uint32_t tim2_ccer				  =  tim2_ccer_offset + tim2_base;
			
			
			const std::uint32_t tim2_psc 					=  tim_psc_offset + tim2_base;
			const std::uint32_t tim2_arr 					=  tim_arr_offset + tim2_base;
		  const std::uint32_t tim2_cnt					=  tim_cnt_offset + tim2_base;
			
		  const std::uint32_t tim2_cr1 					=  tim_cr1_offset + tim2_base;
		  const std::uint32_t tim2_cr2 					=  tim_cr2_offset + tim2_base; 
		  const std::uint32_t tim2_cr3 					=  tim_cr3_offset + tim2_base; 
		  const std::uint32_t tim2_cr4 					=  tim_cr4_offset + tim2_base; 
			
			
					typedef struct
					{
						volatile std::uint32_t CR1;         /*!< TIM control register 1,              Address offset: 0x00 */
						volatile std::uint32_t CR2;         /*!< TIM control register 2,              Address offset: 0x04 */
						volatile std::uint32_t SMCR;        /*!< TIM slave mode control register,     Address offset: 0x08 */
						volatile std::uint32_t DIER;        /*!< TIM DMA/interrupt enable register,   Address offset: 0x0C */
						volatile std::uint32_t SR;          /*!< TIM status register,                 Address offset: 0x10 */
						volatile std::uint32_t EGR;         /*!< TIM event generation register,       Address offset: 0x14 */
						volatile std::uint32_t CCMR1;       /*!< TIM capture/compare mode register 1, Address offset: 0x18 */
						volatile std::uint32_t CCMR2;       /*!< TIM capture/compare mode register 2, Address offset: 0x1C */
						volatile std::uint32_t CCER;        /*!< TIM capture/compare enable register, Address offset: 0x20 */
						volatile std::uint32_t CNT;         /*!< TIM counter register,                Address offset: 0x24 */
						volatile std::uint32_t PSC;         /*!< TIM prescaler,                       Address offset: 0x28 */
						volatile std::uint32_t ARR;         /*!< TIM auto-reload register,            Address offset: 0x2C */
						volatile std::uint32_t RCR;         /*!< TIM repetition counter register,     Address offset: 0x30 */
						volatile std::uint32_t CCR1;        /*!< TIM capture/compare register 1,      Address offset: 0x34 */
						volatile std::uint32_t CCR2;        /*!< TIM capture/compare register 2,      Address offset: 0x38 */
						volatile std::uint32_t CCR3;        /*!< TIM capture/compare register 3,      Address offset: 0x3C */
						volatile std::uint32_t CCR4;        /*!< TIM capture/compare register 4,      Address offset: 0x40 */
						volatile std::uint32_t BDTR;        /*!< TIM break and dead-time register,    Address offset: 0x44 */
						volatile std::uint32_t DCR;         /*!< TIM DMA control register,            Address offset: 0x48 */
						volatile std::uint32_t DMAR;        /*!< TIM DMA address for full transfer,   Address offset: 0x4C */
						volatile std::uint32_t OR;          /*!< TIM option register,                 Address offset: 0x50 */
					} TIM_TypeDef;
					
					
					
					    //ADC Registers
		  const std::uint32_t   adc_sr_offset      = 0x00;
			const std::uint32_t   adc_cr1_offset     = 0x04;
			const std::uint32_t   adc_cr2_offset     = 0x08;
			const std::uint32_t   adc_smpr1_offset   = 0x0C;
			const std::uint32_t   adc_smpr2_offset   = 0x10;
			const std::uint32_t   adc_jofr1_offset   = 0x14;
			const std::uint32_t   adc_jofr2_offset   = 0x18;
				
			const std::uint32_t   adc_jofr3_offset   = 0x1C;
			const std::uint32_t   adc_jofr4_offset   = 0x20;
				
			const std::uint32_t   adc_htr_offset     = 0x24;
			const std::uint32_t   adc_ltr_offset     = 0x28;
			const std::uint32_t   adc_sqr1_offset    = 0x2C;
			const std::uint32_t   adc_sqr2_offset    = 0x30;	
			const std::uint32_t   adc_sqr3_offset    = 0x34;	
			const std::uint32_t   adc_jsqr_offset    = 0x38;		
			const std::uint32_t   adc_jdr1_offset    = 0x3C;	
			const std::uint32_t   adc_jdr2_offset    = 0x40;			
			const std::uint32_t   adc_jdr3_offset    = 0x44;	
			const std::uint32_t   adc_jdr4_offset    = 0x48;								
			const std::uint32_t   adc_dr_offset      = 0x4C;								



       const 	 std::uint32_t  adc1_sr = 		adc_sr_offset    + adc1_base;
			 const	 std::uint32_t  adc1_cr1 = 		adc_cr1_offset   + adc1_base;
			 const	 std::uint32_t  adc1_cr2 = 		adc_cr2_offset   + adc1_base;
			 const	 std::uint32_t  adc1_smpr1 = 	adc_smpr1_offset + adc1_base;
			 const   std::uint32_t  adc1_smpr2 = 	adc_smpr2_offset + adc1_base;
			 const	 std::uint32_t  adc1_jofr1 = 	adc_jofr1_offset + adc1_base;
			 const   std::uint32_t  adc1_jofr2= 	adc_jofr2_offset  + adc1_base;
				
			 const	 std::uint32_t  adc1_jofr3 = adc_jofr3_offset + adc1_base;
			 const   std::uint32_t  adc1_jofr4 = adc_jofr4_offset + adc1_base;
				
			 const	std::uint32_t  adc1_htr  = adc_htr_offset     + adc1_base;
			 const  std::uint32_t  adc1_ltr  = adc_ltr_offset     + adc1_base;
			 const  std::uint32_t  adc1_sqr1 = adc_sqr1_offset    + adc1_base;
			 const  std::uint32_t  adc1_sqr2 = adc_sqr2_offset    + adc1_base;
			 const  std::uint32_t  adc1_sqr3 = adc_sqr3_offset    + adc1_base;	
			 const  std::uint32_t  adc1_jsqr = adc_jsqr_offset    + adc1_base;	
			 const  std::uint32_t  adc1_jdr1 = adc_jdr1_offset    + adc1_base;
			 const  std::uint32_t  adc1_jdr2 = adc_jdr2_offset    + adc1_base;		
			 const  std::uint32_t  adc1_jdr3 = adc_jdr3_offset    + adc1_base;
			 const  std::uint32_t  adc1_jdr4 = adc_jdr4_offset    + adc1_base;							
			 const  std::uint32_t  adc1_dr   = adc_dr_offset      + adc1_base;
			 
			 
			 				
			typedef struct
			{
				volatile std::uint32_t SR;     /*!< ADC status register,                         Address offset: 0x00 */
				volatile std::uint32_t CR1;    /*!< ADC control register 1,                      Address offset: 0x04 */
				volatile std::uint32_t CR2;    /*!< ADC control register 2,                      Address offset: 0x08 */
				volatile std::uint32_t SMPR1;  /*!< ADC sample time register 1,                  Address offset: 0x0C */
				volatile std::uint32_t SMPR2;  /*!< ADC sample time register 2,                  Address offset: 0x10 */
				volatile std::uint32_t JOFR1;  /*!< ADC injected channel data offset register 1, Address offset: 0x14 */
				volatile std::uint32_t JOFR2;  /*!< ADC injected channel data offset register 2, Address offset: 0x18 */
				volatile std::uint32_t JOFR3;  /*!< ADC injected channel data offset register 3, Address offset: 0x1C */
				volatile std::uint32_t JOFR4;  /*!< ADC injected channel data offset register 4, Address offset: 0x20 */
				volatile std::uint32_t HTR;    /*!< ADC watchdog higher threshold register,      Address offset: 0x24 */
				volatile std::uint32_t LTR;    /*!< ADC watchdog lower threshold register,       Address offset: 0x28 */
				volatile std::uint32_t SQR1;   /*!< ADC regular sequence register 1,             Address offset: 0x2C */
				volatile std::uint32_t SQR2;   /*!< ADC regular sequence register 2,             Address offset: 0x30 */
				volatile std::uint32_t SQR3;   /*!< ADC regular sequence register 3,             Address offset: 0x34 */
				volatile std::uint32_t JSQR;   /*!< ADC injected sequence register,              Address offset: 0x38*/
				volatile std::uint32_t JDR1;   /*!< ADC injected data register 1,                Address offset: 0x3C */
				volatile std::uint32_t JDR2;   /*!< ADC injected data register 2,                Address offset: 0x40 */
				volatile std::uint32_t JDR3;   /*!< ADC injected data register 3,                Address offset: 0x44 */
				volatile std::uint32_t JDR4;   /*!< ADC injected data register 4,                Address offset: 0x48 */
				volatile std::uint32_t DR;     /*!< ADC regular data register,                   Address offset: 0x4C */
			} ADC_TypeDef;
	 }

}
#endif

