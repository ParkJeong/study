//#include <stdio.h>
//
//int main(void) {
//	// Q1
//	int num = 1;
//	while (num < 100) {
//		/*if (num % 7 == 0)
//			printf("%d ", num);
//		else if(num % 9 == 0)
//			printf("%d ", num);
//*/
//		if (num % 7 == 0 || num % 9 == 0)
//			printf("%d ", num);	
//		num++;
//	}
//	printf("\n");
//
//
//	// Q2
//	int num1 = 0, num2 = 0;
//	int diff = 0;
//
//	printf("두 개의 정수를 입력해주세요.\n");
//	scanf_s("%d %d", &num1, &num2);
//	
//	diff = num1 - num2;
//	
//	if (diff < 0)
//		diff = -diff;
//	printf("두 수의 차: %d\n", diff);
//
//
//	// Q3
//	int kor = 0, eng = 0, math = 0;
//	double avg = 0;
//	char grade = ' ';
//	printf("국어, 영어, 수학 점수를 순서대로 입력해주세요.\n");
//	scanf_s("%d %d %d", &kor, &eng, &math);
//
//	avg = (kor + eng + math) / 3.0;
//
//	if (avg >= 90)
//		grade = 'A';
//	else if(avg >= 80)
//		grade = 'B';
//	else if (avg >= 70)
//		grade = 'C';
//	else if (avg >= 50)
//		grade = 'D';
//	else
//		grade = 'F';
//
//	printf("평균 점수는 %f이고 학점은 %c입니다.\n", avg, grade);
//
//
//	// Q4
//
//	
//	diff = num1 > num2 ? num1 - num2 : num2 - num1;
//
//	printf("두 수의 차: %d\n", diff);
//	return 0;
//}