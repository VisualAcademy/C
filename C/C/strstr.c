// strstr 함수로 문자열 검색하기
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[] = "C Coding!!!";

    char* pfind = strstr(buffer, "ing");

    printf("%s\n", pfind); // ing!!!

    return 0;
}
