#include <stdio.h>

int main(void)
{
    int sum = 0; // �����
    int odd_sum = 0; // Ȧ�� ��
    int even_sum = 0; // ¦�� ��

    for (int i = 1; i <= 1000; ++i)
    {
        if (i % 2 != 0)
        {
            odd_sum += i; // Ȧ�����
        }
        else
        {
            even_sum -= i; // ¦�����
        }
    }
    sum = odd_sum + even_sum;

    printf("1 - 2 + 3 - ... + 999 - 1000 = %d\n", sum); // -500
    printf("Ȧ���� �� : %d\n", odd_sum);                // 250000
    printf("¦���� �� : %d\n", -even_sum);              // 250500

    return 0; // ���α׷� ���� ����
}
