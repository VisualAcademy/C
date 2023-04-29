#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� �����ϵ��� ����
#include <stdio.h>

int main(void)
{
    FILE* file; // ���� ������ ����
    char str[100]; // ���ڿ��� ������ �迭 ����

    file = fopen("example.txt", "r"); // example.txt ������ �б� ���� ����

    if (file == NULL) // ���� ���� ���� ��
    {
        printf("������ �� �� �����ϴ�.\n"); // ���� �޽��� ���
        return 1; // ������ ����
    }

    while (fgets(str, sizeof(str), file) != NULL) // ���Ͽ��� �� �پ� �о��
    {
        printf("%s", str); // �о�� ���ڿ� ���
    }

    fclose(file); // ���� �����͸� ����
    return 0; // ���� ����
}
