#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int divisor;

    scanf("%d", &divisor);

    for (int i = 1; i <= divisor; i++)
    {
        if (divisor % i == 0)
        {
            printf("%2d��(��) %2d�� ����Դϴ�.\n", i, divisor);
        }
    }

    return 0;
}
