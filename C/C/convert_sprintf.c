#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int integer = 123;
    float floating = 123.456;
    char str[80];

    sprintf(str, "%d", integer);
    printf("정수를 문자열로 변환: %s\n", str);

    sprintf(str, "%.3f", floating);
    printf("실수를 문자열로 변환: %s\n", str);

    return 0;
}
