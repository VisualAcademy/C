// �� ���� ���� ���ϴ� �Լ�
#include <stdio.h>

double GetSumTwoNumber(double x, double y)
{
	double r = x + y;
	return r;
}

int main(void)
{
	printf("%.2f\n", GetSumTwoNumber(3, 5)); // 8.00
	printf("%.2f\n", GetSumTwoNumber(3, 0.14)); // 3.14

	return 0;
}
