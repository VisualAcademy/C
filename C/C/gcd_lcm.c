#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// �� ���� a�� b�� �ִ� ������� ���ϴ� �Լ� (��� ���)
int gcd(int a, int b)
{
    // b�� 0�̸� a�� �ִ� ������̹Ƿ� ��ȯ
    if (b == 0) return a;
    // b�� 0�� �ƴ� ���, ��������� �ִ� ������� ã��
    return gcd(b, a % b);
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

    // ����ڷκ��� �� ������ �Է¹���
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &a, &b);

    // �ִ� ������� ����ϰ� ���
    printf("�ִ� �����: %d\n", gcd(a, b));
    // �ּ� ������� ����ϰ� ���
    printf("�ּ� �����: %d\n", lcm(a, b));

    return 0;
}
