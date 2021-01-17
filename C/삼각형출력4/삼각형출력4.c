#include <stdio.h>
#define N 5 // N = 5 초기화

void main(void)
{
	int i, j;

	i = j = 0;

	// 행 반복
	for (i = 0; i < N; i++)
	{
		// 공백 출력
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		// 별표 출력
		for (j = 0; j < N - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
