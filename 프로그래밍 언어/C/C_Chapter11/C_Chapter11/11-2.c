#include <stdio.h>

int main(void) {
	//// Q01
	//char str[50];
	//int idx = 0;

	//printf("���ܾ� �Է�: ");
	//scanf_s("%s", str, 50);

	//while(str[idx] != '\0'){
	//	idx++;
	//}
	//printf("���ܾ��� ����: %d\n", idx);

	//// Q02
	//char str[50];
	//char temp;
	//int idx = 0;

	//printf("���ܾ� �Է�: ");
	//scanf_s("%s", str, 50);

	//while(str[idx] != '\0'){
	//	idx++;
	//}

	//idx--;
	//for (int i = 0; i <= idx / 2; i++) {
	//	temp = str[i];
	//	str[i] = str[idx - i];
	//	str[idx - i] = temp;
	//}
	//printf("%s\n", str);

	// Q03
	char str[50];
	int idx = 0;
	char maxASCII = ' ';

	printf("���ܾ� �Է�: ");
	scanf_s("%s", str, 50);

	maxASCII = str[0];
	while (str[idx] != '\0') {
		if (maxASCII < str[idx]) maxASCII = str[idx];
		idx++;
	}
	printf("�ƽ�Ű �ڵ� ���� ���� ū ���ڴ�: %c\n", maxASCII);

	return 0;
}