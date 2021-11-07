// 포인터시작.c
// c-pointer-start.c 
#include <stdio.h>

int main(void)
{
    int a, b, c;//값형 변수
    int* p;//포인터(참조;주소)형 변수

    a = 100;
    b = 200;

    p = &c;

    c = a + b;

    printf("a : %d\n", a);
    printf("b : %d\n", b);
    printf("c : %d\n", c);
    printf("p : %p\n", p);//번지
    printf("*p : %d\n", *p);//참조하고 있는 공간의 값

    return 0;
}
