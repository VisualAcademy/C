#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char str[100];
    int count = 0;
    bool in_word = false; // �ܾ� �ȿ� �ִ����� Ȯ���ϴ� ����

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%[^\n]s", str); // ����ڷκ��� ���ڿ��� �Է¹���. ���鵵 ���

    // ���ڿ��� ��ȸ�ϸ鼭 �ܾ� ���� ���� for loop
    for (int i = 0; str[i] != '\0'; i++)
    {
        // ���� ���ڰ� �����̶�� �ܾ ��������
        if (isspace(str[i]))
        {
            in_word = false;
        }
        // ������ �ƴϰ� �ܾ� �ȿ� ���� �ʴٸ� ���ο� �ܾ�� ����
        else if (!in_word)
        {
            in_word = true;
            count++; // �ܾ� ���� ����
        }
    }

    printf("�ܾ��� ����: %d\n", count); // �ܾ��� ���� ���

    return 0;
}
