#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    float initial_deposit;
    float interest_rate;
    int years;
    float future_value;

    printf("�ʱ� ���ݾ�: ");  // ����ڿ��� �ʱ� ���ݾ��� �Է¹޽��ϴ�.
    scanf("%f", &initial_deposit);
    printf("������: ");  // ����ڿ��� �������� �Է¹޽��ϴ�.
    scanf("%f", &interest_rate);
    printf("�Ⱓ(��): ");  // ����ڿ��� ���� �Ⱓ�� �Է¹޽��ϴ�.
    scanf("%d", &years);

    future_value = initial_deposit * pow(1 + interest_rate / 100, years);

    printf("�ʱ� ���ݾ�: %.2f\n", initial_deposit);  // �ʱ� ���ݾ��� ����մϴ�.
    printf("������: %.2f%%\n", interest_rate);  // �������� ����մϴ�.
    printf("�Ⱓ: %d��\n", years);  // ���� �Ⱓ�� ����մϴ�.
    printf("���� ��� ���: %.2f��\n", future_value);  // ���� ������ �̷� ��ġ�� ����մϴ�.

    return 0;
}
