#include <stdio.h>

int main(void)
{
    float i;
    float* p; // 특정 주소(번지;Address)값을 담을 수 있는 그릇

    i = 100.0;
    p = &i;

    printf("p가 참조하고 있는 곳의 값: %.2f\n", *p);
    printf("p의 주소 값: %#x\n", &p); // 0xFFFFFF
    printf("p의 자체 값: %#x\n", p); // 변수 i의 주소값
    printf("i의 주소 값: %#x\n", &i); // 변수 i의 주소값

    return 0;
}
