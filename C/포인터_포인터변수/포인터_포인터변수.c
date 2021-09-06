/*
	포인터 변수 : 특정 변수의 주소를 담을 수 있는 그릇
*/
#include <stdio.h>

int main(void)
{
	int i, j, k;		// 일반 변수 : 값
	int* p;			// 포인터 변수 : 다른 변수의 주소, 레퍼런스(참조) 변수

	i = 10;
	j = 20;
	k = 0;

	p = &k;	// 변수 k의 주소를 p에 기억

	printf("%d %d %d %d\n", i, j, k, *p); // *p => 포인터 변수가 참조하고 있는 변수의 값

	*p = i * j; // k = i * j;
	printf("%d %d %d %d\n", i, j, k, *p);
}
