// 포인터_함수다중반환값.c
#include <stdio.h>

void calculate(int* result, int f, int s)
{
    result[0] = f + s;
    result[1] = f - s;
    result[2] = f * s;
    result[3] = f / s;
}

int main(void)
{
    int result[4];
    int first_number = 10;
    int second_number = 20;
    calculate(result, first_number, second_number);

    printf("first_number + second_number = %d\n", result[0]);

    return 0;
}
