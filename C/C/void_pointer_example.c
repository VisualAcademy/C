#include <stdio.h>

int main(void)
{
    int x = 5;
    char y = 'A';

    // void ������ ����
    void* ptr;

    // int �����͸� ����Ű���� void ������ ����
    ptr = &x;

    // void �����͸� int �����ͷ� ����ȯ �� ������ ���
    printf("���� ��: %d\n", *((int*)ptr));

    // char �����͸� ����Ű���� void ������ ����
    ptr = &y;

    // void �����͸� char �����ͷ� ����ȯ �� ������ ���
    printf("���� ��: %c\n", *((char*)ptr));

    return 0;
}
