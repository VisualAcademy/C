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

void perform_operation(int (*operation)(int, int), int a, int b)
{
    int result = (*operation)(a, b);
    printf("Result: %d\n", result);
}

int main(void)
{
    int x = 10, y = 5;

    perform_operation(add, x, y);
    perform_operation(subtract, x, y);
    perform_operation(multiply, x, y);

    return 0;
}
