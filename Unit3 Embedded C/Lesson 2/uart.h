#ifndef UART_H_
#define UART_H_

#define UART0DR *((volatile unsigned int* const)((unsigned int*)0x101f1000))

void sendData(unsigned char* str_data);

#endif