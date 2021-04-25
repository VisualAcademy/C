/*
1부터 100까지 3의배수이고 그리고(&&) 4의 배수의 합
12 + 24 + 36 + ... +
*/
#include <stdio.h>

void main(void)
{
    //[1] Input
    int intSum = 0;
    int i; // 반복문
    //[2] Process
    i = 1;                              //[a] 초기식
    while (i <= 100)                    //[b] 조건식
    {
        if (i % 3 == 0 && i % 4 == 0)   //[!] 필터링
        {
            intSum += i;                //[c] 실행문
        }
        i++;                            //[d] 증감식
    }
    //[3] Output
    printf("%d\n", intSum);
}
