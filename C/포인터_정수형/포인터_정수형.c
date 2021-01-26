#include <stdio.h>

void main(void)
{
	int i = 10;
	int j = 20;
	int k = 0;

	int* p1;
	int* p2;
	int* p3;

	// 각각의 일반변수를 포인터(참조형) 변수에 참조
	p1 = &i;
	p2 = &j;
	p3 = &k;

	*p3 = *p1 * *p2;

	printf("%d * %d = %d\n", *p1, *p2, *p3);
}
