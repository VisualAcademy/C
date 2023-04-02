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
    printf("Example에서 'a'의 오프셋: %zu\n", offsetof(struct Example, a));
    printf("Example에서 'b'의 오프셋: %zu\n", offsetof(struct Example, b));
    printf("Example에서 'c'의 오프셋: %zu\n", offsetof(struct Example, c));
    printf("Example에서 'd'의 오프셋: %zu\n", offsetof(struct Example, d));

    return 0;
}
