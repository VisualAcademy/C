#include <stdio.h>

// ������ ����: ���� ����
enum Direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

int main(void)
{
    enum Direction dir = UP; // ������ ���� ���� �� �� �Ҵ�

    // ���⿡ ���� ���� ó��
    switch (dir)
    {
    case UP:
        printf("���� �̵�\n");
        break;
    case DOWN:
        printf("�Ʒ��� �̵�\n");
        break;
    case LEFT:
        printf("�������� �̵�\n");
        break;
    case RIGHT:
        printf("���������� �̵�\n");
        break;
    default:
        printf("��ȿ���� ���� ����\n");
        break;
    }

    return 0;
}
