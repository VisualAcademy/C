#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n)
{
    if (n <= 1)
    {
        return n; // n�� 1�����̸� �״�� ��ȯ
    }

    return n + sum(n - 1); // n�� 1�̻��̸� n�� sum(n-1)�� ���� ��ȯ
}

int main(void)
{
    int n;

    printf("1���� n������ ���� ���մϴ�. n�� ���� �Է��ϼ���: ");
    scanf("%d", &n);

    printf("1���� %d������ ��: %d\n", n, sum(n));

    return 0;
}
