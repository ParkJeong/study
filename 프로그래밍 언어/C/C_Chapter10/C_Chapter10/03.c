//#include <stdio.h>
//int getGCD(int num1, int num2);
//
//int main(void) {
//	int num1, num2;
//
//	printf("두 개의 정수를 입력해주세요.\n");
//	scanf_s("%d %d", &num1, &num2);
//
//	printf("두 수의 최대 공약수:%d\n", getGCD(num1, num2));
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