#include <stdio.h>

int main()
{
    int number;

    // 변수 초기화 필요
    number = 1234;

    // 변수 선언만하고 사용하면 매번 쓰레기 값이 출력
    printf("number 변수의 값: %d\n", number); 

    return 0;
}
