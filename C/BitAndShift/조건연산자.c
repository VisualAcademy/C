/*
조건(3항) 연산자

(조건식) ? (참일때) : (거짓일때)
*/
#include <stdio.h>

int main(void)
{
	int a = 3; int b = 5;
	int c;

	c = (a == b) ? 10 : 5;

	printf("%d\n", c);//?

	//system("pause");
	return 0; 
}
