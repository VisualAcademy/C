/*
	&연산자와 %#x : 변수의 주소(번지) 출력
*/
#include <stdio.h>

void main(void)
{
	int i = 10;
	int j = 20;
	int k = 30;

	printf("%d, %x, %#x\n", i, i, &i); // %d : 10진수
	printf("%d, %x, %#x\n", j, j, &j); // %x : 16진수
	printf("%d, %x, %#x\n", k, k, &k); // %#x : 변수의 주소(번지;Address) 출력
}
