#include <stdio.h>

union Same
{
    int x;
    int y;
};

int main(void)
{
    union Same s;
    s.x = 10;
    s.y = 20;
    printf("s¿« ≈©±‚: %ld\n", sizeof(s));
    printf("s.x: %d, s.y: %d\n", s.x, s.y);

    return 0;
}
