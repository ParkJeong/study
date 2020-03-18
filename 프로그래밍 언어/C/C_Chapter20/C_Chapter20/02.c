#include <stdio.h>

void ShowSnailArray(int num);

int main(void) {
	int num = 0;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	ShowSnailArray(num);

	return 0;
}

void ShowSnailArray(int num) {
	
	int arr[100][100];
	int count = 1;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			arr[i][j] = count;
			count++;
		}
		printf("\n");
	}
}
