// strstr 함수로 문자열에서 문자열 찾기 
#include <string.h>
#include <stdio.h>

int main(void)
{
    char string[] = "C language"; // 원본 문자열 

    char* pfind; // 찾은 문자열 담을 그릇
    int position = 0; // 찾은 문자열의 시작 위치

    // 문자열 검색
    pfind = strstr(string, "age"); // "age" 문자열 찾기 

    if (pfind != NULL) // 찾지 못하면 NULL 반환
    {
        printf("%s\n", pfind); // age
        position = (int)(pfind - string + 1); // 앞에서부터 찾은 문자열의 시작 위치
        printf("%d\n", position); // 8 
    }

    return 0;
}
