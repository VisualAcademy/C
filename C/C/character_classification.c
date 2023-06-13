#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c = '9'; // 검사할 문자

    if (isdigit(c))
    {
        printf("%c는 숫자입니다.\n", c); // c가 숫자인지 확인 후 결과 출력
    }

    c = 'a';

    if (isalpha(c))
    {
        printf("%c는 알파벳입니다.\n", c); // c가 알파벳인지 확인 후 결과 출력
    }

    c = '1';

    if (isalnum(c))
    {
        printf("%c는 숫자 혹은 알파벳입니다.\n", c); // c가 알파벳 또는 숫자인지 확인 후 결과 출력
    }

    c = ' ';

    if (isspace(c))
    {
        printf("공백 문자입니다.\n"); // c가 공백 문자인지 확인 후 결과 출력
    }

    c = '!';

    if (ispunct(c))
    {
        printf("%c는 특수문자입니다.\n", c); // c가 특수문자인지 확인 후 결과 출력
    }

    c = 'A';

    if (isprint(c))
    {
        printf("%c는 출력 가능한 문자입니다.\n", c); // c가 출력 가능한 문자인지 확인 후 결과 출력
    }

    return 0;
}
