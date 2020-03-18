//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int * CheckAnswer(int answer[3], int ball[3]);
//
//int main(void) {
//	int ball[3] = { -1, -1, -1 };
//	int start = 0;
//	int success = 0;
//	int count = 1;
//	int answer[3] = { -1, -1, -1 };
//	int * score = ball;
//
//	// 컴퓨터가 숫자 고르기
//	while (start == 0) {
//		srand((int)time(NULL));
//
//		ball[0] = rand() % 10;
//		ball[1] = rand() % 10;
//		ball[2] = rand() % 10;
//
//		if (ball[0] != ball[1] && ball[0] != ball[2] && ball[1] != ball[2]) start = 1;
//	}
//
//	printf("Start Game!\n");
//	while (success == 0) {
//		printf("3개의 숫자 선택: ");
//		scanf_s("%d %d %d", &answer[0], &answer[1], &answer[2]);
//		score = CheckAnswer(answer, ball);
//
//		printf("%d번째 도전 결과: %dstrike, %dball!!\n", count, score[0], score[1]);
//		count++;
//		
//		if (score[0] == 3) success = 1;
//	}
//	printf("Game Over!\n");
//	free(score);
//
//	return 0;
//}
//
//int * CheckAnswer(int answer[3], int ball[3]) {
//	int * result = malloc(sizeof(int) * 2);
//	result[0] = 0;
//	result[1] = 0;
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (answer[i] == ball[j] && i == j) {
//				result[0] += 1;
//				break;
//			}
//			else if (answer[i] == ball[j] && i != j) {
//				result[1] += 1;
//				break;
//			}
//		}
//	}
//	return result;
//}