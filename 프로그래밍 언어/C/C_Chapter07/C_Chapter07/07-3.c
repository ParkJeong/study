//#include <stdio.h>
//
//int main(void) {
//	//int total = 0, num = 1;
//	//// Q1-1
//	//while (num != 0) {
//	//	printf("정수 입력(0 to quit): \n");
//	//	scanf_s("%d", &num);
//	//	total += num;
//	//}
//	//printf("합계: %d\n", total);
//
//	//// Q1-2
//	//total = 0;
//	//printf("정수 입력(0 to quit): \n");
//	//scanf_s("%d", &num);
//	//total += num;
//	//while (num != 0) {
//	//	printf("정수 입력(0 to quit): \n");
//	//	scanf_s("%d", &num);
//	//	total += num;
//	//}
//	//printf("합계: %d\n", total);
//
//	//// Q2
//	//int num = 0;
//	//int total = 0;
//	//do {
//	//	while (num % 2 == 0) {
//	//		total += num;
//	//		num += 1;
//	//	}
//	//	num += 1;
//	//} while(num <= 100);
//	//printf("0~100 짝수의 합: %d\n", total);
//
//	int cur = 2;
//	int is = 1;
//
//	do {
//		is = 1;
//		do {
//			printf("%d X %d = %d\n", cur, is, cur*is);
//			is++;
//		} while (is < 10);
//		cur += 1;
//	} while (cur < 10);
//
//
//	return 0;
//}