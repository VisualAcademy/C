#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};

struct point* clone(const struct point* p)
{
    struct point* clone = (struct point*)malloc(sizeof(struct point));
    *clone = *p;
    return clone;
}

int main(void)
{
    struct point original = { 1, 2 };
    struct point* copy = clone(&original);
    printf("original: (%d, %d)\n", original.x, original.y);
    printf("copy: (%d, %d)\n", copy->x, copy->y);
    free(copy);
    return 0;
}
