#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int (*p_func)(int, int);  // 함수 포인터 타입 선언
    p_func = &add;  // add 함수의 주소 할당
    int result = (*p_func)(3, 4);  // 함수 포인터를 이용한 호출
    printf("Result: %d\n", result);  // Result: 7

    return 0;
}
