// extern_main.c
#include <stdio.h>

extern int global_variable;
extern void print_global(void);

int main(void)
{
    printf("global_variable: %d\n", global_variable);
    print_global();
    return 0;
}
