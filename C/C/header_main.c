// header_main.c
#include <stdio.h>
#include "header_calc.h"

int main(void)
{
    int a = 10;
    int b = 5;

    printf("µ¡¼À: %d\n", add(a, b));
    printf("»¬¼À: %d\n", subtract(a, b));
    printf("°ö¼À: %d\n", multiply(a, b));
    printf("³ª´°¼À: %d\n", divide(a, b));

    return 0;
}