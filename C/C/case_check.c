#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c1 = 'a'; // 검사할 소문자
    char c2 = 'A'; // 검사할 대문자

    if (islower(c1))
    {
        printf("%c는 소문자입니다.\n", c1); // c1이 소문자인지 확인 후 결과 출력
    }

    if (isupper(c2))
    {
        printf("%c는 대문자입니다.\n", c2); // c2가 대문자인지 확인 후 결과 출력
    }

    return 0;
}
