#include <stdio.h>
#include <math.h>

int main(void) 
{
    double base = 2.0, exponent = 3.0, result;

    result = pow(base, exponent);
    printf("%.1f의 %.1f 거듭제곱은 %.2f입니다.\n", base, exponent, result);

    return 0;
}
