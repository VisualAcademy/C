// ���(Recursion)�� ����� 2 ^ n �� ���� ���ϱ�
#include <stdio.h>

int MyPower(int num, int cnt)
{
    if (cnt == 0)
    {
        return 1;
    }
    return num * MyPower(num, --cnt); // 2 * (2 * (1))
}

int main()
{
    printf("%d\n", MyPower(2, 2)); // 2 * 2 * 1 = 4

    return 0;
}
