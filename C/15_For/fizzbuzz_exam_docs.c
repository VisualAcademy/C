#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int first;
    int second;

    scanf("%d %d", &first, &second);

    for (int i = first; i <= second; i++)
    {
        if (i % 3 == 0 && i % 4 == 0) // 3과 4의 공배수일 때
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
