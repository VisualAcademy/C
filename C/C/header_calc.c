// header_calc.c
#include "header_calc.h"

int add(int a, int b)
{
    return a + b; // ���� ��� ��ȯ
}

int subtract(int a, int b)
{
    return a - b; // ���� ��� ��ȯ
}

int multiply(int a, int b)
{
    return a * b; // ���� ��� ��ȯ
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b; // ������ ��� ��ȯ
    }
    else
    {
        return 0; // ���� ���̽�: 0���� ������ ���
    }
}