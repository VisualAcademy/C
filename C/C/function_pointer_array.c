#include <stdio.h>

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

int main(void)
{
    int a = 20, b = 10;

    int (*operations[4])(int, int) = { add, subtract, multiply, divide };
    char* op_names[4] = { "add", "subtract", "multiply", "divide" };

    for (int i = 0; i < 4; i++)
    {
        int result = operations[i](a, b);
        printf("%s(%d, %d) = %d\n", op_names[i], a, b, result);
    }

    return 0;
}
