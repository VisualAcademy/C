#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    float principle, rate, time;

    printf("������ �Է��ϼ���: "); // ����ڿ��� ������ �Է� �޽��ϴ�.
    scanf("%f", &principle);
    printf("�������� �Է��ϼ���: "); // ����ڿ��� �������� �Է� �޽��ϴ�.
    scanf("%f", &rate);
    printf("�Ⱓ�� �Է��ϼ���: "); // ����ڿ��� �Ⱓ�� �Է� �޽��ϴ�.
    scanf("%f", &time);

    // �� ���� ���� ���: ���� x (1 + ������/100/12)^(�Ⱓ*12)
    float interest = principle * pow(1 + rate / 100 / 12, time * 12);
    float amount = principle + interest;  // �� �ݾ��� ���ݰ� ������ ���Դϴ�.

    printf("����: %.2f\n", interest);  // ���� ���ڸ� ����մϴ�.
    printf("�� �ݾ�: %.2f\n", amount);  // ���� �� �ݾ��� ����մϴ�.

    return 0;
}
