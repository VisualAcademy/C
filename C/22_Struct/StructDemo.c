//[?] ����ü: �ϳ� �̻��� ���� �Ǵ� �迭�� ��� ����
#include <stdio.h>

// ����ü ����
struct Point {
    int X;
    int Y;
};

main()
{
    struct Point point; // Point ����ü ������ ���� ����
    point.X = 100; // ���� �����ؼ� X ������ ���� �Ҵ�
    point.Y = 200; // ���� �����ؼ� Y ������ ���� �Ҵ�
    printf("X: %d, Y: %d\n", point.X, point.Y); // X: 100, Y: 200
}
