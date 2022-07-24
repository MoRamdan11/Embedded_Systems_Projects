#include <stdint.h>
#include "../inc/platformTypes.h"

#define RCC_base 			0x40021000
#define GPIO_PA_base 			0x40010800

#define APB2ENR_Reg 		*(volatile uint32*)(RCC_base + 0x18)
#define CRH_Reg			*(volatile uint32*)(GPIO_PA_base + 0x04)
#define ODR_Reg 		*(volatile uint32*)(GPIO_PA_base + 0x0C)

int main(void)
{
	uint32 i;
	APB2ENR_Reg |= 1<<2;
	CRH_Reg &= 0xFF0FFFFF;
	CRH_Reg |= 0x00200000;
	while(1) {
		ODR_Reg ^= 1<<13;
		for(i = 0; i < 50000; i++);
	}
}
