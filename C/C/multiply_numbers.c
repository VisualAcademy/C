#include <stdio.h>

// 두 정수형 매개 변수를 받아서 두 수의 곱을 반환하는 함수
int multiply_numbers(int a, int b)
{
    return a * b; // 두 매개 변수의 곱을 반환
}

int main(void)
{
    int result = multiply_numbers(6, 7); // multiply_numbers 함수를 호출하고 반환값을 변수에 저장
    printf("6과 7의 곱은 %d입니다.\n", result);

    return 0;
}
