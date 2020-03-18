#include <stdio.h>

int twoSquare(int num);

int main(void) {
	int input = 0;

	printf("정수 입력:");
	scanf_s("%d", &input);

	printf("2의 %d제곱은 %d\n", input, twoSquare(input));

	return 0;
}

int twoSquare(int num) {
	int result = 1;
	
	while (num > 0) {
		result *= 2;
		num--;
	}

	return result;
}