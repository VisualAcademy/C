#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t currentTime;
    struct tm* localTime;

    time(&currentTime);  // 현재 시각을 time_t 타입으로 가져옵니다.
    localTime = localtime(&currentTime);  // time_t 타입을 tm 구조체로 변환합니다.

    printf("Current time and date: %s", asctime(localTime));  // tm 구조체를 ASCII 형식의 문자열로 변환하여 출력합니다.

    return 0;
}
