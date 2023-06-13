#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[50] = "Hello, World!";
    char dest[50];

    strcpy(dest, src);

    printf("복사된 문자열: %s\n", dest);

    return 0;
}
