#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int count = 0;

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%[^\n]", str);

    char* p = str;

    while (*p != '\0') // ���ڿ��� ���� ������ ������ �ݺ�
    {
        while (*p != '\0' && strchr(" \t\n", *p) != NULL) // ����, ��, ���� ���ڸ� �ǳʶ�
        {
            p++;
        }

        if (*p != '\0') // ����, ��, ���� ���ڰ� �ƴ� ���ڸ� �߰��ϸ�
        {
            count++; // �ܾ��� ���� ������Ŵ
            p = strpbrk(p, " \t\n"); // ���� ����, ��, ���� ���ڸ� ã��
            if (p == NULL) // �� �̻� ����, ��, ���� ���ڰ� ���ٸ� �ݺ����� ��������
            {
                break;
            }
        }
    }

    printf("�ܾ��� ����: %d\n", count); // �ܾ��� ���� ���

    return 0;
}
