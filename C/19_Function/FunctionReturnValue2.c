// ��ȯ���� �ִ� �Լ�
#include <stdio.h>

int SquareFunction(int x)   // �Է�: �Ű� ������ �ְ� 
{
    int r = x * x;          // ó��: �Լ��� ����
    return r;               // ���: ��ȯ���� �ִ� 
}

int main()
{
    int r = SquareFunction(2); // �Լ� ȣ�� �� ��ȯ�� �ޱ� 
    printf("%d\n", r); // 4

    return 0;
}
