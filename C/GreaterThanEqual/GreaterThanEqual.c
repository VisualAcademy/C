#define _CRT_SECURE_NO_WARNINGS 
// 2���� ���� �Է��� �� �� �߿��� ū ���� ����ϴ� ���α׷�
#include <stdio.h>

void main(void)
{
	int first = 0, second = 0;
	printf("2���� ������ �Է��ϼ���. ___\b\b\b");
	scanf("%d %d", &first, &second);

	if (first >= second)
	{
		printf("ū��: %d\n", first);
	}
	else
	{
		printf("ū��: %d\n", second);
	}
}
