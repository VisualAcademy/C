#include <stdio.h>

// �� ���� ���� ���ϴ� �Լ�
double GetSum(double x, double y)
{
    double r = x + y;
    return r;
}

int main()
{
    double result = GetSum(3.0, 0.14);
    printf("%.2lf\n", result); // 3.14

    return 0;
}
