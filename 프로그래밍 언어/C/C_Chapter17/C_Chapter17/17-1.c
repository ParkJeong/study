#include <stdio.h>

void MaxAndMin(int ** maxPtr, int ** minPtr, int arr[5], int length);

int main(void) {
	int * maxPtr;
	int * minPtr;
	int arr[5];

	maxPtr = arr;
	minPtr = arr;
	arr[0] = -10;
	arr[1] = 5;
	arr[2] = -20;
	arr[3] = 2;
	arr[4] = 10;

	printf("%d %d \n", *maxPtr, *minPtr);

	MaxAndMin(&maxPtr, &minPtr, arr, 5);

	printf("%d %d \n", *maxPtr, *minPtr);

	return 0;
}

void MaxAndMin(int ** maxPtr, int ** minPtr, int arr[5], int length) {
	*maxPtr = arr;
	*minPtr = arr;

	for (int i = 0; i < length; i++) {
		if (**maxPtr < arr[i]) *maxPtr = &arr[i];
		if (**minPtr > arr[i]) *minPtr = &arr[i];
	}
}
