#include <stdio.h>
#include <stddef.h>

struct Example {
    int a;
    double b;
    char c;
    short d;
};

int main(void)
{
    printf("Example���� 'a'�� ������: %zu\n", offsetof(struct Example, a));
    printf("Example���� 'b'�� ������: %zu\n", offsetof(struct Example, b));
    printf("Example���� 'c'�� ������: %zu\n", offsetof(struct Example, c));
    printf("Example���� 'd'�� ������: %zu\n", offsetof(struct Example, d));

    return 0;
}
