// ��������� : +, -, *, /, %
#include <stdio.h>

// ���� �Լ� = f(x)
// ���� �Լ� ����
int main(void)
{
	int i = 10;
	int j = 5;
	int k;

	k = i + j;
	printf("%d\n", k); // 15

	k = i - j;
	printf("%d\n", k); // 5

	k = i * j;
	printf("%d\n", k); // 50

	k = i / j;
	printf("%d\n", k); // 2

	k = i % j;
	printf("%d\n", k); // 0

	return 0; 
}
