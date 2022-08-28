#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int count = 0; // 높이 개수 
    int blank = 0; // 공백 개수 
    int block = 0; // 별표 개수 
    int height = 0; // 높이 번호

    printf("다이아몬드 삼각형 높이 개수 입력: ");
    scanf("%d", &count);

    // 삼각형 출력 그룹
    for (int i = 1; i <= count; i++)
    {
        // 공백 출력
        for (int j = i; j <= count; j++)
        {
            printf(" ");
        }
        // 별표 출력
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 역삼각형 출력 그룹 
    for (int i = count - 1; i >= 1; i--)
    {
        for (int j = count; j >= i; j--)
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
