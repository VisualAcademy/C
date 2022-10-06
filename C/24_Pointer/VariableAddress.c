// variable_address.c, VariableAddress.c 
#include <stdio.h>

int main(void)
{
    int age = 21;

    printf("%d -> %p\n", age, &age);

    return 0;
}
