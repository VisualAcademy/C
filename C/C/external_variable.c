#include <stdio.h>

int count = 0; // ���� ����(�ܺ� ����) ����

void increment()
{
    extern int count; // ���� ���� ���
    count++; // ���� ���� �� ����
}

int main(void)
{
    printf("count = %d\n", count); // �ʱⰪ ���
    increment(); // �Լ� ȣ��
    printf("count = %d\n", count); // ����� �� ���

    return 0;
}
