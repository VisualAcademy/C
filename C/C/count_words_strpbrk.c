#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int count = 0;

    printf("문자열을 입력하세요: ");
    scanf("%[^\n]", str);

    char* p = str;

    while (*p != '\0') // 문자열의 끝에 도달할 때까지 반복
    {
        while (*p != '\0' && strchr(" \t\n", *p) != NULL) // 공백, 탭, 개행 문자를 건너뜀
        {
            p++;
        }

        if (*p != '\0') // 공백, 탭, 개행 문자가 아닌 문자를 발견하면
        {
            count++; // 단어의 수를 증가시킴
            p = strpbrk(p, " \t\n"); // 다음 공백, 탭, 개행 문자를 찾음
            if (p == NULL) // 더 이상 공백, 탭, 개행 문자가 없다면 반복문을 빠져나감
            {
                break;
            }
        }
    }

    printf("단어의 수는: %d\n", count); // 단어의 수를 출력

    return 0;
}
