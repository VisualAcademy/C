#include <stdio.h>

int main(void) 
{
    int a = 10;
    int* b = &a;
    int** p = &b;

    printf("\na = %d, *b = %d, **p = %d", a, *b, **p);
    printf("\n&a = %p, b = %p, *p = %p", &a, b, *p);
    printf("\n&b = %p, p = %p", &b, p);
    printf("\n&p = %p\n", &p);

    return 0;
}
