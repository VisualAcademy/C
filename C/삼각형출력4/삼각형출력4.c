#include <stdio.h>
#define N 5 // N = 5 �ʱ�ȭ

void main(void)
{
	int i, j;

	i = j = 0;

	// �� �ݺ�
	for (i = 0; i < N; i++)
	{
		// ���� ���
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		// ��ǥ ���
		for (j = 0; j < N - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
