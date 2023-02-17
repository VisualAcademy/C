/*
    포인터 변수의 연산 : 증감 연산자
*/
#include <stdio.h>

int main(void)
{
    int num[] = { 1, 2, 3, 4, 5 };
    int* pnum = num; // pnum은 num의 첫 번째 원소를 가리킨다.

    //*pnum++ : *(pnum++)
    printf("*pnum++ : %d \n", *pnum++); // 1, pnum이 가리키는 원소 출력, pnum을 1 증가

    //*pnum-- : *(pnum--)
    printf("*pnum-- : %d \n", *pnum--); // 2, pnum이 가리키는 원소를 출력하고, pnum을 1 감소시킨다.

    //*++pnum : *(++pnum)
    printf("*++pnum : %d \n", *++pnum); // 2, pnum을 1 증가시키고, pnum이 가리키는 원소를 출력한다.

    //*--pnum : *(--pnum)
    printf("*--pnum : %d \n", *--pnum); // 1, pnum을 1 감소시키고, pnum이 가리키는 원소를 출력한다.

    return 0;
}
