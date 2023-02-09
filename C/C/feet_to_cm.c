#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
    double feet, centimeters;
    const double FEET_TO_CM = 30.48;

    printf("피트를 입력하세요: ");
    scanf("%lf", &feet);

    centimeters = feet * FEET_TO_CM;

    printf("%.2lf 피트는 %.2lf 센티미터에 해당합니다.\n", feet, centimeters);

    return 0;
}
