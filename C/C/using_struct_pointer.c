#define _CRT_SECURE_NO_WARNINGS // ��� �����ϴ� ��ũ�� ����
#include <stdio.h>

// Point ����ü ����
typedef struct
{
    int x; // x ��ǥ
    int y; // y ��ǥ
} Point;

int main(void)
{
    Point p1; // Point ����ü ���� ����
    Point* ptr = &p1; // Point ����ü�� ����Ű�� ������ ���� ���� �� p1�� �ּ� �Ҵ�

    // ����ڷκ��� ���� ��ǥ�� �Է¹���
    printf("���� ��ǥ�� �Է��ϼ��� (x, y): ");
    scanf("%d %d", &ptr->x, &ptr->y);

    // �Է¹��� ��ǥ�� ���
    printf("�Է��� ���� ��ǥ: (%d, %d)\n", ptr->x, ptr->y);

    return 0;
}