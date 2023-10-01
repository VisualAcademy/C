#include <stdio.h>

union UnionType
{
	char a;
	int b;
	double c;
};

int main(void)
{
	union UnionType _u;

	_u.a = 'A';
	printf("%c\n", _u.a);

	_u.b = 1234;
	printf("%d\n", _u.b);

	_u.c = 123456789;
	printf("%.2f\n", _u.c);

	printf("공용체 크기: %d\n", sizeof(_u)); // 8
}
