#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello world";  // ���ڿ� ����
    int len = strlen(str);  // ���ڿ��� ���� ���
    int i;

    printf("���ڿ� '%s'�� 2-gram:\n", str);  // 2-gram ��� �˸� �޽���
    for (i = 0; i < len - 1; i++)
    {
        // 2-gram ���. ���� ���ڿ� ���� ���ڸ� �Բ� ���
        printf("%c%c\n", str[i], str[i + 1]);
    }

    return 0;
}
