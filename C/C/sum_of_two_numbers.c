#include <stdio.h>

// 두 개의 실수형 인자를 받아 합을 계산하여 반환하는 함수
double get_sum(double x, double y)
{
    return x + y;
}

int main(void)
{
    double sum = get_sum(3.0, 0.14);
    printf("3.0과 0.14의 합은 %.2lf입니다.\n", sum);

    return 0;
}
