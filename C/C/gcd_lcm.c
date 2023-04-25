#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// �� ���� a�� b�� �ִ� ������� ���ϴ� �Լ� (��� ���)
int gcd(int a, int b)
{
    // b�� 0�̸� a�� �ִ� ������̹Ƿ� ��ȯ, �׷��� ������ ��������� �ִ� ����� ã��
    return b == 0 ? a : gcd(b, a % b);
}

// �� ���� a�� b�� �ּ� ������� ���ϴ� �Լ�
int lcm(int a, int b)
{
    // �ּ� ����� ����: a * b / gcd(a, b)
    return a * b / gcd(a, b);
}

int main(void)
{
    int a, b;

    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &a, &b);

    // �ִ� ������� ����ϰ� ���
    printf("�ִ� �����: %d\n", gcd(a, b));
    // �ּ� ������� ����ϰ� ���
    printf("�ּ� �����: %d\n", lcm(a, b));

    return 0;
}
