#include <stdio.h>

// point ����ü ����
struct point
{
    int x; // x ��ǥ�� �����ϴ� ������ ����
    int y; // y ��ǥ�� �����ϴ� ������ ����
};

// struct point�� Point�� ��Ī(alias) ����
typedef struct point Point;

int main(void)
{
    Point p1; // Point ����ü ���� p1 ����

    p1.x = 10; // p1�� x ��ǥ�� 10 �Ҵ�
    p1.y = 20; // p1�� y ��ǥ�� 20 �Ҵ�

    // p1�� x, y ��ǥ ���
    printf("(%d, %d)\n", p1.x, p1.y);

    return 0;
}
