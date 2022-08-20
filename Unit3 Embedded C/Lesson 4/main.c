#include "platformTypes.h"

#define SYSCTL_Base 0x400FE000
#define GPIOF_Base  0x40025000

#define SYSCTL_RCGC2_R     *((volatile uint32*)(SYSCTL_Base + 0x108))
#define GPIO_PORTF_DATA_R  *((volatile uint32*)(GPIOF_Base + 0x3FC))
#define GPIO_PORTF_DIR_R   *((volatile uint32*)(GPIOF_Base + 0x400))
#define GPIO_PORTF_DEN_R   *((volatile uint32*)(GPIOF_Base + 0x51C))

int main() {
  uint32 i;
  SYSCTL_RCGC2_R = 0x00000020;
  GPIO_PORTF_DIR_R |= 1 << 3;
  GPIO_PORTF_DEN_R |= 1 << 3;
  while(1) {
    GPIO_PORTF_DATA_R ^= 1 << 3;
    for(i = 0; i < 50000; i++);
  }
  return 0;
}