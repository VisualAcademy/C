#include <stdio.h>
#include <math.h>

int main(void) 
{
    double base = 2.0, exponent = 3.0, result;

    result = pow(base, exponent);
    printf("%.1f�� %.1f �ŵ������� %.2f�Դϴ�.\n", base, exponent, result);

    return 0;
}
