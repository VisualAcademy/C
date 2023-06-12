#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    float principle, rate, time;

    printf("원금을 입력하세요: "); // 사용자에게 원금을 입력 받습니다.
    scanf("%f", &principle);
    printf("이자율을 입력하세요: "); // 사용자에게 이자율을 입력 받습니다.
    scanf("%f", &rate);
    printf("기간을 입력하세요: "); // 사용자에게 기간을 입력 받습니다.
    scanf("%f", &time);

    // 월 복리 이자 계산: 원금 x (1 + 이자율/100/12)^(기간*12)
    float interest = principle * pow(1 + rate / 100 / 12, time * 12);
    float amount = principle + interest;  // 총 금액은 원금과 이자의 합입니다.

    printf("이자: %.2f\n", interest);  // 계산된 이자를 출력합니다.
    printf("총 금액: %.2f\n", amount);  // 계산된 총 금액을 출력합니다.

    return 0;
}
