// pointer_function_multi_return.c
#include <stdio.h>

// calculate 함수 정의
// result: 결과 값을 저장할 배열
// f: 덧셈, 뺄셈, 곱셈, 나눗셈을 할 첫 번째 정수
// s: 덧셈, 뺄셈, 곱셈, 나눗셈을 할 두 번째 정수
void calculate(int* result, int f, int s)
{
    result[0] = f + s; // 덧셈 결과 저장
    result[1] = f - s; // 뺄셈 결과 저장
    result[2] = f * s; // 곱셈 결과 저장
    result[3] = f / s; // 나눗셈 결과 저장
}

// main 함수 정의
int main(void)
{
    int result[4]; // 결과 값을 저장할 배열
    int first_number = 10; // 첫 번째 정수
    int second_number = 20; // 두 번째 정수
    calculate(result, first_number, second_number); // calculate 함수 호출

    // 각 연산 결과 출력
    printf("first_number + second_number = %d\n", result[0]);
    printf("first_number - second_number = %d\n", result[1]);
    printf("first_number * second_number = %d\n", result[2]);
    printf("first_number / second_number = %d\n", result[3]);

    return 0;
}
