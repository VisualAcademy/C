/*
순차연산자 : 순서대로 저장
콤마연산자
*/
#include <stdio.h>

int main(void)
{
    int num1, num2 = 10, num3;
    num1 = 5;
    num1 += 20;
    num2 += num1; // num2 = 35
    num3 = num2;
    num3 = (num1 = 5, num1 += 20, num2 += num1);
    printf("\nnum1=%d num2=%d num3=%d\n", num1, num2, num3); // 25, 35+25=60, 60

    num3 = (1, 2, 3);
    printf("num3 = %d\n", num3); // 3

    return 0;
}
