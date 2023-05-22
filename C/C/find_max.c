#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_max(int a, int b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    int num1, num2;

    printf("비교할 두 숫자를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    printf("최댓값: %d\n", find_max(num1, num2));

    return 0;
}
