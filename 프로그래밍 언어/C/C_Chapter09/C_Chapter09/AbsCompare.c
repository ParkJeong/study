//#include <stdio.h>
//
//int AbsCompare(int num1, int num2);
//int GetAbsValue(int num);
//
//int main(void) {
//	int num1, num2;
//	printf("�� ���� ���� �Է�: ");
//	scanf_s("%d %d", &num1, &num2);
//	printf("%d�� %d�� ������ ū ����: %d \n",
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