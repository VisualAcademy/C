#include <stdio.h>
#include <string.h>

int main(void)
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

    return 0;
}
