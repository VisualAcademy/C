#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

int main(void) 
{
    char date_str[] = "2023-10-20 12:30:15";
    struct tm tm;

    // sscanf를 사용하여 문자열을 tm 구조체로 변환
    sscanf(date_str, "%4d-%2d-%2d %2d:%2d:%2d",
        &tm.tm_year, &tm.tm_mon, &tm.tm_mday,
        &tm.tm_hour, &tm.tm_min, &tm.tm_sec);

    // sscanf는 년도를 1900부터 계산하고, 월을 0부터 시작하여 계산하기 때문에 조정이 필요합니다.
    tm.tm_year -= 1900;
    tm.tm_mon -= 1;

    // tm 구조체를 time_t 타입으로 변환
    time_t time = mktime(&tm);

    printf("날짜 문자열: %s\n", date_str);
    printf("시간 형식: %s", ctime(&time));

    return 0;
}
