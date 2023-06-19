#include <stdio.h>

struct example
{
    char a;
    int b;
    double c;
    short d;
};

int main(void)
{
    printf("sizeof(struct example) = %lu\n", sizeof(struct example));
    return 0;
}
