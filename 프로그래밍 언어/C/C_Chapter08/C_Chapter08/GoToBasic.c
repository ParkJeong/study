//#include <stdio.h>
//
//int main(void) {
//	int num;
//	printf("자연수 입력: ");
//	scanf_s("%d", &num);
//
//	if (num == 1)
//		goto ONE;
//	else if (num == 2)
//		goto TWO;
//	else
//		goto OTHER;
//
//ONE:
//	printf("1을 입력하셨습니다. \n");
//	goto END;
//
//TWO:
//	printf("2를 입력하셨습니다. \n");
//	goto END;
//OTHER:
//	printf("1과 2가 아닌 다른 값을 입력하셨습니다. \n");
//	goto END;
//END:
//	return 0;
//}