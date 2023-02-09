#include <stdio.h>

struct point
{
    int x;
    int y;
};

void printPoint(struct point p)
{
    printf("(%d, %d)\n", p.x, p.y);
}

int main(void)
{
    struct point p = { 1, 2 };
    printPoint(p);
    return 0;
}
