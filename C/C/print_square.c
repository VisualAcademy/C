#include <stdio.h>

// 정수형 매개 변수를 받아서 제곱 값을 출력하는 함수
void print_square(int number)
{
    printf("%d의 제곱은 %d입니다.\n", number, number * number);
}

int main(void)
{
    print_square(5); // print_square 함수에 정수 5를 전달
    print_square(7); // print_square 함수에 정수 7를 전달

    return 0;
}
