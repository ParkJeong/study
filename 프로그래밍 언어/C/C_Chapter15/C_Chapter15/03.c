//#include <stdio.h>
//
//int main(void) {
//	int arr[10];
//	int length = 10;
//	int evenPtr = length - 1;
//	int oddPtr = 0;
//
//	printf("총 10개의 숫자 입력\n");
//	for (int i = 0; i < 10; i++) {
//		int temp;
//		printf("입력: ");
//		scanf_s("%d", &temp);
//
//		if (temp % 2 == 0) {
//			arr[evenPtr] = temp;
//			evenPtr--;
//		}
//		else {
//			arr[oddPtr] = temp;
//			oddPtr++;;
//
//		}
//	}
//
//	printf("배열 요소의 출력: ");
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}