#include <stdio.h>

// �� ���� �Ǽ��� ���ڸ� �޾� ���� ����Ͽ� ��ȯ�ϴ� �Լ�
double get_sum(double x, double y)
{
    double sum = x + y;
    return sum;
}

int main(void)
{
    double result = get_sum(3.0, 0.14);
    printf("%.2lf\n", result); // ��� ���: 3.14

    return 0;
}
