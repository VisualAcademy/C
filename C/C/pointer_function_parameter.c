#include <stdio.h>

// �Ű������� ���޵� ���ڸ� 50���� �����ϴ� �Լ�
void set_to_fifty(int* number)
{
    *number = 50;
}

// �Ű������� ���޵� ���ڸ� 100���� �����ϴ� �Լ�
void set_to_hundred(int* number)
{
    *number = 100;
}

int main(void)
{
    int x = 5;

    printf("�Լ��� ȣ���ϱ� �� x ��: %d\n", x);

    set_to_fifty(&x);
    printf("set_to_fifty() �Լ��� ȣ���� ���� x��: %d \n", x);

    set_to_hundred(&x);
    printf("set_to_hundred() �Լ��� ȣ���� ���� x��: %d \n", x);

    return 0;
}
