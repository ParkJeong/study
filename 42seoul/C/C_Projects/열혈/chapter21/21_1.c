#include <stdio.h>

int main(void){
  int ch;

  ch = fgetc(stdin);

  if(ch >= 'A' && ch <= 'Z'){
    ch += 'a' - 'A';
    fputc(ch, stdout);
  }else if (ch >= 'a' && ch <= 'z'){  
    ch += 'A' - 'a';
    fputc(ch, stdout);
  }else {
    printf("잘못된 입력입니다.\n");
  }

  return 0;
}