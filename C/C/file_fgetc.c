#include <stdio.h>

int main(void)
{
    FILE* fp;
    int c;

    fp = fopen("sample.txt", "r"); // "sample.txt" ������ �б� ���� ����
    if (fp == NULL)
    {
        printf("Error: ������ �� �� �����ϴ�.\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", (char)c);
    }

    fclose(fp);

    return 0;
}
