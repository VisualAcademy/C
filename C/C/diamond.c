#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int height;

    printf("다이아몬드 삼각형 높이 입력: ");
    scanf("%d", &height);

    // 삼각형 출력 그룹
    for (int i = 1; i <= height; i++)
    {
        for (int j = i; j <= height; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 역삼각형 출력 그룹 
    for (int i = height - 1; i >= 1; i--)
    {
        for (int j = height; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
