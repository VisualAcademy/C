#include <stdio.h>
#include <string.h>

void main()
{
    char* a = "�ȳ�";
    char* b = "�ȳ�";

    // ���ڿ� �� ��
    if (a == b)
    {
        printf("�����ϴ�.\n");
    }

    // ���� C��� �������� ���ڿ� ��
    if (strcmp(a, b) == 0)
    {
        printf("�����ϴ�.\n");
    }
}
