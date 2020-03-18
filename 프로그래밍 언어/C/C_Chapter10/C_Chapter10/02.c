//#include <stdio.h>
//
//int main(void){
//	int start, end;
//	int temp;
//	printf("두 개의 정수를 입력해주세요.\n");
//	scanf_s("%d %d", &start, &end);
//
//	if (start > end) {
//		temp = end;
//		end = start;
//		start = temp;
//	}
//
//	for (int i = start; i <= end; i++) {
//		for (int j = 1; j <= 9; j++) {
//			printf("%d X %d = %d\n", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}