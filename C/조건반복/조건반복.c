/*
1���� 100���� 3�ǹ���̰� �׸���(&&) 4�� ����� ��
12 + 24 + 36 + ... +
*/
#include <stdio.h>

void main(void)
{
    //[1] Input
    int intSum = 0;
    int i; // �ݺ���
    //[2] Process
    i = 1;                              //[a] �ʱ��
    while (i <= 100)                    //[b] ���ǽ�
    {
        if (i % 3 == 0 && i % 4 == 0)   //[!] ���͸�
        {
            intSum += i;                //[c] ���๮
        }
        i++;                            //[d] ������
    }
    //[3] Output
    printf("%d\n", intSum);
}
