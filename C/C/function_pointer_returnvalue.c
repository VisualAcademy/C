#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// �Լ� ������Ÿ��
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

// �Լ� ������ Ÿ�� ����
typedef int (*math_operation)(int, int);

// �Լ� �����͸� ��ȯ�ϴ� �Լ�
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
