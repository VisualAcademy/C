// 03.������������.c
#include <stdio.h>

int main(void)
{
    // ���� ����
    int a = 365;
    // ������ ����
    int* pa = &a;

    printf("a : %d\n", a);//365
    printf("&a : %p\n", &a);//1244992
    //printf("*a : %d\n", *a);

    // pa�� ����ִ� �ٸ� ����(����)�� ���� ��
    printf("pa : %p\n", pa);//1244992����
    // pa�� �����ϰ� �ִ� ������ ����ִ� ��
    printf("*pa : %d\n", *pa);//365
    // pa ���� ��ü�� ���� ��巹��(�ּ�)
    printf("&pa : %p\n", &pa);//1244980

    return 0;
}
