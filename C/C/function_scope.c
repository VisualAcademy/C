#include <stdio.h>

int value = 10; // ���� ����

void display_value()
{
    int value = 20; // ���� ����
    printf("�Լ� ���� value: %d\n", value); // ���� ���� ���
}

int main(void)
{
    display_value(); // �Լ� ���� ���� ���� ���
    printf("main �Լ� ���� value: %d\n", value); // ���� ���� ���

    return 0;
}
