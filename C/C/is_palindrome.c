#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int is_palindrome(char* str)
{
    int len = strlen(str);
    int i;

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    char str[80];

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", str);

    if (is_palindrome(str))
    {
        printf("���ڿ� '%s'�� ȸ���Դϴ�.\n", str);
    }
    else
    {
        printf("���ڿ� '%s'�� ȸ���� �ƴմϴ�.\n", str);
    }

    return 0;
}
