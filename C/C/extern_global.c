// extern_global.c
#include <stdio.h>

int global_variable = 10;

void print_global(void)
{
    printf("global_variable: %d\n", global_variable);
}
