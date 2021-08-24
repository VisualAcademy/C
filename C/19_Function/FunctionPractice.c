//[?] 곱셈 함수 만들기
#include <stdio.h>

// 함수 원형
double Multiply(double a, double b);

int main()
{
    double result = 0;
    result = Multiply(3.14, 10.0);
    printf("결과: %.2lf\n", result);
    return 0;
}

// 함수 본문
double Multiply(double a, double b)
{
    return a * b;
}
