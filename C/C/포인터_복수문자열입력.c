#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char* a[3]; // 문자열 데이터 저장 3개

    scanf("%s %s %s", a, a + 1, a + 2); // 배열 a의 각 요소에 문자열 입력

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", a + i); // 배열 a의 각 요소 출력
    }

    return 0;
}
