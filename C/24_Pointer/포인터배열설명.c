// 포인터배열설명.c
// 포인터 배열
#include <stdio.h>

void main()
{
	int i;
	int a[] = { 2, 1, 5, 4, 3 };

	// 포인터 형 변수 선언
	int* p;

	p = a;//&a[0];//배열명 자체가 배열의 시작 주소

	for (i = 0; i < 5; i++)
	{
		printf("배열: %d, 포인터: %d\n", a[i], *(p + i));
	}
}
