#include <stdio.h>
#define N 5 // N = 5 �ʱ�ȭ

void main(void)
{
	int i, j;

	i = j = 0;

	// �� �ݺ�
	for (i = 0; i < N; i++)
	{
		// ���� ���(4~0������ ���)
		for (j = 0; j < (N - 1) - i; j++)
		{
			printf(" ");
		}
		// �� �ݺ�
		for (j = 0; j < (i + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
