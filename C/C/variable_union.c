#include <stdio.h>

// ����� ���� ����ü Ÿ�� 'Variable' ����
typedef union Variable
{
    int i;      // ������ ��� 'i'
    double d;   // �Ǽ��� ��� 'd'
} Var;          // ����ü Ÿ�Կ� ��Ī 'Var' �ο�

int main(void)
{
    Var va;     // ����ü Ÿ�� 'Var'�� ���� 'va' ����

    va.i = 5;   // ���� 'va'�� ���� ��� 'i'�� �� 5 �Ҵ�

    // �Ҵ�� 'va.i'�� �� ���
    printf("va.i�� �� : %d\n", va.i);

    va.d = 3.141592;  // ���� 'va'�� �Ǽ� ��� 'd'�� �� 3.141592 �Ҵ�

    // �Ҵ�� 'va.d'�� �� ���
    printf("va.d�� �� : %f\n", va.d);

    // 'va.i'�� ���� �ٽ� ���. ����: �� �������� 'va.i'�� ���� ���ǵ��� ����
    printf("va.i�� �� : %d\n", va.i);

    return 0;
}
