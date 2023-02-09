#include <stdio.h>

struct padding
{
    char a;
    int b;
    char c;
};

int main(void)
{
    printf("sizeof(struct padding) = %lu\n", sizeof(struct padding));
    return 0;
}
