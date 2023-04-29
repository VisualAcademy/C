#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� �����ϵ��� ����
#include <stdio.h> // ǥ�� ����� ���̺귯�� ��� ���� ����

int main(void)
{
    FILE* file = fopen("example.txt", "r"); // example.txt ������ �б� ���� ����

    if (file == NULL) // ���� ���� ���� ��
    {
        printf("���� ���� ����\n"); // ���� �޽��� ���
        return 1; // ���� �ڵ� 1 ��ȯ
    }

    fseek(file, 0, SEEK_END); // ���� �����͸� ���� ������ �̵�
    long int size = ftell(file); // ���� �������� ���� ��ġ�� ����Ʈ ������ ���� ���� ũ�� ����

    printf("���� ũ��: %ld ����Ʈ\n", size); // ���� ũ�� ���

    fclose(file); // ���� �ݱ�
    return 0; // ���� ����
}
