//[?] �Է� ���� ���� 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1
#include <stdio.h>

int main()
{
    int money = 66666; // �Է� ���� ȭ��
    int won = 50000;
    int cnt = 0;
    int sw = 0; // ����ġ ����: 5�� �������� 2�� �������� ����

    for (int i = 0; i < 10; i++)
    {
        cnt = money / won;
        printf("%6d�� : %8d��\n", won, cnt);
        money = money - (won * cnt); // 50001 - 50000 = 1
        printf(" ���� �� : %8d��\n", money);
        if (sw == 0)
        {
            won = won / 5; // 50000 / 5 = 10000
            sw = 1;
        }
        else
        {
            won = won / 2; // 10000 / 2 = 5000
            sw = 0;
        }
    }

    return 0;
}
