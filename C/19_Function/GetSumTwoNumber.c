// get_sum_two_number.c
// C 언어 코드 샘플 - 두 수의 합을 구하는 함수 
#include <stdio.h>

// 두 수의 합을 구하는 함수
double get_sum(double x, double y)
{
    double r = x + y;
    return r;
}

int main(void)
{
    double result = get_sum(3.0, 0.14);
    printf("%lf\n", result); // 3.14

    return 0;
}
