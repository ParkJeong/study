#include <stdio.h>

/* Q01

void ShowAllData(const int * arr, int len){
	for(int i = 0; i < len; i++){
		printf("%d", arr[i]);
	}
}

ShowAllData�Լ��� ���޵� ������ ��� �����͸� �����ִ� �Լ��̴�.
�����͸� ������ �� �����͸� �������� �ʴ´�.
���� �������� ������ �������� ������ ���޽� const int * arr�� ���� const������ �ٿ��־���Ѵ�.

*/
/* Q02
void ShowData(const int * ptr){
	int * rptr = ptr;
	printf("%d \n", rptr);
	*rptr = 20;
}

int main(void){
	int num = 10;
	int * ptr = &num;
	ShowData(ptr);
	return 0;
}

ShowData��� �Լ��� �����͸� �����ֱ⸸ �ϴ� �Լ��̴�.
�׷��� �����ֱ� ���� ������ ���޽ÿ� const������ �־� �����ֱ� ���� �������� ������ ���Ҵ�.
�׷��� const�� ����� ������ ������ ���� const ������� ���� �����ͺ����� ���� �Ű��.
�׸��� cosnt ������� ���� ������ ���� ������ �ߴ�.
�ᱹ const ������ �߰��� ���� �ǹ� ���� ��Ȳ�� �ƴ�.
�̷��� const ������ ���ǹ��ϰ� ����� ������ �����ϴ� ���� �߸��� ���̴�.

*/

int main(void) {


	return 0;
}