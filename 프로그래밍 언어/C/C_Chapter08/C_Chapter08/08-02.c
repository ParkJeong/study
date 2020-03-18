//#include <stdio.h>
//
//int main(void) {
//	// Q1
//	for (int i = 1; i <= 9; i++) {
//		if (i % 2 == 1) continue;
//
//		for (int j = 1; j <= 9; j++) {
//			if (j > i) break;
//			printf("%d X %d = %d \n", i, j, i*j);
//		}
//		printf("\n");
//	}
//	// Q2
//
//	int num1 = 0, num2 = 0;
//
//	for (int i = 0; i <= 9; i++) {
//		for (int j = 0; j <= 9; j++){
//			num1 = 10 * i + j;
//			num2 = 10 * j + i;
//
//			if (num1 + num2 == 99) printf("%d + %d = 99 \n", num1, num2);
//		}
//	}
//
//	return 0;
//}