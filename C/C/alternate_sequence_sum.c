// 1-2+4-7+11-16+22 = ?
#include <stdio.h>

void main(void)
{
    //[1] Input
    int sum = 0; // ��
    int data = 1; // 1���� �����ؼ� �ε�����ŭ ���� �� �����͵�...

    //[2] Process
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            sum += data; // �ε����� ¦���� ��
        }
        else
        {
            sum -= data; // �ε����� Ȧ���� ��...
        }
        data = data + (i + 1);
    }

    //[3] Output
    printf("�ᱣ��: %d\n", sum);//13
    printf("�ᱣ��: %d\n", (1 - 2 + 4 - 7 + 11 - 16 + 22));//13

    return 0;
}
