#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];

    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    _strupr(str);
    printf("대문자로 변환된 문자열: %s\n", str);

    return 0;
}
