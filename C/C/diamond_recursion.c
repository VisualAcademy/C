#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

void print(int height) 
{
    int space = 0;
    static int stars = -1;

    if (height <= 0)
    {
        return;
    }

    space = height - 1;
    stars += 2;

    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    for (int j = 0; j < stars; j++)
    {
        printf("*");
    }
    printf("\n");

    print(--height);

    space = height + 1;
    stars -= 2;

    for (int k = 0; k < space; k++)
    {
        printf(" ");
    }
    for (int count = 0; count < stars; count++)
    {
        printf("*");
    }
    printf("\n");
}

int main(void)
{
    int height;

    printf("다이아몬드 삼각형 높이 입력: ");
    scanf("%d", &height);

    print(height);

    return 0;
}
