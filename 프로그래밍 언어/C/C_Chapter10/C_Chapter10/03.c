//#include <stdio.h>
//int getGCD(int num1, int num2);
//
//int main(void) {
//	int num1, num2;
//
//	printf("�� ���� ������ �Է����ּ���.\n");
//	scanf_s("%d %d", &num1, &num2);
//
//	printf("�� ���� �ִ� �����:%d\n", getGCD(num1, num2));
//
//	return 0;
//}
//
//int getGCD(int num1, int num2) {
//	int gcd;
//
//	int big = num1 > num2 ? num1 : num2;
//
//	for (int i = 1; i < big/2; i++) {
//		if (num1 % i == 0 && num2 % i == 0) gcd = i;
//	}
//
//	return gcd;
//}