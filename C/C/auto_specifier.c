#include <stdio.h>

void func()
{
    auto int num = 0; // 'auto' ������ ���
    num++;
    printf("num = %d\n", num);
}

int main(void)
{
    func(); // 'auto'�� ����� 'num' �ʱ�ȭ
    func(); // 'auto'�� ����� 'num' ���ʱ�ȭ
    return 0;
}
