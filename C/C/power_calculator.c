#include <stdio.h>

// calculate_power 함수는 입력받은 base의 exponent 제곱을 계산하여 반환합니다.
int calculate_power(int base, int exponent)
{
    int result = 1;

    // exponent 만큼 반복하며 base를 곱하여 거듭제곱 값을 계산합니다.
    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main(void)
{
    int base = 2;
    int exponent = 10;

    // calculate_power 함수를 사용하여 base의 exponent 제곱 값을 계산합니다.
    int calculated_result = calculate_power(base, exponent);

    // 계산된 거듭제곱 값을 출력합니다. (예: 1024 = 2 ^ 10)
    printf("%d의 %d제곱: %d\n", base, exponent, calculated_result);

    return 0;
}
