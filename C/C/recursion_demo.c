// ��� �Լ�(Recursion)�� ����� ���丮�� ���
#include <stdio.h>

// 3�� �����ڸ� ����� ���丮�� ���ϱ�
int Fact(int n)
{
    return (n > 1) ? n * Fact(n - 1) : 1;
}

// ��� �Լ��� ����� ���丮�� �Լ� �����: ��, ����Լ��� Tree ���� Ž���� ����
int Factorial(int n)
{
    // ����
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // ��� ȣ��
    return n * Factorial(n - 1);
}

// �ܼ��� ���丮���� �� ����� ����
int FactorialFor(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i; // ((((1 * 1) * 2) * 3) * 4)
    }
    return result;
}

int main(void)
{
    // ��� ȣ���� ����Ͽ� Factorial�� ���ϱ�: 4! = 4 * 3 * 2 * 1 = 24
    printf("%d\n", 4 * 3 * 2 * 1); // 24
    printf("%d\n", FactorialFor(4));
    printf("%d\n", Factorial(4));
    printf("%d\n", Fact(4));

    return 0;
}
