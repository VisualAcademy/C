#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    float principle, rate, time;

    printf("원금을 입력하세요: ");
    scanf("%f", &principle);
    printf("이자율을 입력하세요: ");
    scanf("%f", &rate);
    printf("기간을 입력하세요: ");
    scanf("%f", &time);

    float interest = principle * pow(1 + rate / 100, time);
    float amount = principle + interest;

    printf("이자: %.2f\n", interest);
    printf("총 금액: %.2f\n", amount);

    return 0;
}
