#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 100

int main(void)
{
    FILE* file = fopen("test.txt", "r");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    char str[MAX];
    while (fgets(str, MAX, file) != NULL)
    {
        printf("%s", str);
    }

    fclose(file);
    return 0;
}
