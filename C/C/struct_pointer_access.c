#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    struct point p1 = { 10, 20 };  // ����ü ���� p1�� �����ϰ� �ʱ�ȭ
    struct point* p2 = &p1;        // ����ü ������ ���� p2�� �����Ͽ� p1�� �ּҸ� ����Ŵ

    printf("x: %d\n", p2->x);     // �����͸� ����Ͽ� ����ü ��� x�� ����
    printf("y: %d\n", p2->y);     // �����͸� ����Ͽ� ����ü ��� y�� ����

    return 0;
}
