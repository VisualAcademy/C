#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int word_count = 0; // �ܾ��� ���� ������ ����

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%[^\n]", str); // ���ڿ��� �Է¹���. ���鵵 �����Ͽ� �Է¹��� �� ����

    char* token = strtok(str, " \t\n"); // ù ��° ��ū�� ������
    while (token != NULL)
    {
        word_count++; // ��ū�� �ϳ��� �ܾ��̹Ƿ� �ܾ� ���� ����
        token = strtok(NULL, " \t\n"); // ���� ��ū�� ������
    }

    printf("���ڿ� ���� �ܾ� ����: %d\n", word_count); // �ܾ� �� ���

    return 0;
}
