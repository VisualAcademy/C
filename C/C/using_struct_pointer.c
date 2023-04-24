#define _CRT_SECURE_NO_WARNINGS // 경고를 무시하는 매크로 정의
#include <stdio.h>

// Point 구조체 정의
typedef struct
{
    int x; // x 좌표
    int y; // y 좌표
} Point;

int main(void)
{
    Point p1; // Point 구조체 변수 선언
    Point* ptr = &p1; // Point 구조체를 가리키는 포인터 변수 선언 및 p1의 주소 할당

    // 사용자로부터 점의 좌표를 입력받음
    printf("점의 좌표를 입력하세요 (x, y): ");
    scanf("%d %d", &ptr->x, &ptr->y);

    // 입력받은 좌표를 출력
    printf("입력한 점의 좌표: (%d, %d)\n", ptr->x, ptr->y);

    return 0;
}