#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
    double pyung, square_meters;
    const double PYUNG_TO_SQM = 3.305785;

    printf("평을 입력하세요: ");
    scanf("%lf", &pyung);

    square_meters = pyung * PYUNG_TO_SQM;

    printf("%.2lf 평은 %.2lf 제곱미터입니다.\n", pyung, square_meters);

    return 0;
}
