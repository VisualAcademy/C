#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[80];
    printf("문자열을 입력하세요: "); // 사용자로부터 문자열 입력 받기
    fgets(str, 80, stdin); // 문자열 입력 받기

    const char* p = str;
    while (*p)
    {
        *p = toupper(*p); // 대문자로 변환
        p++;
    }
    puts(str); // 문자열 출력

    p = str;
    while (*p)
    {
        *p = tolower(*p); // 소문자로 변환
        p++;
    }
    puts(str); // 문자열 출력

    return 0;
}
