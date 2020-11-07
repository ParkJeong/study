#include <stdio.h>

int main(void){
  int num1 = 0xA7;
  int num2 = 0x43;
  int num3 = 032;
  int num4 = 024;

  printf("%d\n", num1);
  printf("%d\n", num2);
  printf("%d\n\a", num3);
  printf("%d\n\a", num4);
  
  return 0;
}