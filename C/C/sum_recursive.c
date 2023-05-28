#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��͸� ����Ͽ� 1���� n������ ���� ����ϴ� �Լ�
int sum_of_numbers(int n)
{
    if (n <= 1)
    {
        // n�� 1������ ��� �״�� n�� ��ȯ�մϴ�. 
        // (n�� 1�� ��� ���� 1�̸�, n�� 0�� ��� ���� 0�Դϴ�.)
        return n;
    }
    else
    {
        // n�� 1���� Ŭ ���, n�� 1���� (n-1)������ ���� ��ȯ�մϴ�.
        // sum_of_numbers(n - 1) ȣ��� ����, ��������� ���� ���˴ϴ�.
        return n + sum_of_numbers(n - 1);
    }
}

int main(void)
{
    int n;

    // ����ڷκ��� �հ踦 ����� n�� ���� �Է¹޽��ϴ�.
    printf("1���� n������ ���� ���մϴ�. n�� ���� �Է��ϼ���: ");
    scanf("%d", &n);

    // ���� �հ踦 ����մϴ�.
    printf("1���� %d������ ��: %d\n", n, sum_of_numbers(n));

    return 0;
}
