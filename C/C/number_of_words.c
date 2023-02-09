#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main(void) 
{
    char str[100];
    int i, words = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' || str[i] == '\n') 
        {
            words++;
        }
    }
    printf("Number of words in the given string: %d\n", words + 1);
    return 0;
}
