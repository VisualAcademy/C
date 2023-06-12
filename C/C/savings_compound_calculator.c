#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    float initial_deposit;
    float interest_rate;
    int years;
    float future_value;

    printf("초기 적금액: ");  // 사용자에게 초기 적금액을 입력받습니다.
    scanf("%f", &initial_deposit);
    printf("이자율: ");  // 사용자에게 이자율을 입력받습니다.
    scanf("%f", &interest_rate);
    printf("기간(년): ");  // 사용자에게 적금 기간을 입력받습니다.
    scanf("%d", &years);

    future_value = initial_deposit * pow(1 + interest_rate / 100, years);

    printf("초기 적금액: %.2f\n", initial_deposit);  // 초기 적금액을 출력합니다.
    printf("이자율: %.2f%%\n", interest_rate);  // 이자율을 출력합니다.
    printf("기간: %d년\n", years);  // 적금 기간을 출력합니다.
    printf("복리 계산 결과: %.2f원\n", future_value);  // 계산된 적금의 미래 가치를 출력합니다.

    return 0;
}
