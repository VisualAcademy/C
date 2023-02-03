// 연습 문제: `&` 기호로 변수의 주솟값을 화면에 출력하기
#include <stdio.h>

int main(void)
{
    int year = 2023;

    printf("%d\n", year); // 2023

    // 주소는 계속 변경
    printf("%p\n", &year); // 005CFDC0, ...
    //printf("%d\n", &year); 
    //printf("%#x\n", &year);

    return 0;
}
