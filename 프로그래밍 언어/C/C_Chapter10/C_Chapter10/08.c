#include <stdio.h>

int twoSquare(int num);

int main(void) {
	int input = 0;

	printf("���� �Է�:");
	scanf_s("%d", &input);

	printf("2�� %d������ %d\n", input, twoSquare(input));

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