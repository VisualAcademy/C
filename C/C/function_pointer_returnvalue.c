#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// 함수 프로토타입
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

// 함수 포인터 타입 정의
typedef int (*math_operation)(int, int);

// 함수 포인터를 반환하는 함수
math_operation select_operation(char op)
{
    switch (op) {
    case '+':
        return add;
    case '-':
        return subtract;
    case '*':
        return multiply;
    case '/':
        return divide;
    default:
        return NULL;
    }
}

int main(void)
{
    int a, b;
    char op;
    math_operation operation;

    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%d %d %c", &a, &b, &op);

    operation = select_operation(op);

    if (operation == NULL)
    {
        printf("Invalid operator\n");
        return 1;
    }

    int result = operation(a, b);
    printf("Result: %d\n", result);

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

int divide(int a, int b)
{
    return a / b;
}
