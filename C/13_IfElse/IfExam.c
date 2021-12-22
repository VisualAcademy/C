#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int age = 0;
    int _ = scanf("%d", &age);

    if (age < 14)
    {
        printf("만 14세 미만 어린이는 부모님의 동의가 필요합니다.\n");
    }

    return 0;
}
