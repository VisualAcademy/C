#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

typedef int (*math_operation)(int, int);

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

    printf("두 수와 연산자 (+, -, *, /)를 입력하세요: ");
    scanf("%d %d %c", &a, &b, &op);

    operation = select_operation(op);

    if (operation == NULL)
    {
        printf("잘못된 연산자입니다.\n");
        return 1;
    }

    int result = operation(a, b);
    printf("결과: %d\n", result);

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
