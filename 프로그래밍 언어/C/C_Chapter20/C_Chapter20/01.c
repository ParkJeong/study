//#include <stdio.h>
//
//void ShowAllElement(int(*arr)[4], int column);
//void Transform(int(*arr)[4], int column);
//
//int main(void) {
//	int arr[4][4] = {
//		{1, 2, 3, 4},
//		{5, 6, 7, 8},
//		{9, 10, 11, 12},
//		{13, 14, 15, 16}
//	};
//
//	ShowAllElement(arr, sizeof(arr) / sizeof(arr[0]));
//	
//	Transform(arr, sizeof(arr) / sizeof(arr[0]));
//	ShowAllElement(arr, sizeof(arr) / sizeof(arr[0]));
//
//	Transform(arr, sizeof(arr) / sizeof(arr[0]));
//	ShowAllElement(arr, sizeof(arr) / sizeof(arr[0]));
//
//	Transform(arr, sizeof(arr) / sizeof(arr[0]));
//	ShowAllElement(arr, sizeof(arr) / sizeof(arr[0]));
//
//	Transform(arr, sizeof(arr) / sizeof(arr[0]));
//	ShowAllElement(arr, sizeof(arr) / sizeof(arr[0]));
//
//	return 0;
//}
//
//void ShowAllElement(int(*arr)[4], int column) {
//	for (int i = 0; i < column; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//}
//void Transform(int(*arr)[4], int column) {
//	int temp[4][4];
//
//	for (int i = 0; i < column; i++) {
//		for (int j = 0; j < 4; j++) {
//			temp[i][j] = arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < column; i++) {
//		for (int j = 0; j < 4; j++) {
//			arr[j][3-i] = temp[i][j];
//		}
//	}
//}