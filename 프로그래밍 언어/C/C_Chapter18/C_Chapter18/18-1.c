#include <stdio.h>

// Q02
void SimpleFuncOne(int* ar1, int* ar2) {}
void SimpleFuncTwo(int (*ar3)[4], int (*ar4)[4]) {}

// Q03
void ComplexFuncOne(int** ar1, int* (*ar2)[5]) {}
void ComplexFuncTwo(int*** ar3, int*** (*ar4)[5]) {}

int main(void) {
	// Q01
	/*int * arr1[5];
	int * arr2[3][5];

	int ** ptr1 = arr1;
	int* (*ptr2)[5] = arr2;
*/

	// Q02
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);

	// Q03
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);


	// Q04
	/*
	3 2
	6 4
	5 2
	1 1
	*/

	// Q05
	/*
	arr[1][0][1]
	*(arr[1][0] + 1)
	(*(arr[1] + 0))[1]
	(*(arr + 1))[0][1]
	*(*(arr[1] + 0) + 1)
	*(*(arr + 1)[0] + 1)
	(*(*(arr + 1) + 0))[1]
	*(*(*(arr + 1) + 0) + 1)
	*/

	return 0;
}