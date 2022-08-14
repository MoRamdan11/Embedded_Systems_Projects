#include "platformTypes.h"
#define RCC_Base 0x40021000
#define PORTA_Base 0x40010800

#define APB2ENR_Reg *((volatile uint32*)(RCC_Base + 0x18))
#define CRH_Reg     *((volatile uint32*)(PORTA_Base + 0x04))
#define ODR_Reg     *((volatile uint32*)(PORTA_Base + 0x0C))

int main() {
  APB2ENR_Reg |= 1 << 2;
  CRH_Reg &= 0xFF0FFFFF;
  CRH_Reg |= 0x00200000;
  uint32 i;
  while(1) {
    ODR_Reg ^= 1 << 13;
    for(i = 0; i < 50000; i++);
  }
  return 0;
}