#include <stdio.h>

// �� ���� �Ǽ��� ���ڸ� �޾� ���� ����Ͽ� ��ȯ�ϴ� �Լ�
double get_sum(double x, double y)
{
    return x + y;
}

int main(void)
{
    double sum = get_sum(3.0, 0.14);
    printf("3.0�� 0.14�� ���� %.2lf�Դϴ�.\n", sum);

    return 0;
}
