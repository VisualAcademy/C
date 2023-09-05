/*
    4.4. 예제 : 짝수의 합을 구하는 프로그램 : 짝수의합.c
*/
#include <stdio.h>

int main(void)
{
    //입력(Input) 변수 선언부 
    int intSum = 0;
    int i = 0;

    //처리(Process)
    i = 1;				//[1]초기식
    while (i <= 100)		//[2]조건식
    {
        if (i % 2 == 0)
        {
            intSum += i;//[!]실행문
        }
        i++;			//[3]증감식
    }

    //출력(Output)
    printf("1~100 짝수합:%d\n", intSum);

    return 0;
}
