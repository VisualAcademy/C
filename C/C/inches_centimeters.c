#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
    double inches, centimeters;
    const double INCH_TO_CM = 2.54;

    printf("��ġ�� �Է��ϼ���: ");
    scanf("%lf", &inches);

    centimeters = inches * INCH_TO_CM;

    printf("%.2lf ��ġ�� %.2lf ��Ƽ�����Դϴ�.\n", inches, centimeters);

    return 0;
}
