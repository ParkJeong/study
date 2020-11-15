#include <stdio.h>

int Factorial(int n){
  if(n <= 1){
    return 1;
  }
  return n * Factorial(n - 1);
}

int main(void){
  printf("%d\n", sizeof(int));
  printf("\n1! = %d \n", Factorial(1));
  printf("2! = %d \n", Factorial(2));
  printf("3! = %d \n", Factorial(3));
  printf("4! = %d \n", Factorial(4));
  printf("5! = %d \n", Factorial(5));
  return 0;
}