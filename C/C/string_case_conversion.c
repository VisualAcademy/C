// 대문자로 변경 : strupr()
// 소문자로 변경 : strlwr()
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[80];

    printf("영문 문자열을 입력 : ");
    fgets(buffer, sizeof(buffer), stdin);

    _strupr(buffer); // String UpperCase
    printf("%s", buffer);

    _strlwr(buffer); // String LowerCase
    printf("%s", buffer);

    return 0;
}
