//[?] ���� �Լ� �����
#include <stdio.h>

// �Լ� ����
double Multiply(double a, double b);

int main()
{
    double result = 0;
    result = Multiply(3.14, 10.0);
    printf("���: %.2lf\n", result);
    return 0;
}

// �Լ� ����
double Multiply(double a, double b)
{
    return a * b;
}
