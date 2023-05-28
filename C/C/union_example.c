#include <stdio.h>
#include <stdlib.h>

union MyUnion
{
    int x;
    float y;
    char z;
};

int main(void)
{
    union MyUnion u;
    u.x = 10;
    printf("%d\n", u.x);

    union MyUnion* uptr;
    uptr = (union MyUnion*)malloc(sizeof(union MyUnion));
    uptr->x = 20;
    printf("%d\n", uptr->x);
    free(uptr);

    return 0;
}
