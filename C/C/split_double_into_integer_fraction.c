#include <math.h>
#include <stdio.h>

int main(void)
{
    double value = 3.14;
    double intPart, fracPart;

    fracPart = modf(value, &intPart);

    printf("���� ��: %.2lf\n", value);
    printf("���� �κ�: %.0lf\n", intPart);
    printf("�Ҽ� �κ�: %.2lf\n", fracPart);

    return 0;
}
