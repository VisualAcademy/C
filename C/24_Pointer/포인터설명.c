/*
	7.1. ����. ������(Pointer) ��� : ������.c
*/
#include <stdio.h>

void main(void)
{
	int a, b, c;
	int* p;

	a = 100;
	b = 200;

	//���� C�� �ּҸ� p�� ���
	p = &c;

	//���� p�� ���Ǿ� �ִ� �ּ�(c)�� ���
	*p = a + b;

	printf("%d + %d = %d\n", a, b, *p);//100 + 200 = 300
}
