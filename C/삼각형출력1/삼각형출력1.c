#include <stdio.h>
#define N 5 // N = 5 �ʱ�ȭ

int main(void)
{
	int i, j;

	i = j = 0;

	// �� �ݺ�
	for (i = 0; i < N; i++)
	{
		// �� �ݺ�
		for (j = 0; j < (i + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
