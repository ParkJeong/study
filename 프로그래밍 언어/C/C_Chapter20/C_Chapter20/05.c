//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//	int opt = 0;
//	int end = 1;
//	int computer = 0;
//	int win = 0;
//	int draw = 0;
//
//	char * opt2 = " ";
//	char * computer2 = "";
//
//	while (end != 0) {
//
//		printf("바위는 1, 가위는 2, 보는 3: ");
//		scanf_s("%d", &opt);
//
//		srand((int)time(NULL));
//		computer = rand()%3 + 1;
//
//		if (computer == 1) computer2 = "묵";
//		else if (computer == 2) computer2 = "가위";
//		else if (computer == 3) computer2 = "보";
//		else computer2 = "에러";
//
//		if (opt == 1) {
//			if (computer == 1) {
//				end = -1;
//			}
//			else if (computer == 2) {
//				end = 1;
//			}
//			else if (computer == 3){
//				end = 0;
//			}
//			else {
//				printf("컴퓨터 에러\n다시\n\n");
//			}
//			opt2 = "묵";
//
//		}
//		else if (opt == 2) {
//			if (computer == 1) {
//				end = 0;
//			}
//			else if (computer == 2) {
//				end = -1;
//			}
//			else if (computer == 3) {
//				end = 1;
//			}
//			else {
//				printf("컴퓨터 에러\n다시\n\n");
//			}
//			opt2 = "가위";
//		}
//		else if (opt == 3) {
//			if (computer == 1) {
//				end = 1;
//			}
//			else if (computer == 2) {
//				end = 0;
//			}
//			else if (computer == 3) {
//				end = -1;
//			}
//			else {
//				printf("컴퓨터 에러\n다시\n\n");
//			}
//			opt2 = "보";
//		}
//		else {
//			printf("입력 에러\n다시\n\n");
//		}
//
//		if (end == 0) {
//			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n\n", opt2, computer2);
//			printf("게임의 결과: %d승, %d무", win, draw);
//		}
//		else if (end == 1) {
//			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다!\n", opt2, computer2);
//			win += 1;
//		}
//		else {
//			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", opt2, computer2);
//			draw += 1;
//		}
//	}
//	return 0;
//}