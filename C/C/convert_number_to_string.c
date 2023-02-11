#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int num = 123;
    char str[80];

    sprintf(str, "%d", num);
    printf("숫자를 문자열로 변환: %s\n", str);

    return 0;
}
