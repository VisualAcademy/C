// 1���� 100���� ¦���� ���� ���ϴ� ���α׷�.
#include <stdio.h>

int main(void)
{
	//[1] Init
	int sum;
	int i;

	//[2] Input
	sum = 0;
	i = 0;

	//[3] Process : Algorithm : �ݺ���+���ǹ�
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	//[4] Output
	printf("¦���� �� : %d\n", sum);

	return 0;
}
