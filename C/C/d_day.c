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
    target_time = current_time + 10 * 24 * 60 * 60;  // 10일 후
    target_tm = localtime(&target_time);

    // 두 시간의 차이 계산
    double diff = difftime(target_time, current_time);

    // 결과 출력 (차이는 일 단위)
    int days = (int)(diff / 86400);
    printf("%d days\n", days);

    return 0;
}
