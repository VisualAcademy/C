#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char text[31];  // �Է¹��� ���ڿ�

    scanf("%[^\n]s", text);  // ������ �����Ͽ� ���ڿ� �Է¹ޱ�

    int length;
    bool isPalindrome = true;  // ȸ�� ����, �ʱⰪ�� ������ ����

    length = strlen(text);  // �Է¹��� ���ڿ��� ���� ���

    int begin = 0;
    int end = length - 1;

    // ���ڿ��� �� ���������� �߾ӱ��� ��
    while (begin < end)
    {
        // ���� ���� ���� ����
        while (text[begin] == ' ')
        {
            begin++;
        }

        // ������ ���� ���� ����
        while (text[end] == ' ')
        {
            end--;
        }

        // ���Ϸ��� �� ���ڰ� �ٸ��ٸ�, ȸ���� �ƴ�
        if (text[begin] != text[end])
        {
            isPalindrome = false;
            break;
        }

        begin++;
        end--;
    }

    // ��� ���, ȸ���̸� 1, �ƴϸ� 0
    printf("%d\n", isPalindrome);

    return 0;
}
