//[?] 영문 대문자 A부터 Z까지의 문자 하나를 입력받아 소문자로 바꾸어 출력하는 프로그램
#include <stdio.h>

int main()
{
    int c;

    printf("영문 대문자 A부터 Z까지의 문자 하나를 입력: _\b");

    c = getche();

    printf("\n입력한 문자의 소문자: %c\n", tolower(c));

    return 0;
}
