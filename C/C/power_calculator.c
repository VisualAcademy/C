#include <stdio.h>

// calculate_power �Լ��� �Է¹��� base�� exponent ������ ����Ͽ� ��ȯ�մϴ�.
int calculate_power(int base, int exponent)
{
    int result = 1;

    // exponent ��ŭ �ݺ��ϸ� base�� ���Ͽ� �ŵ����� ���� ����մϴ�.
    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main(void)
{
    int base = 2;
    int exponent = 10;

    // calculate_power �Լ��� ����Ͽ� base�� exponent ���� ���� ����մϴ�.
    int calculated_result = calculate_power(base, exponent);

    // ���� �ŵ����� ���� ����մϴ�. (��: 1024 = 2 ^ 10)
    printf("%d�� %d����: %d\n", base, exponent, calculated_result);

    return 0;
}
