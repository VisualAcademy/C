#include <stdio.h>

int main(void)
{
    int a, * pa;

    a = 10;
    pa = &a;

    //[1] 값형 a변수
    printf("%d\n", a);//a의 값
    printf("%d\n", &a);//a의 메모리상의 주소 : 15727580
    //[2] 포인터형 pa변수
    printf("%d\n", pa);//pa변수의 실제값:a의주소값 : 15727580
    printf("%d\n", &pa);//pa변수의 주소:15727568
    printf("%d\n", *pa);//pa변수가참조하는곳의실제데이터

    return 0;
}
