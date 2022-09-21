// strrchr 함수로 문자열 뒤에서부터 문자 찾기 
#include <string.h>
#include <stdio.h>

int main(void)
{
    char string[] = "C language"; // 원본 문자열 
    int  ch = 'a'; // 찾을 문자

    char* pfind; // 찾은 문자열 담을 그릇
    int position = 0; // 찾은 문자의 위치

    // 역방향 검색
    pfind = strrchr(string, ch);

    if (pfind != NULL) // 찾지 못하면 NULL 반환
    {
        printf("%s\n", pfind); // age
        position = (int)(pfind - string + 1); // 뒤에서부터 찾은 문자의 위치 계산
        printf("%d\n", position); // 8 
    }

    return 0;
}
