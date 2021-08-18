#include <stdio.h>

int main()
{
    int age = 21;
    const float PI = 3.14F;

    int* p1 = &age;
    float* p2 = &PI;

    printf("변수 age 값: %d\n", age);
    printf("변수 age 주소: %p\n", &age);

    printf("포인터 변수 p1의 값: %p\n", p1);
    printf("포인터 변수 p1의 참조 값(역참조): %d\n", *p1);
    printf("포인터 변수 p1의 주소: %p\n", &p1);

    printf("\n");

    printf("상수 PI 값: %.2f\n", PI);
    printf("상수 PI 주소: %p\n", &PI);

    printf("포인터 변수 p2의 값: %p\n", p2);
    printf("포인터 변수 p2의 참조 값(역참조): %.2f\n", *p2);
    printf("포인터 변수 p2의 주소: %p\n", &p2);

    return 0;
}
