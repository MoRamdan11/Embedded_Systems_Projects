#include "uart.h"

unsigned char str_data[100] = "learn-in-depth:<Mohamed>";

int main() {
  sendData(str_data);
  return 0;
}