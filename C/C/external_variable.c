#include <stdio.h>

int count = 0; // 전역 변수(외부 변수) 선언

void increment()
{
    extern int count; // 전역 변수 사용
    count++; // 전역 변수 값 증가
}

int main(void)
{
    printf("count = %d\n", count); // 초기값 출력
    increment(); // 함수 호출
    printf("count = %d\n", count); // 변경된 값 출력

    return 0;
}
