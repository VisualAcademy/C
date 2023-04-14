#include <stdio.h>

// round_decimal() 함수
// value : 변환시킬 값
// digits : 자리수
double round_decimal(double value, int digits)
{
    int i;
    double factor = 1.0;
    double rounding_value = 0.5;

    for (i = 0; i < digits; i++)
    {
        rounding_value /= 10.0;
        factor *= 10.0;
    }
    return ((int)((value + rounding_value) * factor) / factor);
}

int main(void)
{
    double temp;
    double num = 3.777;
    printf("3자리 반올림: %.3f\n", round_decimal(num, 3));
    printf("원래 숫자: %.6f\n", num);
    printf("정수 변환: %d\n", (int)num);

    temp = (int)(num + 0.5);
    printf("1자리 반올림: %.3f\n", temp);

    temp = (int)((num + 0.05) * 10) / 10.0;
    printf("2자리 반올림: %.3f\n", temp);

    temp = (int)((num + 0.005) * 100) / 100.0;
    printf("3자리 반올림: %.3f\n", temp);

    temp = (int)((num + 0.09) * 10) / 10.0;
    printf("2자리에서 올림: %.3f\n", temp);

    temp = (int)(num * 10) / 10.0;
    printf("2자리에서 내림: %.3f\n", temp);

    return 0;
}
