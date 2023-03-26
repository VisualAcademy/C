#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 50 // ���ڿ� ���̸� ����� ����

// �Էµ� ���ڿ��� ���ڷθ� �����Ǿ� �ִ��� �˻��ϴ� �Լ�
bool is_valid_number(const char* str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
        {
            return false; // ���ڰ� �ƴ� ���ڰ� ���� ��� false ��ȯ
        }
        str++;
    }
    return true; // ��� ���ڰ� ������ ��� true ��ȯ
}

int main(void)
{
    int len;
    int i;

    char buffer[BUFFER_SIZE]; // ���ڿ��� ������ ����
    char* digits; // ���ڿ� ������

    printf("��ȯ��ų ���ڸ� �Է��ϼ���... => ");
    scanf("%s", buffer); // ����ڷκ��� ���ڿ� �Է� ����

    // �Էµ� ���ڿ��� ��ȿ�� �������� �˻�
    if (!is_valid_number(buffer))
    {
        printf("��ȿ�� ���ڰ� �ƴմϴ�.\n");
        return 1; // ��ȿ���� ���� ��� ���α׷� ����
    }

    len = strlen(buffer); // ���ڿ� ���� ���
    digits = buffer; // �����Ϳ� ���� �ּ� �Ҵ�

    printf("��ȯ ��� : ");

    // ���ڿ��� �������� ����ϸ� õ �������� �޸��� �߰�
    for (i = len; i > 0;)
    {
        printf("%c", *digits++);
        i--;
        if (i > 0 && (i % 3) == 0)
        {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}
