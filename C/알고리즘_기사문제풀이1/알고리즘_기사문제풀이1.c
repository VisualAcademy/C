#include <stdio.h>

void main(void)
{
    // Input
    int intSum = 0; // 결과값
    int a = 0; // 홀수번째 합
    int b = 0; // 짝수번째 합
    int i = 0; // 반복용
    // Process
    for (i = 1; i <= 1000; i++)
    {
        if (i % 2 != 0) // 홀수라면
        {
            a += i;
        }
        if (i % 2 == 0) // 짝수라면
        {
            b += -i;
        }
    }
    intSum = a + b;
    // Output
    printf(
        "1 - 2 + 3 - ... + 999 - 1000 = %d\n"
        , intSum); // -500
    printf("홀수의 합 : %d\n", a);//250000
    printf("짝수의 합 : %d\n", -b);//250500
}
