#include <stdio.h>
#include <string.h>

void reverse_string(char* str, int start, int end)
{
    // ���ڿ��� ù ��°�� ������ ��ġ�� ��ȯ
    if (start >= end)
    {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // ��� ȣ���� ���� ���ڿ��� ������
    reverse_string(str, start + 1, end - 1);
}

int main(void)
{
    char str[] = "Hello, world!";
    int len = strlen(str);

    printf("���� ���ڿ�: %s\n", str);
    reverse_string(str, 0, len - 1);
    printf("������ ���ڿ�: %s\n", str);

    return 0;
}
