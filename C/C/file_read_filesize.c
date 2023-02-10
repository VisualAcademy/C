#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // ���� ������ ����
    FILE* fp;

    // ���� �б� ���� ����
    fp = fopen("data.bin", "rb");

    // ������ �������� ���� ���
    if (fp == NULL) 
    {
        printf("File not found\n");
        exit(1);
    }

    // ���� ũ�� ���ϱ�
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);

    // ���� �����͸� ó������ ������
    rewind(fp);

    // ���� ����
    char buffer[size];

    // ���� ũ�⸸ŭ �б�
    fread(buffer, 1, size, fp);

    // ���� �ݱ�
    fclose(fp);

    // ���� ������ ���
    printf("Read data: %s\n", buffer);

    return 0;
}
