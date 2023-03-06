/*
    4.2.3. 예제. do문 : 반복문3.c
*/
//do~while문
#include <stdio.h>

void main()
{
    //입력
    int intSum = 0; int i;
    //처리
    i = 1;                    //초기식
    do          //조건을 나중에 판단.
    {
        intSum += i;     //실행문
        i++;               //증감식
    } while (i <= 100);     //조건문;
    //출력
    printf("%d", intSum);
}
