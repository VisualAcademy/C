#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� �������� ���� �Լ� ��� �����ϵ��� ��
#include <stdio.h> // ǥ�� ����� �Լ��� ����ϱ� ���� ���̺귯�� ����

#define PI 3.14159265 // ������ ��� ����

// calculate_circle_area �Լ�: ������ ���� �μ��� �޾� ���� ���̸� ����Ͽ� ��ȯ�ϴ� �Լ�
double calculate_circle_area(double radius)
{
    return PI * radius * radius; // ���� ���� ����: PI * ������ * ������
}

int main(void)
{
    double radius; // ���� �������� ������ ���� ����

    // ����ڿ��� ���� �������� �Է� �ޱ�
    printf("���� �������� �Է��ϼ���: ");
    scanf("%lf", &radius);

    // ���� ���̸� ����� ��, �Ҽ��� ��° �ڸ����� ���
    printf("���� ����: %.2f\n", calculate_circle_area(radius));

    return 0; // ���α׷� ����
}
