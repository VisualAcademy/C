/*
    4.4. ���� : ¦���� ���� ���ϴ� ���α׷� : ¦������.c
*/
#include <stdio.h>

int main(void)
{
    //�Է�(Input) ���� ����� 
    int intSum = 0;
    int i = 0;

    //ó��(Process)
    i = 1;				//[1]�ʱ��
    while (i <= 100)		//[2]���ǽ�
    {
        if (i % 2 == 0)
        {
            intSum += i;//[!]���๮
        }
        i++;			//[3]������
    }

    //���(Output)
    printf("1~100 ¦����:%d\n", intSum);

    return 0;
}
