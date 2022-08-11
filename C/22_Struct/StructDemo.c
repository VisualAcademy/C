//[?] 구조체: 하나 이상의 변수 또는 배열을 묶어서 관리
#include <stdio.h>

struct Point
{
    int X;
    int Y;
};

int main(void)
{
    struct Point point; // Point 구조체 형식의 변수 선언
    point.X = 100; // 점을 구분해서 X 변수에 값을 할당
    point.Y = 200; // 점을 구분해서 Y 변수에 값을 할당
    printf("X: %d, Y: %d\n", point.X, point.Y); // X: 100, Y: 200

    return 0;
}
