/*
    if문 : if, if~else, else if
*/
#include <stdio.h>

int main(void)
{
    int a = 4;

    //[1] 참일때만 수행
    if (a % 2 == 0)         //조건식
    {
        printf("짝수\n");    //조건식이 참일때만
    }

    //[2] 참 또는 거짓일 때 수행
    if (a % 2 != 0)         //조건식
    {
        printf("홀수\n");    //조건식이 참일때
    }
    else
    {
        printf("짝수\n");    //조건식이 거짓일 때
    }

    //[3] 여러개의 조건: 3의 배수?, 5의 배수?
    if (a % 3 == 0)             // 3의 배수라면?
    {
        printf("3의 배수\n");
    }
    else if (a % 5 == 0)        // 5의 배수라면?
    {
        printf("5의 배수\n");
    }
    else if (a % 7 == 0)        // 7의 배수라면?
    {
        printf("7의 배수\n");
    }
    else
    {
        printf("3, 5, 7의 배수가 아닌 수\n");
    }

    return 0; 
}
