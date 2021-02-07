// 
#include <stdio.h>

void Su(int a) {
	a += 5;
	printf("[1] %d\n", a);//15
}

void Num(int* b) {
	*b += 5;
	printf("[2] %d\n", *b);//10
}

void main()
{
	int a; //[1] Value : 값 전달
	int b; //[2] Reference : 참조 전달
	a = 10;
	b = 5;
	Su(a);
	Num(&b);
	printf("[3] %d\n", a);//10
	printf("[4] %d\n", b);//10
}
