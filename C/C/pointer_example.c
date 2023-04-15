#include <stdio.h>

int main(void)
{
    int value = 10;
    int* ptr = &value; //포인터 변수 ptr이 value의 주소를 참조

    //value의 10진수 값과 주소 출력
    printf("10진수 값: %d, 주소: %p\n", value, &value);

    //포인터 변수 ptr의 값(즉, value의 주소)과 value의 값(즉, *ptr) 출력, ptr의 주소 출력
    printf("포인터 값: %p, 포인터가 가리키는 값: %d, 포인터의 주소: %p\n", ptr, *ptr, &ptr);

    return 0;
}

//10진수 값 : 10, 주소 : 0072FD68
//포인터 값 : 0072FD68, 포인터가 가리키는 값 : 10, 포인터의 주소 : 0072FD5C
//
//* 실행할 때마다 포인터 값과 포인터의 주소는 달라질 수 있습니다.
