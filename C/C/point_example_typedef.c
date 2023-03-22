#include <stdio.h>

struct point
{
    int x;
    int y;
};

typedef struct point Point;

int main(void)
{
    Point p1;

    p1.x = 10;
    p1.y = 20;

    printf("(%d, %d)\n", p1.x, p1.y);
    return 0;
}
