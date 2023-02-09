#include <stdio.h>
#include <time.h>

int main() {
    struct tm time1, time2;
    time_t time1_sec, time2_sec;

    // time1 초기화
    time1.tm_hour = 10;
    time1.tm_min = 30;
    time1.tm_sec = 0;
    time1_sec = mktime(&time1);

    // time2 초기화
    time2.tm_hour = 12;
    time2.tm_min = 45;
    time2.tm_sec = 0;
    time2_sec = mktime(&time2);

    // 두 시간의 차이 계산
    double diff = difftime(time2_sec, time1_sec);

    // 결과 출력 (차이는 시간 단위)
    int hours = (int)diff / 3600;
    int minutes = ((int)diff % 3600) / 60;
    int seconds = (int)diff % 60;

    printf("The difference between two times is %d hours, %d minutes, and %d seconds\n", hours, minutes, seconds);

    return 0;
}
