#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // "test.txt" ���� ���� (�б�-���� ���)
    FILE* file = fopen("test.txt", "w+");

    // ���� ���� ���� ��, ���� �޽��� ���
    if (file == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    // "Hello, World!" ���ڿ� ���Ͽ� ����
    fprintf(file, "Hello, World!");

    // ���� ������ ��ġ �̵� (���� �������κ��� 7����Ʈ �ڷ�)
    if (fseek(file, 7, SEEK_SET) == 0)
    {
        printf("���� �������� ��ġ�� ���������� ����Ǿ����ϴ�.\n");
    }
    else
    {
        printf("��ġ�� �����ϴµ� �����߽��ϴ�.\n");
        fclose(file);
        return 1;
    }

    // ���Ϸκ��� ���ڿ� �б� �� ���
    char buffer[20];
    if (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("���Ϸκ��� ���� ���ڿ�: %s\n", buffer);
    }
    else
    {
        printf("���Ϸκ��� �б⸦ �����߽��ϴ�.\n");
    }

    // ���� �ݱ�
    fclose(file);
    return 0;
}
