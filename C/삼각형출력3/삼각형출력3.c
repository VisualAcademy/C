#include <stdio.h>
#define N 5 // N = 5 초기화

int main(void)
{
	int i, j;

	i = j = 0;

	// 행 반복
	for (i = 0; i < N; i++)
	{
		// 별표 출력(5~1개까지 출력)
		for (j = 0; j < N - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
