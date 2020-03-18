#include <stdio.h>

/* Q01

void ShowAllData(const int * arr, int len){
	for(int i = 0; i < len; i++){
		printf("%d", arr[i]);
	}
}

ShowAllData함수는 전달된 인자의 모든 데이터를 보여주는 함수이다.
데이터를 보여줄 뿐 데이터를 수정하지 않는다.
따라서 데이터의 수정을 막기위해 인자의 전달시 const int * arr과 같이 const선언을 붙여주어야한다.

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

ShowData라는 함수는 데이터를 보여주기만 하는 함수이다.
그래서 보여주기 위한 변수를 전달시에 const선언을 넣어 보여주기 위한 데이터의 수정을 막았다.
그런데 const로 선언된 포인터 변수의 값을 const 선언되지 않은 포인터변수로 값을 옮겼다.
그리고 cosnt 선언되지 않은 변수로 값의 변경을 했다.
결국 const 선언을 추가한 것이 의미 없는 상황이 됐다.
이렇듯 const 선언을 무의미하게 만드는 문장을 삽입하는 것은 잘못된 것이다.

*/

int main(void) {


	return 0;
}