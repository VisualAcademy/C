#include <stdio.h>

// 함수 프로토타입
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

// 함수 포인터 변수 선언
int (*operation)(int, int);

int main(void)
{
    int x = 5, y = 3, result;

    // 함수 포인터에 add 함수 주소 할당
    operation = &add;
    result = operation(x, y);
    printf("%d + %d = %d\n", x, y, result);

    // 함수 포인터에 subtract 함수 주소 할당
    operation = &subtract;
    result = operation(x, y);
    printf("%d - %d = %d\n", x, y, result);

    // 함수 포인터에 multiply 함수 주소 할당
    operation = &multiply;
    result = operation(x, y);
    printf("%d * %d = %d\n", x, y, result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}
