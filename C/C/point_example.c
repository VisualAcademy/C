#include <stdio.h>

// Point ����ü ����
struct Point
{
    int x; // x ��ǥ ��
    int y; // y ��ǥ ��
};

int main(void)
{
    struct Point p1; // Point ����ü ���� p1 ����

    p1.x = 10; // p1�� x ��ǥ ���� 10 �Ҵ�
    p1.y = 20; // p1�� y ��ǥ ���� 20 �Ҵ�

    // p1�� ��ǥ�� ���: (10, 20)
    printf("(%d, %d)\n", p1.x, p1.y);

    return 0;
}
