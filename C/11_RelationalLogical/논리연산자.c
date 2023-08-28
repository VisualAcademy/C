/*
	논리연산자
		&& : AND, 둘 다 참일 때에만 참, 하나라도 거짓이면 거짓
			~이고 그리고 ~
		|| : OR, 하나라도 참일 때에는 참, 둘 다 거짓일때만 거짓
			~이거나 또는 ~
		!  : NOT, 참이면 거짓으로, 거짓이면 참으로
			~가 아닌
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 3;
	int b = 5;
	int c = 0;

	c = (a == b) && (a != b); // (0) && (1) => 0
	printf("%d\n", c); // 0

	c = (a == b) || (a != b); // (0) || (1) => 1
	printf("%d\n", c); // 1

	c = !(a == b); // !(0) => 1
	printf("%d\n", c); // 1

	system("pause");
}
