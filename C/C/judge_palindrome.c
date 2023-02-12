#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int is_palindrome(char* s, int start, int end)
{
    if (start >= end)
    {
        // start 인덱스와 end 인덱스가 같거나 지나칠 경우 회문으로 판단하여 1 반환
        return 1;
    }
    if (s[start] != s[end])
    {
        // start 인덱스와 end 인덱스의 문자가 다를 경우 회문이 아닌 것으로 판단하여 0 반환
        return 0;
    }

    // start 인덱스와 end 인덱스의 문자가 같은 경우
    // start 인덱스를 1 증가시키고, end 인덱스를 1 감소시키고
    // is_palindrome 함수를 다시 호출
    return is_palindrome(s, start + 1, end - 1);
}

int main(void)
{
    char s[21];
    int len;

    printf("문자열을 입력하세요: ");
    scanf("%s", s);

    len = strlen(s);
    if (is_palindrome(s, 0, len - 1))
    {
        printf("회문입니다.\n"); // is_palindrome 함수의 결과가 1인 경우
    }
    else
    {
        printf("회문이 아닙니다.\n"); // is_palindrome 함수의 결과가 0인 경우
    }

    return 0;
}
