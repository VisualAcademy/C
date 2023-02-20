#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i;
    char strings[3][10]; // 2차원 배열로 여러 문자열 입력
    scanf("%9s %9s %9s", strings[0], strings[1], strings[2]);
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", strings[i]);
    }
    return 0;
}
