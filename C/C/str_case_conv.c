#define _CRT_SECURE_NO_WARNINGS // scanf �Լ����� ���� ��� �����ϱ� ���� ��ó���� ���ù�

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100]; // �Է¹��� ���ڿ��� ������ �迭 ����
    int i;

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%99[^\n]", str); // ���� ����('\n') �������� �ִ� 99���� ���ڸ� �Է� ����

    for (i = 0; str[i]; i++)
    {
        if (isupper(str[i])) // �빮���� ���
        {
            str[i] = str[i] + 32; // �빮�ڸ� �ҹ��ڷ� ����
        }
        else if (islower(str[i])) // �ҹ����� ���
        {
            str[i] = str[i] - 32; // �ҹ��ڸ� �빮�ڷ� ����
        }
    }

    printf("��ҹ��� ��ȯ�� ���ڿ�: %s\n", str); // ��ȯ�� ���ڿ� ���

    return 0;
}
