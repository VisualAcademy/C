#include <stdio.h>

// Point 구조체 정의
struct Point
{
    int x; // x 좌표 값
    int y; // y 좌표 값
};

int main(void)
{
    struct Point p1; // Point 구조체 변수 p1 선언

    p1.x = 10; // p1의 x 좌표 값에 10 할당
    p1.y = 20; // p1의 y 좌표 값에 20 할당

    // p1의 좌표값 출력: (10, 20)
    printf("(%d, %d)\n", p1.x, p1.y);

    return 0;
}
