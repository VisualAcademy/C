#define _CRT_SECURE_NO_WARNINGS // ���� ��� �����ϴ� �� �ʿ��� ��ó���� ���ù�
#include <stdio.h> 

// �� ���� a�� b�� �ִ� ������� ���ϴ� �Լ�
int gcd(int a, int b)
{
    int c;
    // b�� 0�� �ƴ� ������ �ݺ�
    while (b != 0)
    {
        // a�� b�� ���� �������� c�� ����
        c = a % b;
        // a���� b ���� ����
        a = b;
        // b���� c ���� ����
        b = c;
    }
    // �ִ� ������� ��ȯ
    return a;
}

int main(void)
{
    int a, b;

    printf("�� ������ �Է��ϼ���: ");
    scanf("%d %d", &a, &b);

    // �ִ� ������� ����ϰ� ���
    printf("%d�� %d�� �ִ� �������: %d�Դϴ�.\n", a, b, gcd(a, b));

    return 0;
}
