#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n)
{
    if (n <= 1)
    {
        return n; // n이 1이하이면 그대로 반환
    }

    return n + sum(n - 1); // n이 1이상이면 n과 sum(n-1)의 합을 반환
}

int main(void)
{
    int n;

    printf("1부터 n까지의 합을 구합니다. n의 값을 입력하세요: ");
    scanf("%d", &n);

    printf("1부터 %d까지의 합: %d\n", n, sum(n));

    return 0;
}
