#include <stdio.h>

// 삼항 연산자로 팩토리얼 계산
int Fact(int n)
{
    // n이 1보다 크면 n * Fact(n-1), 아니면 1 반환
    return (n > 1) ? n * Fact(n - 1) : 1;
}

// 재귀 함수로 팩토리얼 계산
int Factorial(int n)
{
    // 기본 케이스: n이 0 또는 1일 때 1 반환
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // 재귀 호출: n * Factorial(n-1) 반환
    return n * Factorial(n - 1);
}

// 반복문으로 팩토리얼 계산
int FactorialFor(int n)
{
    int result = 1;

    // 1부터 n까지 정수를 곱하여 결과에 저장
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    // 결과 반환
    return result;
}

int main(void)
{
    // 직접 계산한 팩토리얼 결과 출력
    printf("%d\n", 4 * 3 * 2 * 1);

    // 반복문 사용하여 팩토리얼 계산 결과 출력
    printf("%d\n", FactorialFor(4));

    // 재귀 함수 사용하여 팩토리얼 계산 결과 출력
    printf("%d\n", Factorial(4));

    // 삼항 연산자 사용하여 팩토리얼 계산 결과 출력
    printf("%d\n", Fact(4));

    return 0;
}
