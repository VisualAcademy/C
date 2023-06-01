#include <stdio.h>
#include <math.h>

typedef struct
{
    double x;
    double y;
} Point;

double distance(Point p1, Point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main(void)
{
    Point p1 = { 1.0, 2.0 };
    Point p2 = { 3.0, 4.0 };
    printf("두 점 사이의 거리: %lf\n", distance(p1, p2));
    return 0;
}
