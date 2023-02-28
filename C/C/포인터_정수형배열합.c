/*
    7.6. 예제. 정수형 배열의 합을 구하는 프로그램 : 포인터_정수형배열합.c
*/
#include <stdio.h>

int main()
{
    int a[10] = { 11, 22, 33, 44, 55, 54, 43, 32, 21, 10 };
    int* p, i, hap = 0;
    float avr;

    p = a;  //배열의 시작번지를 포인터에 기록

    for (i = 0; i < 10; i++)
    {
        hap += *(p + i);
    }

    avr = (float)(hap / 10.0);

    printf("합 : %d\n", hap);
    printf("평균 : %.2f\n", avr);

    return 0;
}

//합: 325
//평균 : 32.50
