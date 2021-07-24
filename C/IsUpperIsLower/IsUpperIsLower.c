#include <stdio.h>
#include <ctype.h> // 문자 처리 관련 함수

int main()
{
    // 원본 데이터: 문자 배열(문자열)
    char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

    // isupper() 함수: 대문자이면 1
    if (isupper(str[0])) // A
    {
        printf("%c는 대문자\n", str[0]);
    }

    // islower() 함수: 소문자이면 1
    if (islower(str[2])) // b
    {
        printf("%c는 소문자\n", str[2]);
    }

    return 0;
}
