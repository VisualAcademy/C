#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str1[50], str2[50];
    int i, j, len1 = 0;

    // ù ��° ���ڿ� �Է� �ޱ�
    printf("ù ��° ���ڿ��� �Է��ϼ���: ");
    scanf("%s", str1);

    // �� ��° ���ڿ� �Է� �ޱ�
    printf("�� ��° ���ڿ��� �Է��ϼ���: ");
    scanf("%s", str2);

    // ù ��° ���ڿ��� ���̸� ��� (������ ��ġ�� ã�� ����)
    for (i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }

    // �� ��° ���ڿ��� ù ��° ���ڿ��� ���� ����
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[len1 + j] = str2[j];
    }

    // ���ڿ� ���� �� NULL ���ڸ� �߰��Ͽ� ���ڿ��� ���� ǥ��
    str1[len1 + j] = '\0';

    // ��� ���
    printf("���: %s\n", str1);

    return 0;
}
