#include <stdio.h>

// ���� �����ڷ� ���丮�� ���
int Fact(int n)
{
    // n�� 1���� ũ�� n * Fact(n-1), �ƴϸ� 1 ��ȯ
    return (n > 1) ? n * Fact(n - 1) : 1;
}

// ��� �Լ��� ���丮�� ���
int Factorial(int n)
{
    // �⺻ ���̽�: n�� 0 �Ǵ� 1�� �� 1 ��ȯ
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // ��� ȣ��: n * Factorial(n-1) ��ȯ
    return n * Factorial(n - 1);
}

// �ݺ������� ���丮�� ���
int FactorialFor(int n)
{
    int result = 1;

    // 1���� n���� ������ ���Ͽ� ����� ����
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    // ��� ��ȯ
    return result;
}

int main(void)
{
    // ���� ����� ���丮�� ��� ���
    printf("%d\n", 4 * 3 * 2 * 1);

    // �ݺ��� ����Ͽ� ���丮�� ��� ��� ���
    printf("%d\n", FactorialFor(4));

    // ��� �Լ� ����Ͽ� ���丮�� ��� ��� ���
    printf("%d\n", Factorial(4));

    // ���� ������ ����Ͽ� ���丮�� ��� ��� ���
    printf("%d\n", Fact(4));

    return 0;
}
