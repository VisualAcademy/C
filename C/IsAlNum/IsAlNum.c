#include <stdio.h>
#include <ctype.h> // 문자 처리 관련 함수

int main()
{
    // 원본 데이터: 문자 배열(문자열)
    char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

    // isalnum() 함수: 알파벳 또는 숫자이면 true
    if (isalnum(str[2]) && isalnum(str[3])) // b && 2
    {
        printf("%c와 %c는 알파벳 또는 숫자\n", str[2], str[3]);
    }

    return 0;
}
