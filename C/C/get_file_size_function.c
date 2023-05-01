#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� �����ϵ��� ����
#include <stdio.h>

// ������ ũ�⸦ ���ϴ� �Լ�
long getFileSize(FILE* file)
{
    // ���� ���� ������ ��ġ�� ����
    long currentPosition = ftell(file);
    // ���� �����͸� ������ ������ �̵�
    fseek(file, 0, SEEK_END);
    // ������ ũ�⸦ ���ϱ� ���� ���� ������ ��ġ�� ����
    long fileSize = ftell(file);
    // ���� �����͸� ���� ��ġ�� ����
    fseek(file, currentPosition, SEEK_SET);
    // ���� ũ�� ��ȯ
    return fileSize;
}

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

    // ���� ũ�⸦ ���ϴ� �Լ� ȣ��
    long fileSize = getFileSize(file);
    // ���� ũ�⸦ ����Ʈ ������ ���
    printf("���� ũ��: %ld ����Ʈ\n", fileSize);

    // ���� �ݱ�
    fclose(file);

    // ���α׷� ���� ����
    return 0;
}
