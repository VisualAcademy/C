// 2���� ���ڸ� �ַܼκ��� �Է¹��� �� ��� ���� �� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int x, y, r;

	printf("2���� ������ �Է��ϼ���: ");
	r = scanf("%d %d", &x, &y);

	printf("%d + %d = %d\n", x, y, (x + y));
	printf("%d - %d = %d\n", x, y, (x - y));
	printf("%d * %d = %d\n", x, y, (x * y));
	printf("%d / %d = %d\n", x, y, (x / y));
	printf("%d %% %d = %d\n", x, y, (x % y));
}
