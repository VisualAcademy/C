/*
    mktime() : 날짜 및 시간을 더하거나 빼기
    ctime() : time_t를 문자열로 변환
*/
#include <stdio.h>
#include <time.h>

#define DAYSECOND 86400L

int main(void)
{
    // 초 단위
    time_t now;
    // 시간 구조체: 현재 시간, 크리스마스 시간
    struct tm t = { 0 }, dday = { 0, 0, 0, 25, 11, 105 }; // 월은 0부터 시작하므로 11은 12월을 의미함
    // 계산용 변수
    int n1, n2, nDday;

    // 초 계산
    now = time(NULL);
    // 현재 시간 계산
    t = *localtime(&now);

    // 현재 시간 중 시/분/초를 초기화
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 0;

    // 시간 구조체 형식으로 변환
    dday.tm_year += 100; // 2005년은 1900년부터 105년이 지난 시점이므로, 100을 더해야 함
    dday.tm_mon -= 1;

    // 현재 시간 계산
    n1 = mktime(&t);
    // 크리스마스 시간 계산
    n2 = mktime(&dday);

    // 차이값 계산
    nDday = (n2 - n1) / DAYSECOND;

    // 결과 출력
    printf("오늘 날짜: %s", ctime(&now));
    printf("크리스마스: %d일 남음\n", nDday);

    return 0;
}
