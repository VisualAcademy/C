#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> //gmtime()

int main(void)
{
    //초 단위
    time_t now;

    //시간 구조체
    struct tm* t; // 포인터 변수로 변경

    //초 반환
    time(&now);

    //세계 표준 시간 반환 : localtime() -> gmtime()
    t = gmtime(&now); // 더 이상 역참조가 필요하지 않음

    //세계 표준 시간 출력
    printf("세계 표준시 : %4d.%d.%d %d:%d:%d \n"
        , t->tm_year + 1900 // 포인터 변수를 사용하므로 "->" 연산자 사용
        , t->tm_mon + 1
        , t->tm_mday
        , t->tm_hour
        , t->tm_min
        , t->tm_sec
    );

    return 0;
}
