#include <stdio.h>

// 열거형 정의: 방향 제어
enum Direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

int main(void)
{
    enum Direction dir = UP; // 열거형 변수 선언 및 값 할당

    // 방향에 따른 동작 처리
    switch (dir)
    {
    case UP:
        printf("위로 이동\n");
        break;
    case DOWN:
        printf("아래로 이동\n");
        break;
    case LEFT:
        printf("왼쪽으로 이동\n");
        break;
    case RIGHT:
        printf("오른쪽으로 이동\n");
        break;
    default:
        printf("유효하지 않은 방향\n");
        break;
    }

    return 0;
}
