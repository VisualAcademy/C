#include <stdio.h>
#include <math.h>

// Point 구조체 정의
typedef struct
{
    int x; // x 좌표
    int y; // y 좌표
} Point;

// 두 점 사이의 거리를 계산하는 함수
// 입력: 두 개의 Point 구조체 포인터
// 출력: 두 점 사이의 거리 (double)
double calculate_distance(Point* p1, Point* p2)
{
    int dx = p1->x - p2->x; // x 좌표의 차이 계산
    int dy = p1->y - p2->y; // y 좌표의 차이 계산

    // 두 점 사이의 거리를 계산하여 반환
    return sqrt((double)(dx * dx + dy * dy));
}

int main(void)
{
    // 두 개의 Point 구조체 변수를 선언하고 초기화
    Point p1 = { 10, 20 };
    Point p2 = { 30, 40 };

    // calculate_distance 함수를 호출하여 두 점 사이의 거리를 계산
    double distance = calculate_distance(&p1, &p2);

    // 계산된 거리를 출력
    printf("두 점 사이의 거리: %.2lf\n", distance);

    return 0;
}
