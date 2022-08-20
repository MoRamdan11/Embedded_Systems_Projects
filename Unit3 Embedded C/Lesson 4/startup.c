#include "platformTypes.h"

extern uint32 _E_Text;
extern uint32 _S_data;
extern uint32 _E_data;
extern uint32 _S_bss;
extern uint32 _E_bss;

extern int main();
void Reset_Handler();

void Default_Handler() {
  Reset_Handler();
}

void NMI_Handler()__attribute__((weak, alias("Default_Handler")));
void H_Fault_Handler()__attribute__((weak, alias("Default_Handler")));
void MM_Fault_Handler()__attribute__((weak, alias("Default_Handler")));
void Bus_Fault_Handler()__attribute__((weak, alias("Default_Handler")));
void Usage_Fault_Handler()__attribute__((weak, alias("Default_Handler")));

uint32 stack_top[256]; // 256*4 = 1024


void (* vectors[])()__attribute__((section(".vectors"))) = {
  (void(*)())((uint32)stack_top + sizeof(stack_top)),
  &Reset_Handler,
  &NMI_Handler,
  &H_Fault_Handler,
  &MM_Fault_Handler,
  &Bus_Fault_Handler,
  &Usage_Fault_Handler,
};

void Reset_Handler() {
  uint32 Data_Size = (uint8*)&_E_data - (uint8*)&_S_data;
  uint32 Bss_Size  = (uint8*)&_E_bss  - (uint8*)&_S_bss;
  uint8* p_src  = (uint8*)&_E_Text;
  uint8* p_dist = (uint8*)&_S_data;
  uint32 i;
  //Copying Data Section {{Flash => SRAM}}
  for(i = 0; i < Data_Size; i++) {
    *((uint8*)p_dist++) = *((uint8*)p_src++);
  }
  //Create and initailize BSS Section {{SRAM}}
  p_dist = (uint8*)&_S_bss;
  for(i = 0; i < Bss_Size; i++) {
    *(uint8*)p_dist = (uint8)0;
  }
  main();
}