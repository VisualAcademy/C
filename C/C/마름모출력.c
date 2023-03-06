#include <stdio.h>

int main(void)
{
    int i, j, k, m = 1;
    for (i = 5; i >= 0; i--, m += 2)
    {
        for (j = 0; j < i; j++)
        {
            putchar(' ');
        }

        for (k = 0; k < m; k++)
        {
            putchar('*');
        }

        putchar('\n');
    }

    m -= 4;

    for (i = 1; i <= 5; i++, m -= 2)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", ' ');
        }
        for (k = 0; k < m; k++)
        {
            printf("%c", '*');
        }
        putchar('\n');
    }

    return 0;
}
