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

    float interest = principle * (pow(1 + rate / 100, time) - 1);  // 복리 이자 계산
    float amount = principle + interest;  // 복리 이자를 더한 총 금액 계산

    printf("이자: %.2f\n", interest);  // 계산된 이자 출력
    printf("총 금액: %.2f\n", amount);  // 계산된 총 금액 출력

    return 0;
}
