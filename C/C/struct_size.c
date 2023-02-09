#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    printf("sizeof(struct point) = %lu\n", sizeof(struct point));
    return 0;
}
