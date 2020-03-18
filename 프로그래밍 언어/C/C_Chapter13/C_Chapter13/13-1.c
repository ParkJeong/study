//#include <stdio.h>
//
//int main(void) {
//	// Q01
//	/*int arr[5] = { 1, 2, 3, 4, 5 };
//	int * ptr = arr;
//
//	printf("%d %d %d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3), *(ptr + 4));
//	*ptr += 2; ptr++;
//	*ptr += 2; ptr++;
//	*ptr += 2; ptr++;
//	*ptr += 2; ptr++;
//	*ptr += 2;
//	printf("%d %d %d %d %d\n", *(ptr-4), *(ptr - 3), *(ptr -2), *(ptr - 1), *ptr);
//*/
//// Q02
///*int arr[5] = { 1, 2, 3, 4, 5 };
//int * ptr = arr;
//
//printf("%d %d %d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3), *(ptr + 4));
//*ptr += 2;
//*(ptr + 1) += 2;
//*(ptr + 2) += 2;
//*(ptr + 3) += 2;
//*(ptr + 4) += 2;
//printf("%d %d %d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3), *(ptr + 4));
//*/
////// Q03
////	int arr[5] = { 1, 2, 3, 4, 5 };
////	int * ptr = &arr[4];
////	int sum = 0;
////
////	for (int i = 0; i < 5; i++) {
////		sum += *ptr;
////		ptr -= 1;
////	}
////
////	printf("모든 원소의 합: %d\n", sum);
//
//	// Q04
//	int arr[6] = { 1, 2, 3, 4, 5, 6 };
//	int * ptr1 = arr;
//	int * ptr2 = &arr[5];
//	int temp = 0;
//
//	for (int i = 0; i < 3; i++) {
//		temp = *ptr2;
//		*ptr2 = *ptr1;
//		*ptr1 = temp;
//
//		ptr1 += 1;
//		ptr2 -= 1;
//	}
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}