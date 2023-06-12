#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    float initial_deposit;
    float interest_rate;
    int years;
    float future_value;

    printf("초기 예금액을 입력하세요: ");  // 사용자에게 초기 예금액을 입력받습니다.
    scanf("%f", &initial_deposit);
    printf("이자율을 입력하세요: ");  // 사용자에게 연간 이자율을 입력받습니다.
    scanf("%f", &interest_rate);
    printf("예금 기간을 입력하세요: ");  // 사용자에게 예금 기간을 입력받습니다.
    scanf("%d", &years);

    future_value = initial_deposit * pow(1 + interest_rate / 100, years);

    printf("예금의 미래 가치는: %.2f\n", future_value);  // 계산된 예금의 미래 가치를 출력합니다.
    return 0;
}
