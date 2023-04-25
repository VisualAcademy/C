#include <stdio.h>

int main(void)
{
    int sum = 0; // 결과값
    int odd_sum = 0; // 홀수 합
    int even_sum = 0; // 짝수 합

    for (int i = 1; i <= 1000; ++i)
    {
        if (i % 2 != 0)
        {
            odd_sum += i; // 홀수라면
        }
        else
        {
            even_sum -= i; // 짝수라면
        }
    }
    sum = odd_sum + even_sum;

    printf("1 - 2 + 3 - ... + 999 - 1000 = %d\n", sum); // -500
    printf("홀수의 합 : %d\n", odd_sum);                // 250000
    printf("짝수의 합 : %d\n", -even_sum);              // 250500

    return 0; // 프로그램 정상 종료
}
