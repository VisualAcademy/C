#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp;
    char file_name[] = "words.txt";
    int size;

    // ���� ����
    fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        printf("Error opening file %s\n", file_name);
        exit(1);
    }

    // ���� �����͸� ���� ������ �ű�
    fseek(fp, 0, SEEK_END);

    // ftell �Լ��� ����Ͽ� ������ ũ�� ����
    size = ftell(fp);
    printf("Size of %s is %d bytes\n", file_name, size);

    // rewind �Լ��� ����Ͽ� ���� �����͸� ó������ ����
    rewind(fp);

    // ���� �ݱ�
    fclose(fp);

    return 0;
}
