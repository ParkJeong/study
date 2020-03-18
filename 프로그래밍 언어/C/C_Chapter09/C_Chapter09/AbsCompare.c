//#include <stdio.h>
//
//int AbsCompare(int num1, int num2);
//int GetAbsValue(int num);
//
//int main(void) {
//	int num1, num2;
//	printf("두 개의 정수 입력: ");
//	scanf_s("%d %d", &num1, &num2);
//	printf("%d와 %d중 절댓값이 큰 정수: %d \n",
//		num1, num2, AbsCompare(num1, num2));
//	return 0;
//}
//
//
//int AbsCompare(int num1, int num2) {
//
//	if (GetAbsValue(num1) > GetAbsValue(num2)) return num1;
//	else return num2;
//	return 0;
//}
//int GetAbsValue(int num) {
//	if (num < 0) return num * (-1);
//	else return num;
//}