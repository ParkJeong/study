#include <stdio.h>

int main(void){
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  scanf("%d %d", &num1, &num2);
  printf("%d %d", num1, num2);

  scanf("%d %d %d", &num1, &num2, &num3);
  printf("%d x %d + %d = %d", num1, num2, num3, num1*num2+num3);
  return 0;
}