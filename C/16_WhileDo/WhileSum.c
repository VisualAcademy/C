//[?] while ���� ����Ͽ� 1���� 100������ ���� ���ϴ� ���α׷�
#include <stdio.h>

main()
{
	int i = 0;
	int sum = 0;

	i = 1;
	while (i <= 100)
	{
		sum += i;
		i++;
	}

	printf("1���� 100������ ��: %d\n", sum); // 5050
}
