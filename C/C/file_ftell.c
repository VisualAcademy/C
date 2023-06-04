#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* fp;
    char file_name[] = "words.txt";
    int size;

    // ���� ���� ���("w")�� ���� ���� �����͸� ����
    fp = fopen(file_name, "w");
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    // ���� �����͸� ���Ͽ� ���ϴ�.
    fprintf(fp, "C Language");

    // ���� �����͸� ���� ������ �̵�
    fseek(fp, 0, SEEK_END);

    // ftell �Լ��� ����Ͽ� ������ ũ�� ����
    size = ftell(fp);
    printf("���� %s�� ũ��� %d����Ʈ�Դϴ�.\n", file_name, size);

    // rewind �Լ��� ����Ͽ� ���� �����͸� ó������ ����
    rewind(fp);

    // ���� �ݱ�
    fclose(fp);

    return 0;
}
