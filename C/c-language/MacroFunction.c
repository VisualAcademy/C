#include <stdio.h>

//[!] ��ũ�� �Լ� ����
#define max(x, y) x > y ? x : y
#define min(x, y) (x > y ? y : x)

int main()
{
    printf("�ִ�: %d\n", max(3, 5)); // 5
    printf("�ּڰ�: %d\n", min(-3, -5)); // -5

    return 0;
}

//�ִ�: 5
//�ּڰ� : -5
