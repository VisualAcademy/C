// �����Ϳ���.c
#include <stdio.h>

int main(void)
{
	// ���� ����
	int a, b, c;
	// ������(����)�� ����
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
