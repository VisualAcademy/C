#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("sample.txt ������ �������� �ʽ��ϴ�.\n");
        exit(1);
    }
    else
    {
        printf("sample.txt ������ �����մϴ�.\n");
        fclose(fp);
    }

    return 0;
}
