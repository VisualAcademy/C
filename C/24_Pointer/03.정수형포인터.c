// 03.정수형포인터.c
#include <stdio.h>

int main(void)
{
    // 값형 변수
    int a = 365;
    // 참조형 변수
    int* pa = &a;

    printf("a : %d\n", a);//365
    printf("&a : %p\n", &a);//1244992
    //printf("*a : %d\n", *a);

    // pa에 들어있는 다른 변수(공간)의 번지 수
    printf("pa : %p\n", pa);//1244992번지
    // pa가 참조하고 있는 변수에 들어있는 값
    printf("*pa : %d\n", *pa);//365
    // pa 변수 자체의 고유 어드레스(주소)
    printf("&pa : %p\n", &pa);//1244980

    return 0;
}
