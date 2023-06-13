#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello world";  // �м� ��� ���ڿ�
    int len = strlen(str);  // ���ڿ��� ����
    int n = 3; // n-gram�� n ��. ���⼭�� 3-gram�� �����ϹǷ� n�� 3���� ����
    int i, j;

    printf("���ڿ� '%s'�� %d-gram:\n", str, n);  // n-gram ��� �˸� �޽���

    // i�� 0���� (���ڿ� ���� - n)���� ��ȸ�ϸ� n-gram�� �������� ����
    for (i = 0; i <= len - n; i++)
    {
        // j�� 0���� n-1���� ��ȸ�ϸ� n-gram�� �� ���ڸ� ���
        for (j = 0; j < n; j++)
        {
            printf("%c", str[i + j]);
        }
        printf("\n");  // n-gram �ϳ��� ��� ����� �� �ٹٲ�
    }

    return 0;
}
