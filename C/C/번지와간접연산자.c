#include <stdio.h>

int main(void)
{
    int i = 10;
    int* j = &i; //������ j�� i�� �ּҸ� ����

    printf("Decimal i = %d Pointer i = %p\n", i, &i);
    //i�� 10���� ���� i�� �ּ� ���
    printf("Pointer j = %p j = %d j = %p\n", j, *j, &j);
    //������ j�� ��(��, i�� �ּ�)�� i�� ��(��, *j) ���, j�� �ּ� ���

    return 0;
}
