#include <stdio.h>

int main(void)
{
    int i = 0;  //반복용 변수 : 1부터 100까지

    for (i = 1; i <= 5; i++)
    {
        printf("안녕\n");
    }

    //초기식부터 조건식까지 증감식만큼 실행문을 실행
    for (
        i = 1;              //초기식 : 변수 초기화
        i <= 5;             //조건식
        i++                 //증감식
        )
    {
        printf("방가\n");    //실행문
    }

    // 1부터 100까지 짝수만 출력
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)             //짝수일때만출력
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
