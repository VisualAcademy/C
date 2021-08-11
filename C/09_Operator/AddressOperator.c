#include <stdio.h>

int main()
{
    int number = 1234;

    printf("number 변수에 들어 있는 값: %d, number 변수의 주솟값: %p\n"
        , number, &number); // 주소는 계속 변경됨

    return 0;
}
