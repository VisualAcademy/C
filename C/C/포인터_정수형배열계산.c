/*
	7.7. ����. �����͸� ��� 5�� ����� ����ϴ� ���α׷� : ������_�������迭���.c
*/
//�迭���� 5�� ����� ���� ���
#include <stdio.h>

int main(void)
{
    int a[10] = { 22, 33, 44, 55, 54, 43, 32, 21 };
    int* p = a;
    int hap = 0;
    float avr;

    for (int i = 0; i < 8; i++)
    {
        if (*(p + i) % 5 == 0)
        {
            printf("%4d", *(p + i));
        }
    }

    printf("\n");

    return 0;
}
