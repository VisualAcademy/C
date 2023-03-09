// call_by_value_and_reference.c
#include <stdio.h>

// �� ����(Call By Value)�� �̿��Ͽ� ������ ���� 12 ������Ű�� �Լ�
void increase_by_12(int value) 
{
    value += 12;
}

// ���� ����(Call By Reference)�� �̿��Ͽ� ������ ���� 15 ������Ű�� �Լ�
void increase_by_15(int* value) 
{
    *value += 15;
}

// Entry Point
int main(void) 
{
    int num = 7;

    // ���� �����Ͽ� num ���� ������Ű�� �Լ� ȣ��
    increase_by_12(num);

    num++; // num = 8

    printf("�� ���� �� ���� : %d\n", num); // [1] 8

    // �ּҸ� �����Ͽ� num ���� ������Ű�� �Լ� ȣ��
    increase_by_15(&num);

    num++; // num = 24

    printf("���� ���� �� ���� : %d\n", num); // [2] 24

    return 0;
}

// ����/������/ValueType/Call By Value
// ������/����(�ּ�)����/ReferenceType/Call By Reference
// �Լ����� �Ϲݺ����� �����ͺ��� ���
