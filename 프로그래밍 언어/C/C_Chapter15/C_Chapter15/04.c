//#define   _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
////strlen�Լ� ����
//int main(void) {
//	char * word = (char*) malloc(20);
//	int length = 0;
//	int check = 0;
//
//	printf("���ڿ� �Է�: ");
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
//	if (check == 1) printf("ȸ�� �Դϴ�.\n");
//	else printf("ȸ���� �ƴմϴ�.\n");
//
//	free(word);
//	return 0;
//}