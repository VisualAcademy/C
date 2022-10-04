#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int divisor;

    scanf("%d", &divisor);

    for (int i = 1; i <= divisor; i++)
    {
        if (divisor % i == 0)
        {
            printf("%2d은(는) %2d의 약수입니다.\n", i, divisor);
        }
    }

    return 0;
}
