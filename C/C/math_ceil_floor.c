#include <math.h>
#include <stdio.h>

int main(void)
{
    double num1 = 5.7, num2 = -3.4;

    printf("%.1lf�� �ø� ��: %.1lf\n", num1, ceil(num1));
    printf("%.1lf�� ���� ��: %.1lf\n", num1, floor(num1));
    printf("%.1lf�� �ø� ��: %.1lf\n", num2, ceil(num2));
    printf("%.1lf�� ���� ��: %.1lf\n", num2, floor(num2));

    return 0;
}
