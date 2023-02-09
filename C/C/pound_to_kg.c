#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
    double pounds, kilograms;
    const double POUND_TO_KG = 0.453592;

    printf("파운드를 입력하세요: ");
    scanf("%lf", &pounds);

    kilograms = pounds * POUND_TO_KG;

    printf("%.2lf 파운드는 %.2lf 킬로그램에 해당합니다.\n", pounds, kilograms);

    return 0;
}
