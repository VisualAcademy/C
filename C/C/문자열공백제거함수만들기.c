/*
    함수 : 문자열 공백 제거 함수 만들기
*/

#include <stdio.h>   // printf
#include <ctype.h>   // isspace
#include <string.h>  // strlen

// 함수 원형
char* TrimLeft(char* string);
char* Trim(char* string);
char* TrimRight(char* string);

// 메인 함수
int main(void)
{
    char str1[] = " Abc Cba ";
    char str2[] = " Abc Cba ";
    char str3[] = " Abc Cba ";

    printf("[%s]\n", TrimLeft(str1));
    printf("[%s]\n", TrimRight(str2));
    printf("[%s]\n", Trim(str3));

    return 0;
}

// 왼쪽 공백 제거 함수
char* TrimLeft(char* string)
{
    while (*string)
    {
        if (isspace(*string))
        {
            ++string; //*(++string);
        }
        else
        {
            break;
        }
    }
    return string;
}

// 오른쪽 공백 제거 함수
char* TrimRight(char* string)
{
    int len = (int)strlen(string) - 1;

    while (len >= 0)
    {
        if (isspace(*(string + len)))
        {
            len--;
        }
        else
        {
            break;
        }
    }
    *(string + ++len) = 0;
    return string;
}

// 양쪽 공백 제거 함수
char* Trim(char* string)
{
    return (TrimLeft(TrimRight(string)));
}
