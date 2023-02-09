#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
    double inches, centimeters;
    const double INCH_TO_CM = 2.54;

    printf("인치를 입력하세요: ");
    scanf("%lf", &inches);

    centimeters = inches * INCH_TO_CM;

    printf("%.2lf 인치는 %.2lf 센티미터입니다.\n", inches, centimeters);

    return 0;
}
