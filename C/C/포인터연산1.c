/*
    ������ ������ ���� : ���� ������
*/
#include <stdio.h>

int main(void)
{
    int num[] = { 1, 2, 3, 4, 5 };
    int* pnum = num; // pnum�� num�� ù ��° ���Ҹ� ����Ų��.

    //*pnum++ : *(pnum++)
    printf("*pnum++ : %d \n", *pnum++); // 1, pnum�� ����Ű�� ���� ���, pnum�� 1 ����

    //*pnum-- : *(pnum--)
    printf("*pnum-- : %d \n", *pnum--); // 2, pnum�� ����Ű�� ���Ҹ� ����ϰ�, pnum�� 1 ���ҽ�Ų��.

    //*++pnum : *(++pnum)
    printf("*++pnum : %d \n", *++pnum); // 2, pnum�� 1 ������Ű��, pnum�� ����Ű�� ���Ҹ� ����Ѵ�.

    //*--pnum : *(--pnum)
    printf("*--pnum : %d \n", *--pnum); // 1, pnum�� 1 ���ҽ�Ű��, pnum�� ����Ű�� ���Ҹ� ����Ѵ�.

    return 0;
}
