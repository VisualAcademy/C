#include <stdio.h>

int main(void)
{
    //[1] �迭 ����
    int b[3]; // �迭
    int i = 0;// ����
    //[2] �迭 �ʱ�ȭ
    b[0] = 10;
    b[1] = 20;
    b[2] = 30;
    //[2] ���� ����
    printf("%d\n", b[0]);
    printf("%d\n", b[1]);
    printf("%d\n", b[2]);
    //[3] �ݺ����� ����ؼ� ���
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", b[i]);
    }
}
