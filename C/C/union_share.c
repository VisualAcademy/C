#include <stdio.h>

union Share
{
    int x;
    char ch;
};

int main(void)
{
    union Share s;
    s.x = 65;
    printf("s.x: %d, s.ch: %c\n", s.x, s.ch);

    return 0;
}
