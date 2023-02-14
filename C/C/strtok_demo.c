// `strtok` 함수로 문자열에서 구분자로 문자열 분리하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char csv[] = "red,green,blue"; // 분리할 문자열
    char seps[] = ","; // 구분자 문자열
    char* token = NULL; // 검색된 토큰을 저장할 포인터 변수
    char* next_token = NULL; // 다음 검색 시작 위치를 저장할 포인터 변수

    token = strtok(csv, seps, &next_token); // 첫 번째 토큰 검색

    if (token != NULL) // 토큰이 NULL이 아닌 경우
    {
        printf("%s\n", token); // 첫 번째 토큰 출력 ("red")
        token = strtok(NULL, seps, &next_token); // 두 번째 토큰 검색
        if (token != NULL) // 토큰이 NULL이 아닌 경우
        {
            printf("%s\n", token); // 두 번째 토큰 출력 ("green")
            token = strtok(NULL, seps, &next_token); // 세 번째 토큰 검색
            if (token != NULL) // 토큰이 NULL이 아닌 경우
            {
                printf("%s\n", token); // 세 번째 토큰 출력 ("blue")
            }
        }
    }

    return 0;
}
