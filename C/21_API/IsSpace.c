#include <stdio.h>
#include <ctype.h> // 문자 처리 관련 함수

int main(void)
{
    // 원본 데이터: 문자 배열(문자열)
    char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

    // isspace() 함수: 공백 문자이면 1
    if (isspace(str[5])) // 5번째 인덱스의 문자값이 공백이냐?
    {
        printf("\"%c\"는 공백\n", str[5]);
    }

    return 0;
}
