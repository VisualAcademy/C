/*
    7.6. ����. ������ �迭�� ���� ���ϴ� ���α׷� : ������_�������迭��.c
*/
#include <stdio.h>

int main()
{
    int a[10] = { 11, 22, 33, 44, 55, 54, 43, 32, 21, 10 };
    int* p, i, hap = 0;
    float avr;

    p = a;  //�迭�� ���۹����� �����Ϳ� ���

    for (i = 0; i < 10; i++)
    {
        hap += *(p + i);
    }

    avr = (float)(hap / 10.0);

    printf("�� : %d\n", hap);
    printf("��� : %.2f\n", avr);

    return 0;
}

//��: 325
//��� : 32.50
