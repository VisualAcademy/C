#define _CRT_SECURE_NO_WARNINGS
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
    size_t bytes_written = fwrite(str, sizeof(char), sizeof(str), fp);
    if (bytes_written == sizeof(str))
    {
        printf("���ڿ��� ���������� ����ϴ�.\n");
    }
    else
    {
        printf("���ڿ� ���⸦ �����߽��ϴ�.\n");
    }

    fclose(fp);

    return 0;
}
