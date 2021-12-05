/*
	7.1. 예제. 포인터(Pointer) 사용 : 포인터.c
*/
#include <stdio.h>

void main(void)
{
	int a, b, c;
	int* p;

	a = 100;
	b = 200;

	//변수 C의 주소를 p에 기억
	p = &c;

	//변수 p에 기억되어 있는 주소(c)에 기억
	*p = a + b;

	printf("%d + %d = %d\n", a, b, *p);//100 + 200 = 300
}
