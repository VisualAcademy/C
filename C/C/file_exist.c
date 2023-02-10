#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("sample.txt 파일이 존재하지 않습니다.\n");
        exit(1);
    }
    else
    {
        printf("sample.txt 파일이 존재합니다.\n");
        fclose(fp);
    }

    return 0;
}
