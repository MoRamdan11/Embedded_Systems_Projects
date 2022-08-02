#include "uart.h"

void sendData(unsigned char* str_data) {
  while(*str_data != '\0') {
    UART0DR = (unsigned int)(*str_data);
    str_data++;
  }
}