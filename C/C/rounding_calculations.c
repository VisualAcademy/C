#include <stdio.h>

// round_decimal() �Լ�
// value : ��ȯ��ų ��
// digits : �ڸ���
double round_decimal(double value, int digits)
{
    int i;
    double factor = 1.0;
    double rounding_value = 0.5;

    for (i = 0; i < digits; i++)
    {
        rounding_value /= 10.0;
        factor *= 10.0;
    }
    return ((int)((value + rounding_value) * factor) / factor);
}

int main(void)
{
    double temp;
    double num = 3.777;
    printf("3�ڸ� �ݿø�: %.3f\n", round_decimal(num, 3));
    printf("���� ����: %.6f\n", num);
    printf("���� ��ȯ: %d\n", (int)num);

    temp = (int)(num + 0.5);
    printf("1�ڸ� �ݿø�: %.3f\n", temp);

    temp = (int)((num + 0.05) * 10) / 10.0;
    printf("2�ڸ� �ݿø�: %.3f\n", temp);

    temp = (int)((num + 0.005) * 100) / 100.0;
    printf("3�ڸ� �ݿø�: %.3f\n", temp);

    temp = (int)((num + 0.09) * 10) / 10.0;
    printf("2�ڸ����� �ø�: %.3f\n", temp);

    temp = (int)(num * 10) / 10.0;
    printf("2�ڸ����� ����: %.3f\n", temp);

    return 0;
}
