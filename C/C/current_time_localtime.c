/*
    날짜 및 구하기: time(), localtime()
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

void main(void)
{
    // 날짜 관련 구조체 변수 선언
    time_t now;
    struct tm t;

    // 전체 시간의 초
    time(&now);

    // 초를 기준으로 현재시간을 구함
    t = *localtime(&now);

    // 날짜 및 시간 출력
    printf("Now: %4d년 %d월 %d일 %d시 %d분 %d초\n"
        , t.tm_year + 1900
        , t.tm_mon + 1
        , t.tm_mday
        , t.tm_hour
        , t.tm_min
        , t.tm_sec
    );

    return 0;
}
