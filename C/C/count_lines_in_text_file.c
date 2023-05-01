#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� �����ϵ��� ����
#include <stdio.h>

int main(void)
{
    // ������ �б� ���� ����
    FILE* file = fopen("example.txt", "r");
    // ���� ���� ���� �� ���� �޽��� ��� �� ����
    if (file == NULL)
    {
        printf("���� ���� ����\n");
        return 1;
    }

    int n_lines = 0; // �� ���� ������ ����
    char c; // ���Ͽ��� ���� ���ڸ� ������ ����
    // ���� ��(EOF)�� ������ ������ ���ڸ� �ϳ��� �б�
    while ((c = fgetc(file)) != EOF)
    {
        // �ٹٲ� ����(\n)�� �߰��ϸ� �� �� ����
        if (c == '\n')
        {
            n_lines++;
        }
    }

    // ���Ͽ� �ִ� �� ���� ���
    printf("���Ͽ� �ִ� �� ��: %d\n", n_lines);

    // ���� �ݱ�
    fclose(file);

    // ���α׷� ���� ����
    return 0;
}
