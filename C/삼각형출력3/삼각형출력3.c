#include <stdio.h>
#define N 5 // N = 5 �ʱ�ȭ

void main(void)
{
	int i, j;

	i = j = 0;

	// �� �ݺ�
	for (i = 0; i < N; i++)
	{
		// ��ǥ ���(5~1������ ���)
		for (j = 0; j < N - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
