// ���Կ����� : =, +=, -=, *=, /=, %=
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;

	a = 10; // =(����;��) 
	b = 5;
	c = 3;

	a = a + 5; // 10bytes
	printf("%d\n", a); // 15

	a += 5; // 7bytes 12�� ���ΰ� ������ ���
	printf("%d\n", a); // 20

	a += b;
	printf("%d\n", a); // 25

	a -= c; // a = a - c; // 25 - 3 = 22
	printf("%d\n", a); // 25

	system("pause");
}
