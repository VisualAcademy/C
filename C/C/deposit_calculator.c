#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    float principle, rate, time;

    printf("Enter the principle amount: "); // ������ �Է��ϼ���
    scanf("%f", &principle);
    printf("Enter the rate of interest: "); // �������� �Է��ϼ���
    scanf("%f", &rate);
    printf("Enter the time period: "); // �Ⱓ�� �Է��ϼ���
    scanf("%f", &time);

    float interest = principle * pow(1 + rate / 100, time);
    float amount = principle + interest;

    printf("Interest: %.2f\n", interest); // ����
    printf("Amount: %.2f\n", amount); // �� �ݾ�

    return 0;
}
