//#include <stdio.h>
//
//int main(void) {
//	int arr[10];
//	int length = 10;
//	int evenPtr = length - 1;
//	int oddPtr = 0;
//
//	printf("�� 10���� ���� �Է�\n");
//	for (int i = 0; i < 10; i++) {
//		int temp;
//		printf("�Է�: ");
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
//	printf("�迭 ����� ���: ");
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}