//#include <stdio.h>
//
//typedef struct {
//	char name[20];
//	char phoneNum[20];
//	int age;
//} Person;
//
//void ShowPersonInof(Person man) {
//	printf("name: %s \n", man.name);
//	printf("phoneNum: %s \n", man.phoneNum);
//	printf("age: %d \n", man.age);
//}
//Person ReadPersonInfo(void) {
//	Person man;
//	printf("name? "); scanf_s("%s", &man.name, 20);
//	printf("phoneNum? "); scanf_s("%s", &man.phoneNum, 20);
//	printf("age? "); scanf_s("%d", &man.age);
//	return man;
//}
//
//int main(void) {
//	Person man = ReadPersonInfo();
//	ShowPersonInof(man);
//
//	return 0;
//}