#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcmp �Լ��� ���Ե� ��� ����

int main()
{
    char str1[20];
    char str2[20];

    printf("�� ���ڿ��� �Է��ϼ���: ");
    scanf("%s %s", str1, str2); // ����ڷκ��� �� ���ڿ� �Է¹ޱ�

    int cmp = strcmp(str1, str2); // �Էµ� �� ���ڿ� ��
    printf("��ȯ��: %d\n", cmp);

    if (cmp == 0)
    {
        printf("�� ���ڿ��� �����մϴ�.\n"); // ��ȯ���� 0�� ���, �� ���ڿ��� ����
    }
    else if (cmp > 0)
    {
        // ��ȯ���� ����� ���, str1�� str2���� ŭ
        printf("'%s'�� '%s'���� �������� �ڿ� ��ġ�մϴ�.\n", str1, str2);   
    }
    else
    {
        // ��ȯ���� ������ ���, str2�� str1���� ŭ
        printf("'%s'�� '%s'���� �������� �ڿ� ��ġ�մϴ�.\n", str2, str1);   
    }

    return 0;
}
