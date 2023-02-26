#include <stdio.h>

#define A 10
#define B 20
#define C 30

int main(void)
{
    printf("%d + %d + %d = %d\n", A, B, C, (A + B + C)); // A, B, C 세 개의 정수를 더한 결과 출력
    printf("%d + %d - %d = %d\n", A, B, C, (A + B - C)); // A와 B를 더하고 C를 빼는 결과 출력

    return 0;
}
