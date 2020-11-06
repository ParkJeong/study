#include <stdio.h>

int main() {
  char input_Value[50];
  scanf("%s", input_Value);
  printf("%.4s", input_Value);
  printf("%4s", input_Value);
  printf("%3.2s", input_Value);
}