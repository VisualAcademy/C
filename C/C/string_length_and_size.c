#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20] = "Hello, World!";

    // ���ڿ��� ���� ���ϱ�
    int length = strlen(str);
    printf("���ڿ��� ����: %d\n", length);

    // ���ڿ��� ũ�� ���ϱ�
    int size = sizeof(str);
    printf("���ڿ��� ũ��: %d\n", size);

    return 0;
}
