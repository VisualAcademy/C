// 
#include <stdio.h>

// �Լ��� ������Ÿ��(����)
int Seung(int a, int b);

void main()
{
	int result = Seung(2, 10); // 2 ^ 10 = 1024
	printf("2�� 10�� : %d\n", result);
}

// �Լ��� ���� ����
int Seung(int a, int b)
{
	int c = 1;
	int i = 0;
	for (i = 0; i < b; i++)
	{
		c *= a;
	}
	return c;
}
