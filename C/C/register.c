#include <stdio.h>

int main(void)
{
    register int x, s = 0;  // �������� ������ ����

    for (x = 1; x <= 10; x++)
    {
        s += x;  // �������� ������ �̿��� ���� ���
    }

    printf("1~10���� �� : %d\n", s);  // ���� ���� ���

    return 0;
}
