#include <stdio.h>

void main(void)
{
    // Input
    int intSum = 0; // �����
    int a = 0; // Ȧ����° ��
    int b = 0; // ¦����° ��
    int i = 0; // �ݺ���
    // Process
    for (i = 1; i <= 1000; i++)
    {
        if (i % 2 != 0) // Ȧ�����
        {
            a += i;
        }
        if (i % 2 == 0) // ¦�����
        {
            b += -i;
        }
    }
    intSum = a + b;
    // Output
    printf(
        "1 - 2 + 3 - ... + 999 - 1000 = %d\n"
        , intSum); // -500
    printf("Ȧ���� �� : %d\n", a);//250000
    printf("¦���� �� : %d\n", -b);//250500
}
