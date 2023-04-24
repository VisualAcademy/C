#include <stdio.h>
#include <math.h>

// Point ����ü ����
typedef struct
{
    int x; // x ��ǥ
    int y; // y ��ǥ
} Point;

// �� �� ������ �Ÿ��� ����ϴ� �Լ�
// �Է�: �� ���� Point ����ü ������
// ���: �� �� ������ �Ÿ� (double)
double calculate_distance(Point* p1, Point* p2)
{
    int dx = p1->x - p2->x; // x ��ǥ�� ���� ���
    int dy = p1->y - p2->y; // y ��ǥ�� ���� ���

    // �� �� ������ �Ÿ��� ����Ͽ� ��ȯ
    return sqrt((double)(dx * dx + dy * dy));
}

int main(void)
{
    // �� ���� Point ����ü ������ �����ϰ� �ʱ�ȭ
    Point p1 = { 10, 20 };
    Point p2 = { 30, 40 };

    // calculate_distance �Լ��� ȣ���Ͽ� �� �� ������ �Ÿ��� ���
    double distance = calculate_distance(&p1, &p2);

    // ���� �Ÿ��� ���
    printf("�� �� ������ �Ÿ�: %.2lf\n", distance);

    return 0;
}
