#include <stdio.h>

int main(void)
{
	int sum = 0;
	int i = 1;
	int n = 3;

	for (i = 1; i <= n; i++)
	{
		sum = sum + i; // SUM
	}

	printf("1���� %d������ ��: %d\n", n, sum);

	return 0;
}
