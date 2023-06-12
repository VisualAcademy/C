#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> // 날짜 및 시간 조작을 위한 time 라이브러리를 포함

int main(void)
{
    // 현재 시간을 가져옴
    time_t t = time(NULL);

    // time_t 값을 로컬 시간으로 변환
    struct tm tm = *localtime(&t);

    // 현재 날짜 및 시간을 출력
    printf("현재 날짜와 시간: %04d-%02d-%02d %02d:%02d:%02d\n",
        tm.tm_year + 1900, // tm_year에 1900을 더함 (1900년 이후 경과 년도이므로)
        tm.tm_mon + 1, // tm_mon에 1을 더함 (1월이 0부터 시작하므로)
        tm.tm_mday, // 월의 일자 (1-31)
        tm.tm_hour, // 자정 이후 시간 (0-23)
        tm.tm_min, // 시간 이후 분 (0-59)
        tm.tm_sec); // 분 이후 초 (0-60)

    return 0;
}
