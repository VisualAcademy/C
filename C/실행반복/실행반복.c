/*
do~while문 : 한번은 실행 후 조건처리
*/
#include <stdio.h>

int main(void)
{
    int intSum = 0;
    int i = 0;

    //[!] Process   
    i = 1;                          //[1] 초기식
    do
    {
        if (i % 2 == 0)             //[!] 필터링
        {
            intSum += i;            //[!] 실행문
        }
        i++;                        //[2] 증감식
    } while (i <= 100);              //[3] 조건식

    printf("%d\n", intSum);         //2550
}
