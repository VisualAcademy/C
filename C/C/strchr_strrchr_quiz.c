#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "C Language";
    char* ptr1 = strchr(str, 'a');
    char* ptr2 = strrchr(str, 'a');
    printf("%s\n", ptr1);
    printf("%s\n", ptr2);
    return 0;
}