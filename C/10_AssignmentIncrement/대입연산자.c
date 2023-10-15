// 대입연산자 : =, +=, -=, *=, /=, %=
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;

	a = 10; // =(이퀄;는) 
	b = 5;
	c = 3;

	a = a + 5; // 10bytes
	printf("%d\n", a); // 15

	a += 5; // 7bytes 12번 라인과 동일한 기능
	printf("%d\n", a); // 20

	a += b;
	printf("%d\n", a); // 25

	a -= c; // a = a - c; // 25 - 3 = 22
	printf("%d\n", a); // 25

	system("pause");
}
