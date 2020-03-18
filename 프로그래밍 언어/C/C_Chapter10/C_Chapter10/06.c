//#include <stdio.h>
//
//int main(void) {
//	int input = 0;
//	int hours = 0;
//	int minutes = 0;
//	int seconds = 0;
//
//	printf("ÃÊ(second) ÀÔ·Â:");
//	scanf_s("%d", &input);
//
//	if (input >= 3600) { 	
//		hours = input / 3600;
//		input = input % 3600;
//	}
//	if(input >= 60) {
//		minutes = input / 60;
//		input = input % 60;
//	}
//	seconds = input;
//
//	printf("[h:%d, m:%d, s:%d]\n", hours, minutes, seconds);
//	return 0;
//}