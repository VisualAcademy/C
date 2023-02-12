#include <stdio.h>

// �ŵ������� ����ϴ� ��� �Լ�
int pow_recursive(int base, int exponent)
{
    if (exponent == 0)
    {
        // �ŵ������� ������ 0�̸� 1�� ��ȯ
        return 1;
    }
    else
    {
        // �׷��� ������ base * pow_recursive(base, exponent - 1)�� ���� ��ȯ
        return base * pow_recursive(base, exponent - 1);
    }
}

int main(void)
{
    int base = 3, exponent = 2, result;

    // �ŵ����� �Լ� ȣ�� �� ����� result ������ ����
    result = pow_recursive(base, exponent);

    // ��� ���
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
