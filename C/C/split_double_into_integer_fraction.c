#include <math.h>
#include <stdio.h>

int main(void)
{
    double value = 3.14;
    double intPart, fracPart;

    fracPart = modf(value, &intPart);

    printf("원래 값: %.2lf\n", value);
    printf("정수 부분: %.0lf\n", intPart);
    printf("소수 부분: %.2lf\n", fracPart);

    return 0;
}
