#include <stdio.h>
#include <ctype.h> // 문자 처리 관련 함수

int main(void)
{
    // 원본 데이터: 문자 배열(문자열)
    char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

    // isalpha() 함수: 알파벳이면 1(참)
    if (isalpha(str[0]))
    {
        printf("%c는 알파벳 문자\n", str[0]);
    }

    return 0;
}
