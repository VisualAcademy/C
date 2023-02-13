#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "C Language";
    char* ptr = strstr(str, "lang");
    printf("%s", ptr);
    return 0;
}
