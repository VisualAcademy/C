// �� ���� ���� ���ϱ� 
#include <stdio.h>

main()
{
	int first = 3;
	int second = 5;
	int diff = 0;

	if (first > second)
	{
		diff = first - second;
	}
	else
	{
		diff = second - first;
	}

	printf("%d�� %d�� ����: %d\n", first, second, diff);
}
