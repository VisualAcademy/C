#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    float initial_deposit;
    float interest_rate;
    int years;
    float future_value;

    printf("�ʱ� ���ݾ��� �Է��ϼ���: ");  // ����ڿ��� �ʱ� ���ݾ��� �Է¹޽��ϴ�.
    scanf("%f", &initial_deposit);
    printf("�������� �Է��ϼ���: ");  // ����ڿ��� ���� �������� �Է¹޽��ϴ�.
    scanf("%f", &interest_rate);
    printf("���� �Ⱓ�� �Է��ϼ���: ");  // ����ڿ��� ���� �Ⱓ�� �Է¹޽��ϴ�.
    scanf("%d", &years);

    future_value = initial_deposit * pow(1 + interest_rate / 100, years);

    printf("������ �̷� ��ġ��: %.2f\n", future_value);  // ���� ������ �̷� ��ġ�� ����մϴ�.
    return 0;
}
