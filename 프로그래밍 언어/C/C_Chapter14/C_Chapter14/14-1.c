//#include <stdio.h>
//
//int SquareByValue(int num);
//void SquareByReference(int * ptr);
//void Swap3(int* ptr1, int* ptr2, int* ptr3);
//
//int main(void) {
//	//// Q01
//	//int num = 10;
//	//
//	//printf("num: %d\n", num);
//	//printf("num^2: %d\n",SquareByValue(num));
//	//
//	//printf("num: %d\n", num);
//	//SquareByReference(&num);
//	//printf("num^2: %d\n", num);
//	int num1 = 10, num2 = 20, num3 = 30;
//	
//	printf("num1: %d\n num2: %d\n num3: %d\n ", num1, num2, num3);
//	Swap3(&num1, &num2, &num3);
//	printf("num1: %d\n num2: %d\n num3: %d\n ", num1, num2, num3);
//
//	return 0;
//}
//
//int SquareByValue(int num) {
//	return num * num;
//}
//void SquareByReference(int * ptr) {
//	 *ptr = *ptr * *ptr;
//}
//void Swap3(int* ptr1, int* ptr2, int* ptr3) {
//	int temp = *ptr3;
//
//	*ptr3 = *ptr2;
//	*ptr2 = *ptr1;
//	*ptr1 = temp;
//}
