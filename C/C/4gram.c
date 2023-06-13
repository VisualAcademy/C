#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello world";
    int len = strlen(str);
    int i;

    printf("문자열 '%s'의 4-gram:\n", str);
    for (i = 0; i < len - 3; i++)
    {
        printf("%c%c%c%c\n", str[i], str[i + 1], str[i + 2], str[i + 3]);
    }

    return 0;
}
