#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char* a[3]; // ���ڿ� ������ ���� 3��

    scanf("%s %s %s", a, a + 1, a + 2); // �迭 a�� �� ��ҿ� ���ڿ� �Է�

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", a + i); // �迭 a�� �� ��� ���
    }

    return 0;
}
