#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
    double feet, centimeters;
    const double FEET_TO_CM = 30.48;

    printf("��Ʈ�� �Է��ϼ���: ");
    scanf("%lf", &feet);

    centimeters = feet * FEET_TO_CM;

    printf("%.2lf ��Ʈ�� %.2lf ��Ƽ���Ϳ� �ش��մϴ�.\n", feet, centimeters);

    return 0;
}
