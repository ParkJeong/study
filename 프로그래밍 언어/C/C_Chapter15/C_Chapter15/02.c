//#include <stdio.h>
//#include <math.h>
//
//
//
//int main(void) {
//	int num = 0;
//	int result[20];
//	int count = 0;
//	printf("10진수 정수 입력: ");
//	scanf_s("%d", &num);
//
//	while (num > 0) {
//		result[count] = num % 2;
//		num /= 2;
//		count++;
//	}
//
//	if (count == 0) printf("0\n");
//	else {
//		for (int i = 1; i <= count; i++) {
//			printf("%d", result[count-i]);
//		}
//	}
//
//	return 0;
//}