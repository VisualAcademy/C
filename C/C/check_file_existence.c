#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� �����ϵ��� ����
#include <stdio.h>

int main(void)
{
    // ������ �б� ���� ���� �õ�
    FILE* file = fopen("example.txt", "r");

    // ������ ������ ���� ���(NULL)
    if (file == NULL)
    {
        // ������ �������� ������ ����ڿ��� �˸��� ����
        printf("������ �������� �ʽ��ϴ�.\n");
        return 1;
    }
    else
    {
        // ������ �������� ����ڿ��� �˸��� ������ ���� �� ����
        printf("������ �����մϴ�.\n");
        fclose(file);
        return 0;
    }
}
