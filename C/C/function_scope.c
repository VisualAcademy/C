#include <stdio.h>

int value = 10; // 전역 변수

void display_value()
{
    int value = 20; // 지역 변수
    printf("함수 내의 value: %d\n", value); // 지역 변수 출력
}

int main(void)
{
    display_value(); // 함수 내의 지역 변수 출력
    printf("main 함수 밖의 value: %d\n", value); // 전역 변수 출력

    return 0;
}
