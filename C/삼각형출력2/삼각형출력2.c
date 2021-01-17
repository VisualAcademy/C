#include <stdio.h>
#define N 5 // N = 5 초기화

void main(void)
{
	int i, j;

	i = j = 0;

	// 행 반복
	for (i = 0; i < N; i++)
	{
		// 공백 출력(4~0개까지 출력)
		for (j = 0; j < (N - 1) - i; j++)
		{
			printf(" ");
		}
		// 열 반복
		for (j = 0; j < (i + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
