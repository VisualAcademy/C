#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� �������� ���� �Լ� ��� �����ϵ��� ��
#include <stdio.h>
#include <math.h>

// �ﰢ���� ���̸� ����ϴ� �Լ�
double triangleArea(double base, double height)
{
    return 0.5 * base * height; // �ﰢ���� ���̸� ����Ͽ� ��ȯ
}

int main(void)
{
    double base, height; // �ﰢ���� �غ��� ���̸� ������ ���� ����

    printf("�ﰢ���� �غ��� ���̸� �Է��ϼ���: ");
    scanf("%lf %lf", &base, &height); // ����ڷκ��� �غ��� ���̸� �Է¹���

    // �ﰢ���� ���̸� ����ϰ� ���
    printf("�ﰢ���� ����: %.2f\n", triangleArea(base, height));

    return 0;
}
