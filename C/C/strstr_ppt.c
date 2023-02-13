#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "C Programming";
    char str2[] = "Program";

    char* ptr = strstr(str1, str2);

    if (ptr != NULL)
    {
        printf("%s\n", ptr); // Program
    }
    else
    {
        printf("Not found.\n");
    }

    return 0;
}
