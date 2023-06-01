#include <stdio.h>

int g_count = 0;

void increment()
{
    g_count++;
}

int main()
{
    increment();
    printf("g_count: %d\n", g_count);
    return 0;
}
