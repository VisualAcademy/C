#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t currentTime;
    struct tm* localTime;

    time(&currentTime);  // 현재 시각 가져오기
    localTime = localtime(&currentTime);  // tm 구조체로 변환

    printf("현재 시간과 날짜: %s", asctime(localTime));  // 출력

    return 0;
}
