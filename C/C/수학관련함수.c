/*
    5.1.4. 예제 : 수학 관련 함수 : 수학관련함수.c
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double dblNum = 10.0;

    printf("\n10에 대한 자연로그값 : %f", log(dblNum));
    printf("\n10에 대한 sin 값 : %f", sin(dblNum));
    printf("\n10에 대한 cos 값 : %f", cos(dblNum));
    printf("\n10에 대한 tan 값 : %f\n", tan(dblNum));

    return 0;
}
