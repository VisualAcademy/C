#include <stdio.h>

void main(void)
{
	int data[] = { 3, 2, 1, 4, 5 };
	int sum = 0;
	int* p;
	int i;

	p = data; // �迭�� ���� �ּҸ� �����Ϳ� ���

	// �����͸� �ݺ� : ������ ������ ���ؼ� �ݺ�
	for (i = 0; i < sizeof(data) / sizeof(int); i++)
	{
		if (*(p + i) % 2 == 0)
		{
			sum += *(p + i);
		}
	}

	printf("¦���� �� : %d\n", sum);
}
