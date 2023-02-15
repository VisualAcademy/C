// 현재 날짜와 시간을 문자열로 출력하는 예제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL); // 초 단위로 현재 시간을 구함
    char datetime[20]; // 문자열로 변환한 날짜와 시간을 저장할 배열

    // 날짜와 시간을 문자열로 변환
    strftime(datetime, sizeof(datetime), "%Y-%m-%d %H:%M:%S", localtime(&now));

    printf("현재 날짜 및 시간: %s\n", datetime); // 변환된 문자열을 출력

    return 0;
}
