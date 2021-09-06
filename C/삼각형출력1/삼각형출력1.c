#include <stdio.h>
#define N 5 // N = 5 초기화

int main(void)
{
	int i, j;

	i = j = 0;

	// 행 반복
	for (i = 0; i < N; i++)
	{
		// 열 반복
		for (j = 0; j < (i + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
