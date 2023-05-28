#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 재귀를 사용하여 1부터 n까지의 합을 계산하는 함수
int sum_of_numbers(int n)
{
    if (n <= 1)
    {
        // n이 1이하일 경우 그대로 n을 반환합니다. 
        // (n이 1일 경우 합은 1이며, n이 0일 경우 합은 0입니다.)
        return n;
    }
    else
    {
        // n이 1보다 클 경우, n과 1부터 (n-1)까지의 합을 반환합니다.
        // sum_of_numbers(n - 1) 호출로 인해, 재귀적으로 합이 계산됩니다.
        return n + sum_of_numbers(n - 1);
    }
}

int main(void)
{
    int n;

    // 사용자로부터 합계를 계산할 n의 값을 입력받습니다.
    printf("1부터 n까지의 합을 구합니다. n의 값을 입력하세요: ");
    scanf("%d", &n);

    // 계산된 합계를 출력합니다.
    printf("1부터 %d까지의 합: %d\n", n, sum_of_numbers(n));

    return 0;
}
