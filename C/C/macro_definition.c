#include <stdio.h>

// PI��� ��ũ�θ� �����ϰ�, �� ���� �������� ��Ÿ���� 3.14�� ����
#define PI 3.14

int main(void)
{
    // ������ ���� �����ϰ� �ʱ�ȭ
    int radius = 5;

    // ���� �ѷ� ��� (�ѷ� = 2 * PI * ������)
    double circumference = 2 * PI * radius;

    // ���� ���� �ѷ� ���
    printf("���� �ѷ�: %.2f\n", circumference);

    return 0;
}
