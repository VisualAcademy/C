/*
    1970년 1월 1일부터 현재(컴파일)까지 몇초가 지났는지???
*/
#include <stdio.h>
#include <time.h>

int main(void)
{
    // time_t형 구조체 변수
    time_t now;

    // 초값 받아오기
    time(&now);

    // 초값 출력
    printf("1970년 1월 1일부터 현재까지 %lld초가 흘렀습니다.\n", (long long)now);

    return 0;
}