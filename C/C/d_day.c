#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t current_time;
    time_t target_time;
    struct tm* current_tm;
    struct tm* target_tm;

    // 현재 시간
    time(&current_time);
    current_tm = localtime(&current_time);

    // 대상 시간
    target_tm = (struct tm*)malloc(sizeof(struct tm));
    target_tm->tm_year = current_tm->tm_year;
    target_tm->tm_mon = current_tm->tm_mon;
    target_tm->tm_mday = current_tm->tm_mday + 10; // 10일 후
    target_time = mktime(target_tm);

    // 두 시간의 차이 계산
    double diff = difftime(target_time, current_time);

    // 결과 출력 (차이는 일 단위)
    int days = (int)diff / 86400;
    printf("%d days\n", days);

    free(target_tm);
    return 0;
}
