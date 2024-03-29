#include <stdio.h>

// 전역 스코프에 정적 변수 i와 j를 선언하고 초기화합니다.
static int i = 10;
static int j = 20;

// sub 함수의 원형을 선언합니다. 이 함수는 정적 변수 i와 j의 값을 증가시키고 출력합니다.
void sub(void);

// sub 함수 정의: 전역 정적 변수 i와 j의 값을 증가시키고 출력합니다.
void sub(void)
{
    ++i;
    ++j;
    printf("sub -> i = %d, j = %d\n", i, j);
}

// main 함수 정의: 자동 변수 i와 j를 선언하고 초기화한 후 sub 함수를 호출하고 결과를 출력합니다.
int main(void)
{
    // main 함수 스코프에 자동 변수 i와 j를 선언하고 초기화합니다.
    int i = 100;
    int j = 100;

    // sub 함수를 두 번 호출합니다. 전역 정적 변수 i와 j의 값이 각 호출에서 증가합니다.
    sub();
    sub();

    // main 함수 스코프의 자동 변수 i와 j의 값을 출력합니다.
    printf("main -> i = %d, j = %d\n", i, j);

    // 프로그램이 정상적으로 종료되었음을 표시하기 위해 0을 반환합니다.
    return 0;
}
