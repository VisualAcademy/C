// �Լ�_�����Լ�_����_���ĺ�ȯ�����Լ�.c
// - ���ڿ��� ������������ ��ȯ
// - �������� ���ڿ��� ��ȯ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // atoi(), ...

int main(void)
{
    char str[] = "3.1415����65\0���";
    long value = 123456;
    char buffer[100]; // ���ڿ��� �����ϴ� �׸�

    int i;
    long l;
    double d;

    // ���� ��ȯ �Լ��� ����ؼ� ���ڿ� => ����/�Ǽ�
    i = atoi(str); // ASCII to Integer : ������(int)
    l = atol(str); // ������(long)
    d = atof(str); // �Ǽ���(float, double)

    // ���� ��ȯ : ���� => ���ڿ�
    _ltoa(value, buffer, 10); // ltoa(123456, ���, 10������)

    // ���ڿ� ���
    printf("%s\n", str);

    // ��ȯ�� �� ���
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%.10f\n", d);

    printf("%ld => %s\n", value, buffer);

    return 0;
}
