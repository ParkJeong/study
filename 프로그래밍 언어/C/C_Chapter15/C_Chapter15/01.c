//#include <stdio.h>
//
//void ShowOddNum(int arr[], int length);
//void ShowEvenNum(int arr[], int length);
//
//int main(void) {
//	int arr[10];
//
//	for (int i = 0; i < 10; i++) {
//		printf("ÀÔ·Â: ");
//		scanf_s("%d", &arr[i]);
//	}
//	ShowOddNum(arr, sizeof(arr) / sizeof(int));
//	ShowEvenNum(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}
//void ShowOddNum(int arr[], int length) {
//	printf("È¦¼ö Ãâ·Â: ");
//	int count = 0;
//
//	for (int i = 0; i < length; i++) {
//		if (arr[i] % 2 == 1)
//			count++;
//	}
//
//	for (int i = 0; i < length; i++) {
//		if (arr[i] % 2 == 1) {
//			printf("%d", arr[i]);
//			count--;
//			if (count != 0) printf(", ");
//		}
//	}
//	printf("\n");
//}
//void ShowEvenNum(int arr[], int length) {
//	printf("Â¦¼ö Ãâ·Â: ");
//	int count = 0;
//
//	for (int i = 0; i < length; i++) {
//		if (arr[i] % 2 == 0)
//			count++;
//	}
//	for (int i = 0; i < length; i++) {
//		if (arr[i] % 2 == 0) {
//			printf("%d", arr[i]);
//			count--;
//			if (count != 0) printf(", ");
//		}
//	}
//	printf("\n");
//}
