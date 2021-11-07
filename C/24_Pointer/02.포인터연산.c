// 포인터연산.c
#include <stdio.h>

int main(void)
{
	// 값형 변수
	int a, b, c;
	// 포인터(참조)형 변수
	int* pa, * pb, * pc;

	a = 10;
	b = 20;
	c = 0;

	pa = &a;
	pb = &b;
	pc = &c;

	*pc = *pa + *pb;

	printf("%d, %d, %d\n", *pa, *pb, *pc);

	return 0; 
}
