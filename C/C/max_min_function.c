#include <stdio.h>

// �� ���� �߿��� ū ���� ��ȯ�ϴ� �Լ�
int get_max(int x, int y)
{
    // ���� �����ڸ� ����Ͽ� �� �� �� ū ���� ��ȯ
    return (x > y) ? x : y;
}

// �� ���� �߿��� ���� ���� ��ȯ�ϴ� �Լ�
int get_min(int x, int y)
{
    // if else ���� ����Ͽ� �� �� �� ���� ���� ��ȯ
    if (x < y)
    {
        return x; // x�� �� ���� ���
    }
    else
    {
        return y; // y�� �� �۰ų� �� ���� ���� ���
    }
}

int main(void)
{
    // get_max �Լ��� ����Ͽ� ū ���� ���
    printf("%d\n", get_max(3, 5)); // 5

    // get_min �Լ��� ����Ͽ� ���� ���� ���
    printf("%d\n", get_min(-3, -5)); // -5

    return 0;
}