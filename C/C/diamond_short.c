#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int height;

    printf("���̾Ƹ�� �ﰢ�� ���� �Է�: ");
    scanf("%d", &height);

    // �ﰢ�� ��� �׷�
    for (int i = 1; i <= height; i++)
    {
        for (int j = i; j <= height; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // ���ﰢ�� ��� �׷� 
    for (int i = height - 1; i >= 1; i--)
    {
        for (int j = height; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
