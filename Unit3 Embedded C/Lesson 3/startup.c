#include "platformTypes.h"

extern uint32 _S_data;
extern uint32 _E_data;
extern uint32 _E_text;
extern uint32 _S_bss;
extern uint32 _E_bss;
extern uint32 _stack_top;
extern int main();

void Reset_Handler();
void Default_Handler();
void NMI_Handler()__attribute__((weak, alias ("Default_Handler")));
void H_Fault_Handler()__attribute__((weak, alias ("Default_Handler")));
void MM_Fault_Handler()__attribute__((weak, alias ("Default_Handler")));

uint32 vectors[] __attribute__((section(".vectors"))) = {
  (uint32) &_stack_top,
  (uint32) &Reset_Handler,
  (uint32) &H_Fault_Handler,
  (uint32) &MM_Fault_Handler
};

void Reset_Handler() {
  uint32 Data_size = (uint8 *)&_E_data - (uint8 *)&_S_data;
  uint32 Bss_size = (uint8 *)&_E_bss - (uint8 *)&_S_bss;
  uint32 i;
  uint8* p_src = (uint8*)&_E_text;
  uint8* p_dist = (uint8*)&_S_data;
  //COPY DATA SECTION FLASH -> SRAM
  for(i = 0; i < Data_size; i++) {
    *((uint8*)p_dist++) = *((uint8*)p_src++); 
  }
  //CREATE INTIALIZE BSS SECTION in SRAM
  p_dist = (uint8*)_S_bss;
  for(i = 0; i < Data_size; i++) {
    *((uint8*)p_dist++) = (uint8)0;
  }
  main();
}

void Default_Handler() {
  Reset_Handler();
}