//#include <stdio.h>
//
//typedef struct {
//	unsigned short upper;
//	unsigned short lower;
//} DBShort;
//
//typedef union {
//	int iBuf;
//	char bBuf[4];
//	DBShort sBuf;
//} RDBuf;
//
//int main(void) {
//	RDBuf buf;
//	printf("정수 입력: ");
//	scanf_s("%d", &(buf.iBuf));
//
//	printf("상위 2바이트: %u \n", buf.sBuf.upper);
//	printf("하위 2바이트: %u \n", buf.sBuf.lower);
//	printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]);
//	printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);
//
//	return 0;
//}