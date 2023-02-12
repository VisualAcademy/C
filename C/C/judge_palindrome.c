#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int is_palindrome(char* s, int start, int end)
{
    if (start >= end)
    {
        // start �ε����� end �ε����� ���ų� ����ĥ ��� ȸ������ �Ǵ��Ͽ� 1 ��ȯ
        return 1;
    }
    if (s[start] != s[end])
    {
        // start �ε����� end �ε����� ���ڰ� �ٸ� ��� ȸ���� �ƴ� ������ �Ǵ��Ͽ� 0 ��ȯ
        return 0;
    }

    // start �ε����� end �ε����� ���ڰ� ���� ���
    // start �ε����� 1 ������Ű��, end �ε����� 1 ���ҽ�Ű��
    // is_palindrome �Լ��� �ٽ� ȣ��
    return is_palindrome(s, start + 1, end - 1);
}

int main(void)
{
    char s[21];
    int len;

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", s);

    len = strlen(s);
    if (is_palindrome(s, 0, len - 1))
    {
        printf("ȸ���Դϴ�.\n"); // is_palindrome �Լ��� ����� 1�� ���
    }
    else
    {
        printf("ȸ���� �ƴմϴ�.\n"); // is_palindrome �Լ��� ����� 0�� ���
    }

    return 0;
}
