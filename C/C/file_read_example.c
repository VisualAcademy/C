#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file = fopen("test.txt", "r");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
