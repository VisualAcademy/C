#include <stdio.h>

int main(void)
{
    FILE* fp;
    char str[] = "Hello, World!\n";

    fp = fopen("output.txt", "w"); // "output.txt" ������ ���� ���� ����
    if (fp == NULL)
    {
        printf("Error: ������ �� �� �����ϴ�.\n");
        return 1;
    }

    // fwrite �Լ� ���
    fwrite(str, sizeof(char), sizeof(str), fp);

    fclose(fp);

    return 0;
}