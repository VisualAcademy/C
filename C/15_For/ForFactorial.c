// for ���� ����Ͽ� 1���� 4������ ���丮�� ���� ����ϴ� ���α׷�
#include <stdio.h>

void main()
{
	int i, j;
	int fact;

	for (i = 1; i <= 4; i++)
	{
		printf("%2d! -> ", i);
		fact = 1; // 1�� �ʱ�ȭ
		for (j = 1; j <= i; j++)
		{
			fact = fact * j; // 1 * (1 * 2 * 3 * 4)
		}
		printf("%2d\n", fact);
	}

	//getchar();
}
