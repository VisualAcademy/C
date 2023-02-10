#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    float principle, rate, time;

    printf("Enter the principle amount: "); // 원금을 입력하세요
    scanf("%f", &principle);
    printf("Enter the rate of interest: "); // 이자율을 입력하세요
    scanf("%f", &rate);
    printf("Enter the time period: "); // 기간을 입력하세요
    scanf("%f", &time);

    float interest = principle * pow(1 + rate / 100, time);
    float amount = principle + interest;

    printf("Interest: %.2f\n", interest); // 이자
    printf("Amount: %.2f\n", amount); // 총 금액

    return 0;
}
