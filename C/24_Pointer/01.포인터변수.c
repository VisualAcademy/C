#include <stdio.h>

int main(void)
{
    int a = 10;

    int* b;

    b = &a;//a�ּ� : ��Ī

    printf("%d %d\n", a, *b);

    return 0;
}
