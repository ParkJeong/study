#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ConvToInt(char c) {
	static int diff = 1 - '1';
	return c + diff;
}

int GetSpaceIdx(char str[]) {
	int len;

	len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ')
			return i;
	}
	return -1; // ���� ���ڰ� �������� �ʴ� ���
}

int CompName(char str1[], char str2[]) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2) {
		return 0;
	}
	else return !strncmp(str1, str2, idx1);
}

int CompAge(char str1[], char str2[]) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int ag1, ag2;

	ag1 = atoi(&str1[idx1 + 1]);
	ag2 = atoi(&str2[idx2 + 1]);

	if (ag1 == ag2)
		return 1;
	else
		return 0;
}

int main(void) {
	// Q01
	/*char str[50];
	int sum = 0;
	int len;

	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (int i = 0; i < len; i++) {
		if ('1' <= str[i] && str[i] <= '9') {
			sum += ConvToInt(str[i]);
		}
	}
	printf("������ �� ��: %d \n", sum);
*/
	// Q02
	/*char str1[20];
	char str2[20];
	char str3[40];

	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	str1[strlen(str1) - 1] = 0;
	strncpy(str3, str1, strlen(str1) + 1);
	strncat(str3, str2, strlen(str2) - 1);

	fputs(str3, stdout);
*/
	// Q03
	/*
	char stu1[20];
	char stu2[20];
	int len1 = 0;
	int len2 = 0;

	char name1[20];
	char name2[20];
	char age1[10];
	char age2[10];
	int count = 0;

	fgets(stu1, sizeof(stu1), stdin);
	fgets(stu2, sizeof(stu2), stdin);

	while (1) {
		if (stu1[count] == ' ') break;
		count++;
	}
	for (int i = 0; i < count; i++) {
		name1[i] = stu1[i+1];
		name1[i + 1] = 0;
	}

	len1 = strlen(stu1);
	for (int i = count+1, j = 0; i < len1 - 2; i++, j++) {
		age1[j] = stu1[i];
		age1[j + 1] = 0;
	}



	count = 0;
	while (1) {
		if (stu2[count] == ' ') break;
		count++;
	}

	for (int i = 0; i < count; i++) {
		name2[i] = stu2[i + 1];
		name2[i + 1] = 0;
	}
	len2 = strlen(stu2);
	for (int i = count + 1, j = 0; i < len2 - 2; i++, j++) {
		age2[j] = stu2[i];
		age2[j + 1] = 0;
	}


	if (strcmp(name1, name2) == 0) {
		fputs("�̸��� �����ϴ�.\n", stdout);
	}
	else {
		fputs("�̸��� �ٸ��ϴ�.\n", stdout);
	}

	if (strcmp(age1, age2) == 0) {
		fputs("���̰� �����ϴ�.\n", stdout);
	}
	else {
		fputs("���̰� �ٸ��ϴ�.\n", stdout);
	}*/

	// Q03
	char str1[20];
	char str2[20];

	printf("ù ��° ��� ���� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("�� ��° ��� ���� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (CompName(str1, str2))
		puts("�̸��� �����մϴ�!");
	else
		puts("�̸��� �ٸ��ϴ�!");

	if (CompAge(str1, str2))
		puts("���̰� �����ϴ�!");
	else
		puts("���̰� �ٸ��ϴ�!");

	return 0;
}