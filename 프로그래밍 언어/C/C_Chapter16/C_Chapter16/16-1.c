//#include <stdio.h>
//
//int main(void) {
//	//// Q01
//	//int arr[3][9];
//
//	//for (int i = 0; i < 3; i++) {
//	//	for (int j = 0; j < 9; j++) {
//	//		arr[i][j] = (i + 2)*(j+1);
//	//	}
//	//}
//	//for (int i = 0; i < 3; i++) {
//	//	for (int j = 0; j < 9; j++) {
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//// Q02
//	//int arrA[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };
//	//int arrB[4][2];
//
//	//for (int i = 0; i < 2; i++) {
//	//	for (int j = 0; j < 4; j++) {
//	//		arrB[j][i] = arrA[i][j];
//	//	}
//	//}
//	//for (int i = 0; i < 2; i++) {
//	//	for (int j = 0; j < 4; j++) {
//	//		printf("%d ", arrA[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//for (int i = 0; i < 4; i++) {
//	//	for (int j = 0; j < 2; j++) {
//	//		printf("%d ", arrB[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	// Q03
//	int score[5][5];
//	int sum = 0;
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			scanf_s("%d", &score[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			sum += score[i][j];
//		}
//		score[i][4] = sum;
//		sum = 0;
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			sum += score[j][i];
//		}
//		score[4][i] = sum;
//		sum = 0;
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", score[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}