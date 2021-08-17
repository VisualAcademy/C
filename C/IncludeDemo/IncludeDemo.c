#include <stdio.h>

int max(int first, int second);

int main()
{
    printf("MAX: %d\n", max(3, 5));

    return 0;
}

int max(int first, int second)
{
    return first > second ? first : second;
}
