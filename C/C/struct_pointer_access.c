#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    struct point p1 = { 10, 20 };  // 구조체 변수 p1을 선언하고 초기화
    struct point* p2 = &p1;        // 구조체 포인터 변수 p2를 선언하여 p1의 주소를 가리킴

    printf("x: %d\n", p2->x);     // 포인터를 사용하여 구조체 멤버 x에 접근
    printf("y: %d\n", p2->y);     // 포인터를 사용하여 구조체 멤버 y에 접근

    return 0;
}
