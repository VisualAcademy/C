#include <stdio.h>
#include <ctype.h> // 문자 처리 관련 함수

int main(void)
{
    // 원본 데이터: 문자 배열(문자열)
    char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

    // isdigit() 함수: 숫자이면 1(true)
    if (isdigit(str[1]))
    {
        printf("%c은(는) 숫자\n", str[1]);
    }
}
