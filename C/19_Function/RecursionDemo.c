// ��� �Լ�(Recursion)
#include <stdio.h>

// 3�� �����ڸ� ����� Factorial ���ϱ�
int Fact(int n)
{
    return (n > 1) ? n * Fact(n - 1) : 1;
}

// ��� �Լ��� ����� Factorial �Լ� �����: ��, ����Լ��� Tree ���� Ž���� ����
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

// �ܼ��� Factorial�� �� ����� ����
int FactorialFor(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i; // ((((1 * 1) * 2) * 3) * 4)
    }
    return result;
}

int main()
{
    // ��� ȣ���� ����Ͽ� Factorial�� ���ϱ�: 4! = 4 * 3 * 2 * 1 = 24
    printf("%d\n", 4 * 3 * 2 * 1); // 24
    printf("%d\n", FactorialFor(4)); // 24
    printf("%d\n", Factorial(4)); // 24
    printf("%d\n", Fact(4)); // 24

    return 0;
}
