#include <stdio.h>

main()
{
    char see[] = "C language\n";

    int index = 0;
    while (see[index] != '\0')
    {
        putchar(see[index]);
        index++;
    }
}
