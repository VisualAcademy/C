// ��ȯ���� �ִ� �Լ�(�޼���)
#include <stdio.h>

int SquareFunction(int x)
{
	int r = x * x;
	return r;
}

int main()
{
	printf("%d\n", SquareFunction(2)); // 4
	printf("%d\n", SquareFunction(4)); // 16
	return 0;
}