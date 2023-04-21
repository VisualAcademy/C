#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("합: %d\n", a + b);
    return 0;
}
