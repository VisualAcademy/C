#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� �����ϵ��� ����
#include <stdio.h>

int main(void)
{
    FILE* file; // ���� �����͸� ����

    file = fopen("example.txt", "w"); // 'example.txt' ������ ���� ���� ����
    if (file == NULL) // ���� ���⿡ ������ ���
    {
        printf("������ ���� ���߽��ϴ�.\n");
        return 1; // ���α׷� ���� (1 ��ȯ)
    }

    fputs("�ȳ��ϼ���.", file); // ���Ͽ� ���ڿ��� ����
    fclose(file); // ������ �ݴ´�

    printf("���� �ۼ��� �����߽��ϴ�.\n"); // �ۼ� ���� �޽����� ����Ѵ�
    return 0; // ���α׷� ���� (0 ��ȯ)
}
