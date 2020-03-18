//#define   _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
////strlen함수 참고
//int main(void) {
//	char * word = (char*) malloc(20);
//	int length = 0;
//	int check = 0;
//
//	printf("문자열 입력: ");
//	scanf("%s", word);
//
//	length = strlen(word);
//
//	for (int i = 0; i < length/2; i++) {
//		if (word[i] != word[length -1 - i]) {
//			check = 0;
//			break;
//		}
//		check = 1;
//	}
//	if (check == 1) printf("회문 입니다.\n");
//	else printf("회문이 아닙니다.\n");
//
//	free(word);
//	return 0;
//}