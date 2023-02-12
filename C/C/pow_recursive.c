#include <stdio.h>

// 거듭제곱을 계산하는 재귀 함수
int pow_recursive(int base, int exponent)
{
    if (exponent == 0)
    {
        // 거듭제곱의 지수가 0이면 1을 반환
        return 1;
    }
    else
    {
        // 그렇지 않으면 base * pow_recursive(base, exponent - 1)의 곱을 반환
        return base * pow_recursive(base, exponent - 1);
    }
}

int main(void)
{
    int base = 3, exponent = 2, result;

    // 거듭제곱 함수 호출 및 결과를 result 변수에 저장
    result = pow_recursive(base, exponent);

    // 결과 출력
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
