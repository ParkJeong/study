#include <stdio.h>

void ClearLineFromReadBuffer(void){
  while(getchar() != '\n');
}

int main(void){
  char perID[7];
  char name[10];

  fputs("주민번호:", stdout);
  fgets(perID, sizeof(perID), stdin);
  ClearLineFromReadBuffer();

  fputs("이름:", stdout);
  fgets(name, sizeof(name), stdin);

  printf("주민번호: %s \n", perID);
  printf("이름: %s \n", name);
  return 0;
}