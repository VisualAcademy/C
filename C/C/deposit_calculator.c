#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    float principle, rate, time;

    printf("������ �Է��ϼ���: ");
    scanf("%f", &principle);
    printf("�������� �Է��ϼ���: ");
    scanf("%f", &rate);
    printf("�Ⱓ�� �Է��ϼ���: ");
    scanf("%f", &time);

    float interest = principle * (pow(1 + rate / 100, time) - 1);  // ���� ���� ���
    float amount = principle + interest;  // ���� ���ڸ� ���� �� �ݾ� ���

    printf("����: %.2f\n", interest);  // ���� ���� ���
    printf("�� �ݾ�: %.2f\n", amount);  // ���� �� �ݾ� ���

    return 0;
}
