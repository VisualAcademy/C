/*
do~while�� : �ѹ��� ���� �� ����ó��
*/
#include <stdio.h>

int main(void)
{
    int intSum = 0;
    int i = 0;

    //[!] Process   
    i = 1;                          //[1] �ʱ��
    do
    {
        if (i % 2 == 0)             //[!] ���͸�
        {
            intSum += i;            //[!] ���๮
        }
        i++;                        //[2] ������
    } while (i <= 100);              //[3] ���ǽ�

    printf("%d\n", intSum);         //2550
}
