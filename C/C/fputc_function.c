#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file = fopen("test.txt", "w");
    if (file == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    char str[] = "Hello, World!";
    int i = 0;
    while (str[i] != '\0')
    {
        fputc(str[i], file);
        i++;
    }

    fclose(file);
    return 0;
}
