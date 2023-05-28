#include <stdio.h>

union Binary
{
    int i;
    float f;
};

int main(void)
{
    union Binary b;
    b.f = 3.14159f;
    printf("%08x\n", b.i);

    return 0;
}
