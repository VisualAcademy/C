#include <stdio.h>

//[2] 전역(Global)변수 : static == shared : 정적(공유)
static int b;
int x = 100;

void hello(void)
{
}

void hi(void)
{
    b = 10;
    printf("[3] b = %d\n", b);
}

int main(void)
{
    //[1] 자동변수 : 기본변수 : 지역(Local) 변수
    int a; // auto int a;
    //[3] 레지스터변수 : 캐시메모리에 데이터 저장
    register int i = 0;

    a = 10;
    b = 100;
    {
        int a;
        a = 5;
        printf("[1] a = %d\n", a);
    }
    printf("[2] a = %d\n", a);
    hi();
    hello();

    return 0;
}
