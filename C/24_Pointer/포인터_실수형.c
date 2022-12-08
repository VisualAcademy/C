/*
    7.4. 예제. 실수형 포인터 변수 선언 : 포인터_실수형.c
*/
#include <stdio.h>

int main(void)
{
    float a, b, c;
    float* p;

    a = 100.0, b = 200.0;
    p = &c;	// c의 주소를 p에 기억

    *p = a + b; // c = a + b
    printf("%.1f + %.1f = %.1f\n", a, b, *p);
    printf("%x %x %x %x %x\n", &a, &b, &c, p, &p);
}

//100.0 + 200.0 = 300.0
//12ff7c 12ff78 12ff74 12ff74 12ff70
