// ���� ����: `&` ��ȣ�� ������ �ּڰ��� ȭ�鿡 ����ϱ�
#include <stdio.h>

int main(void)
{
    int year = 2023;

    printf("%d\n", year); // 2023

    // �ּҴ� ��� ����
    printf("%p\n", &year); // 005CFDC0, ...
    //printf("%d\n", &year); 
    //printf("%#x\n", &year);

    return 0;
}
