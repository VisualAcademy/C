#include <stdio.h>

struct A
{
	int a : 8; // 0~255 : 2^8 = 256
	int b : 4; // 0~3 : 2^2 = 4
};

void main(void)
{
	struct A a;

	a.a = 100;
	a.b = 3;

	printf("%d %d \n", a.a, a.b);
	printf("Size : %d\n", sizeof(a));//8Byte : 64Bit

	system("pause");
}
