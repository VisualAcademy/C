#include <stdio.h>

int main(void)
{
    char src[50] = "Hello, World!";
    char dest[50];
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // ���ڿ��� ���� ��Ÿ���� NULL ���ڸ� ����

    printf("����� ���ڿ�: %s\n", dest);

    return 0;
}
