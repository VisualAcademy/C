/*
    4.2.3. ����. do�� : �ݺ���3.c
*/
//do~while��
#include <stdio.h>

void main()
{
    //�Է�
    int intSum = 0; int i;
    //ó��
    i = 1;                    //�ʱ��
    do          //������ ���߿� �Ǵ�.
    {
        intSum += i;     //���๮
        i++;               //������
    } while (i <= 100);     //���ǹ�;
    //���
    printf("%d", intSum);
}
