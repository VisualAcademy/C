#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void)
{
    // 초 단위
    time_t now;

    // 현재까지 초 단위 반환
    time(&now);

    // 현재 시간 문자열 출력
    printf("현재 날짜 및 시간: %s", ctime(&now));

    return 0;
}
