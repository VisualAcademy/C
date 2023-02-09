#include <stdio.h>

struct bit_fields 
{
    unsigned int a : 4;
    unsigned int b : 8;
    unsigned int c : 20;
};

int main(void) 
{
    struct bit_fields bf;

    bf.a = 10;
    bf.b = 255;
    bf.c = 100000;

    printf("bf.a = %d\n", bf.a);
    printf("bf.b = %d\n", bf.b);
    printf("bf.c = %d\n", bf.c);

    return 0;
}
