#include <stdio.h>

// 두 개의 실수형 인자를 받아 합을 계산하여 반환하는 함수
double get_sum(double x, double y)
{
    double sum = x + y;
    return sum;
}

int main(void)
{
    double result = get_sum(3.0, 0.14);
    printf("%.2lf\n", result); // 출력 결과: 3.14

    return 0;
}
