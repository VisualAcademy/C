#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
    double pounds, kilograms;
    const double POUND_TO_KG = 0.453592;

    printf("�Ŀ�带 �Է��ϼ���: ");
    scanf("%lf", &pounds);

    kilograms = pounds * POUND_TO_KG;

    printf("%.2lf �Ŀ��� %.2lf ų�α׷��� �ش��մϴ�.\n", pounds, kilograms);

    return 0;
}
