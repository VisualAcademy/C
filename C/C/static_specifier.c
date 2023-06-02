#include <stdio.h>

void increment()
{
    int local_var = 0;        // 일반 지역 변수
    static int static_var = 0; // static 지역 변수

    local_var++;   // 매 호출마다 초기화
    static_var++;  // 값 유지

    printf("local_var = %d, static_var = %d\n", local_var, static_var);
}

int main()
{
    increment(); // 변수 증가
    increment(); // local_var 초기화, static_var 유지
    increment(); // local_var 초기화, static_var 증가
    return 0;
}
