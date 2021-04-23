#include <stdio.h>

typedef int (*Cal)(int , int);

int add(int a, int b)
{
	    return (a + b);
}
void hello()
{
	    printf("hello\n");
}
int main()
{
	    int (*fPtr1)(int, int);
		void (*fPtr2)();
		Cal fPtr3;

	    fPtr1 = add;
		fPtr2 = hello;
		fPtr3 = add;		

		printf("1 + 2 = %d \n", fPtr1(1, 2));
		fPtr2();
		printf("1 + 2 = %d \n", fPtr3(1, 2));
		return (0);
}
