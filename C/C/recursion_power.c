#include <stdio.h>

// ��� �Լ��� �ŵ����� ���
int MyPower(int num, int cnt)
{
    // �⺻ ���̽�: cnt�� 0�� �� 1 ��ȯ
    if (cnt == 0)
    {
        return 1;
    }

    // ��� ȣ��: num * MyPower(num, cnt - 1) ��ȯ
    return num * MyPower(num, cnt - 1);
}

int main(void)
{
    // MyPower �Լ��� 2�� 2���� ��� ��� ���
    printf("%d\n", MyPower(2, 2));

    return 0;
}
