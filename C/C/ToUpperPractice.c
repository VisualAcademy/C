//[?] 영문 대문자 A부터 Z까지의 문자 하나를 입력받아 소문자로 바꾸어 출력하는 프로그램
#include <stdio.h>

int main()
{
    int c;

    printf("영문 대문자 A부터 Z까지의 문자 하나를 입력: _\b");

    c = getche();

    // 대문자 'A'부터 'Z'까지만 처리하고, 나머지는 경고음과 함께 종료
    if (c >= 'A' && c <= 'Z')
    {
        printf("\n입력한 문자의 소문자: %c\n", tolower(c));
    }
    else
    {
        printf("\n다시 도전하세요.\a\n");
    }

    return 0;
}
