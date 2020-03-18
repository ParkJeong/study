#include <stdio.h>

void DesSort(int arr[], int len);

int main(void) {
	int arr[7];
	int length = 7;

	for (int i = 0; i < 7; i++) {
		printf("ют╥б: ");
		scanf_s("%d", &arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	DesSort(arr, length);

	for (int i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}


void DesSort(int arr[], int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < (len - i) - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}