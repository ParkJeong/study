//#include <stdio.h>
//
//int main(void) {
//	// Q1
//	int num;
//	
//	printf("수를 입력해주세요.\n");
//	scanf_s("%d", &num);
//	/*
//	while (num > 0) {
//		printf("Hello world!\n");
//		num--;
//	}*/
//
//	// Q2
//	/*int i = 1;
//	while (num > 0) {
//		printf("%d ", i*3);
//		i++;
//		num--;
//	}*/
//
//	//// Q3
//	//int total = num;
//	//while (num != 0) {
//	//	printf("숫자를 입력해주세요.\n");
//	//	scanf_s("%d", &num);
//	//	total += num;
//	//}
//	//printf("숫자의 합계는 %d입니다.\n", total);
//
//	//// Q4
//	//int i = 9;
//	//while (i > 0) {
//	//	printf("%d X %d = %d\n", num, i, num*i);
//	//	i--;
//	//}
//
//	// Q5
//	double total = 0;
//	double input;
//	int input_num = num;
//	while (num > 0) {
//		printf("숫자를 입력해주세요.\n");
//		scanf_s("%lf", &input);
//		total += input;
//		num--;
//	}
//	total /= input_num;
//	printf("평균 값은 %f입니다.\n", total);
//
//	return 0;
//}