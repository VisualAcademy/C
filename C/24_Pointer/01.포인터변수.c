#include <stdio.h>

int main(void)
{
    int a = 10;

    int* b;

    b = &a;//aÁÖ¼Ò : º°Äª

    printf("%d %d\n", a, *b);

    return 0;
}
