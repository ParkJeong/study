//#include <stdio.h>
//int GetBigNum(int num1, int num2, int num3);
//int GetSmallNum(int num1, int num2, int num3);
//double CelToFah(int temperature);
//double FahToCel(int temperature);
//void Fibonacci(int num);
//
//int main(void) {
//	// Q1
//	int num1, num2, num3;
//
//	printf("�� ���� ������ �Է����ּ���.\n");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//	printf("���� ū ��: %d\n", GetBigNum(num1, num2, num3));
//	printf("���� ���� ��: %d\n", GetSmallNum(num1, num2, num3));
//	
//	// Q2
//	printf("�����µ��� �Է����ּ���.\n");
//	scanf_s("%d", &num1);
//	printf("�����µ�: %d, ȭ���µ�: %f\n", num1, CelToFah(num1));
//
//	printf("ȭ���µ��� �Է����ּ���.\n");
//	scanf_s("%d", &num1);
//	printf("ȭ���µ�: %d, �����µ�: %f\n", num1, FahToCel(num1));
//
//	// Q3
//	printf("����� �Ǻ���ġ ������ ������ �Է����ּ���/\n");
//	scanf_s("%d", &num1);
//	printf("\n");
//	Fibonacci(num1);
//
//	return 0;
//}
//
//
//int GetBigNum(int num1, int num2, int num3) {
//	/*
//	if (num1 > num2) {
//		if (num1 > num3) return num1;
//		else return num3;
//	}
//	else {
//		if (num2 > num3) return num2;
//		else return num3;
//	}*/
//
//	if (num1 > num2) return num1 > num3 ? num1 : num3;
//	else return num2 > num3 ? num2 : num3;
//}
//int GetSmallNum(int n1, int n2, int n3) {
//	/*if (num1 < num2) {
//		if (num1 < num3) return num1;
//		else return num3;
//	}
//	else {
//		if (num2 < num3) return num2;
//		else return num3;
//	}*/
//
//	if (n1 < n2) return n1 < n3 ? n1 : n3;
//	else return n2 < n3 ? n2 : n3;
//}
//
//double CelToFah(int temperature) {
//	return 1.8 * temperature + 32;
//}
//double FahToCel(int temperature) {
//	return (temperature - 32) * (5.0 / 9);
//}
//void Fibonacci(int num) {
//	int num1 = 0;
//	int num2 = 1;
//	int temp = 0;
//	for (int i = 0; i < num; i++) {
//		printf("%d ", num1);
//		temp = num2;
//		num2 += num1;
//		num1 = temp;
//
//	}
//}
