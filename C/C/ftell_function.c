#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // "example.txt" ������ �б�-���� ���� ����
    FILE* file = fopen("example.txt", "w+");

    // ���� ���Ⱑ ������ ��� Ȯ��
    if (file == NULL)
    {
        printf("������ ���� ���߽��ϴ�.\n");
        return 1;
    }

    // ���Ͽ� "Hello, World!" ����
    fprintf(file, "Hello, World!");

    // ���� �������� ���� ��ġ ���
    long position = ftell(file);

    // ��ġ�� ���������� �����Դ��� Ȯ���ϰ� ��ġ ���
    if (position != -1L)
    {
        printf("���� �������� ���� ��ġ: %ld\n", position);
    }
    else
    {
        printf("��ġ�� �������µ� �����߽��ϴ�.\n");
    }

    // ���� �ݱ�
    fclose(file);
    return 0;
}
