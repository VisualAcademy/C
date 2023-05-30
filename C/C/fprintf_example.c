#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file = fopen("test.txt", "w");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    char str[] = "Hello, World!";
    int count = 12;
    fprintf(file, "%s has %d characters.\n", str, count);

    fclose(file);
    return 0;
}
