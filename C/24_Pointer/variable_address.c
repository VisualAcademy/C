// variable_address.c, VariableAddress.c 
#include <stdio.h>

int main(void)
{
    int age = 21; // int Ÿ�� ���� ����� ���ÿ� 21�� �ʱ�ȭ

    printf("%d -> %p\n", age, &age); // age ������ ���� age ������ �ּ� ���

    return 0;
}
