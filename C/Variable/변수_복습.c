/*
    ����(Variable) :
        -�ϳ��� �̸����� �ϳ��� ������ ������
         ������ ���� �޸𸮻��� ������ ���� ����
        -���ϴ� ��
    ����������(DataType) :
        ���� : int
        �Ǽ� : double
        ���� : char
        ���ڿ� : string -> char* : ������
        �Ҹ�(Boolean) : bool -> int(1:�ִ�/True, 0:����/False)
*/
#include <stdio.h>

int main(void)
{
    //[1] ���� ����
    int i;
    //[2] ���� �ʱ�ȭ(�Ҵ�)
    i = 100;
    //[3] ���� ����(������ ����)
    printf("%d\n", i);

    return 0;
}
