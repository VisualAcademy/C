// header_main.c
#include <stdio.h>
#include "header_calc.h"

int main(void)
{
    int a = 10;
    int b = 5;

    printf("����: %d\n", add(a, b));
    printf("����: %d\n", subtract(a, b));
    printf("����: %d\n", multiply(a, b));
    printf("������: %d\n", divide(a, b));

    return 0;
}