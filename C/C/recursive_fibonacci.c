#include <stdio.h>

// �Ǻ���ġ ������ n��° ���� ����ϴ� ��� �Լ�
int fibonacci_recursive(int n)
{
    if (n == 0 || n == 1)
    {
        // n�� 0 �Ǵ� 1�� ��� �״�� ��ȯ
        return n;
    }
    else
    {
        // �׷��� ������ fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2)�� ���� ��ȯ
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main(void)
{
    int n = 10, result;

    // �Ǻ���ġ ������ n��° ���� result ������ ����
    result = fibonacci_recursive(n);

    // ��� ���
    printf("fibonacci(%d) = %d\n", n, result);

    return 0;
}
