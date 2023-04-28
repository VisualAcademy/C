#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� �����ϵ��� ����
#include <stdio.h> // ǥ�� ����� ���̺귯���� ����

int main(void)
{
    FILE* file; // ���� ������ ����
    char buffer[80]; // ���Ͽ��� ���� ���ڿ��� ������ ����

    file = fopen("example.txt", "r"); // 'example.txt' ������ �б� ���� ����
    if (file == NULL) // ���� ���⿡ ������ ���
    {
        printf("example.txt ������ �����ϴ�. �����մϴ�.\n");

        // 'example.txt' ������ ���� ���� ����
        file = fopen("example.txt", "w");
        if (file == NULL) // ���� ������ ������ ���
        {
            printf("���� ������ �����߽��ϴ�.\n");
            return 1; // ���α׷� ���� (1 ��ȯ)
        }

        // ���Ͽ� ���ڿ� �ۼ�
        fprintf(file, "���� �����Դϴ�.\n");
        fclose(file); // ������ �ݴ´�

        // �ٽ� 'example.txt' ������ �б� ���� ����
        file = fopen("example.txt", "r");
        if (file == NULL) // ���� ���⿡ ������ ���
        {
            printf("������ ���� ���߽��ϴ�.\n");
            return 1; // ���α׷� ���� (1 ��ȯ)
        }
    }

    // ������ ���� ������ ������ �� �پ� �о ���ۿ� ����
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer); // ���� ���� ���
    }

    fclose(file); // ������ �ݴ´�
    return 0; // ���α׷� ���� (0 ��ȯ)
}
