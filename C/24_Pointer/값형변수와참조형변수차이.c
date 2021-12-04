// valuetype-referencetype.c
#include <stdio.h>

void Plus(int* p)
{
	*p = *p + 10;
	printf("*p = %d\n", *p);
}

void main()
{
	int i = 10; int j = 20;

	int* p;
	p = &i;

	Plus(p);//10¿ª ¥ı«‘.

	printf("i : %d, j = %d\n", i, j);
}
