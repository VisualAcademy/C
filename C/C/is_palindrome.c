#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int is_palindrome(char* str)
{
    int len = strlen(str);
    int i;

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    char str[80];

    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    if (is_palindrome(str))
    {
        printf("문자열 '%s'은 회문입니다.\n", str);
    }
    else
    {
        printf("문자열 '%s'은 회문이 아닙니다.\n", str);
    }

    return 0;
}
