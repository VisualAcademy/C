/*
	����ü�� ����� ������ ������ Ÿ�� ����
*/
#include <stdio.h>

typedef union Variable
{
	int i;
	double d;
}var;

void main(void)
{
	var va;

	va.i = 5;

	printf("va.i�� �� : %d\n", va.i);

	va.d = 3.141592;

	printf("va.d�� �� : %f\n", va.d);

	printf("va.i�� �� : %d\n", va.i);
}