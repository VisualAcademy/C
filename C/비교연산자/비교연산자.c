/*
비교 연산자 :
== : 같은지? 같으면 참(1;true), 다르면 거짓(0;false)
!= : 다른지? 다르면 참(1;true), 같으면 거짓(0;false)
<  : 작다.
<= : 작거나 같다.
>  : 크다.
>= : 크거나 같다.
*/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 5;
	int b = 3;
	int c = 0;

	c = (a == b); // a와 b가 같은지? 같으면 참(1;true), 다르면 거짓(0;false)
	printf("%d\n", c); // 0

	c = (a != b); // a와 b가 다른지? 
	printf("%d\n", c); // 1

	printf("%d\n", (a < b));	// 0
	printf("%d\n", (a <= b));	// 0
	printf("%d\n", (a > b));	// 1
	printf("%d\n", (a >= b));	// 1

	system("pause");
}
