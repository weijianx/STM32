#include "led.h"

void led_init()
{
	RCC->APB2ENR|=1<<3; //GPIO B5  E5
	RCC->APB2ENR|=1<<6;
	
	GPIOB->CRL&=0xFF0FFFFF;
	GPIOB->CRL|=0x00300000;
	GPIOB->BSRR|=1<<5;
	
	GPIOE->CRL&=0xFF0FFFFF;
	GPIOE->CRL|=0x00300000;
	GPIOE->BSRR|=1<<5;
	
	
}

