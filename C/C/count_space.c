#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h> 

int main(void)
{
    int count = 0;
    int i = 0;
    char str[1001];
    char ch;

    printf("���ڿ��� �Է��ϼ���: ");

    // scanf�� ���ڿ��� �޵�, ���� ������ ���� %[^\n]�� ���
    scanf("%[^\n]", str);

    while (1)
    {
        ch = str[i]; // ���� ��ġ�� ���ڸ� �޾ƿ�

        // ���� ���� ���ڰ� ���ڿ��� ���̶�� �ݺ��� ����
        if (ch == '\0')
        {
            break;
        }
        // ���� ���� ���ڰ� ������ �ƴϰ�, ���� ���ڰ� �����̰ų� ���ڿ��� ���̶�� �ܾ�� ����
        else if ((ch != ' ') && ((str[i + 1] == ' ') || (str[i + 1] == '\0')))
        {
            count++; // �ܾ� ���� ����
        }
        i++;
    }
    printf("�ܾ��� ����: %d\n", count); // �ܾ��� �� ���

    return 0;
}
