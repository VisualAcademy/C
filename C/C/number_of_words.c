#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int i, words = 0;
    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            words++;
        }
    }
    // ������ �ܾ�� '\n'�� ���� �����ǹǷ� 1�� ���ش�.
    if (words > 0)
    {
        words--;
    }
    printf("�־��� ���ڿ������� �ܾ� ��: %d\n", words + 1);
    return 0;
}
