#include <stdio.h>

void main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++) // ��(����) ���
	{
		for (j = 2; j <= 9; j++) // ��(����) ���
		{
			printf("%d*%d=%2d  ", j, i, (j * i));
		}
		printf("\n"); // 1�� ��� �� �ٹٲ�
	}

	system("pause");
}
