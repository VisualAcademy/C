// �Լ��� ����Ͽ� ū ���� ���� �� ���ϱ� 
#include <stdio.h>

// Max �Լ�: �� �� �߿��� ū ���� ��ȯ�����ִ� �Լ�
int Max(int x, int y)
{
    return (x > y) ? x : y; // 3�� �����ڷ� ū �� ���ϱ� 
}

// Min �Լ�: �� �� �߿��� ���� ���� ��ȯ�����ִ� �Լ�
int Min(int x, int y)
{
    // if else ������ ���� �� ���ϱ� 
    if (x < y)
    {
        return x; // ���� ��
    }
    else
    {
        return y;
    }
}

int main()
{
    printf("%d\n", Max(3, 5)); // 5
    printf("%d\n", Min(-3, -5)); // -5

    return 0;
}
