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
    if (fputs(str, file) != EOF)
    {
        printf("���� ���⿡ �����߽��ϴ�.\n");
    }
    else
    {
        printf("���� ���⿡ �����߽��ϴ�.\n");
        return 1;
    }

    fclose(file);
    return 0;
}
