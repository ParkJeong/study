//#include <stdio.h>
//struct employee {
//	char name[20];
//	char id[14];
//	int salary;
//};
//
//int main(void) {
//	struct employee arr[3];
//	
//	for (int i = 0; i < 3; i++) {
//		printf("종업원의 이름 입력: "); scanf_s("%s", arr[i].name, 20);
//		printf("종업원의 주민번호 입력: "); scanf_s("%s", arr[i].id, 14);
//		printf("종업원의 급여정보 입력: "); scanf_s("%d", &arr[i].salary);
//	}
//	for (int i = 0; i < 3; i++) {
//		printf("종업원의 이름: %s\n", arr[i].name);
//		printf("종업원의 주민번호: %s\n", arr[i].id);
//		printf("종업원의 급여정보: %d\n", arr[i].salary);
//	}
//
//	return 0;
//}