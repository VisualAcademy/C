#include <stdio.h>

// 피보나치 수열의 n번째 항을 계산하는 재귀 함수
int fibonacci_recursive(int n)
{
    if (n == 0 || n == 1)
    {
        // n이 0 또는 1일 경우 그대로 반환
        return n;
    }
    else
    {
        // 그렇지 않으면 fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2)의 합을 반환
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main(void)
{
    int n = 10, result;

    // 피보나치 수열의 n번째 항을 result 변수에 저장
    result = fibonacci_recursive(n);

    // 결과 출력
    printf("fibonacci(%d) = %d\n", n, result);

    return 0;
}
