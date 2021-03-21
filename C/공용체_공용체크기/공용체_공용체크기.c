#include <stdio.h>

union UnionType
{
	char a;
	int b;
	double c;
};

void main(void)
{
	union UnionType _u;

	_u.a = 'A';
	_u.b = 1234;
	_u.c = 23456789;

	printf("%cf %d %.1f\n", _u.a, _u.b, _u.c);
	printf("%d\n", sizeof(_u)); // 8
}
