/*
대입연산자 : =, +=, -=, *=, /=, %=
*/
#include <stdio.h>

int main(void)
{
	int a, b, c;

	a = 10; // a에 10을 대입
	printf("%d\n", a);//10

	a = 10 + 5; // a에 10 + 5를 대입
	printf("%d\n", a);//15

	a = a + 5; // 15 + 5
	printf("%d\n", a);//20

	a += 5; // a = a + 5와 동일한 코드를 줄임
	printf("%d\n", a);//25

	//b = 2; a = b;
	a = b = 2; // 나열 
	printf("%d\n", a);

	c = (b = 3, a = 8, a * b);
	printf("%d \n", c);

	system("pause");
}
