#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100];
    int i, blank_count = 0, word_count = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == ' ')
        {
            blank_count++;
        }
        if (string[i] == ' ' || string[i] == '\n' || string[i] == '\0')
        {
            word_count++;
        }
    }

    printf("Blank spaces: %d\n", blank_count);
    printf("Words: %d\n", word_count);

    return 0;
}
