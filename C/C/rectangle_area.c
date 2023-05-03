#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 안전하지 않은 함수 경고를 무시하도록 함
#include <stdio.h>

// 직사각형의 넓이를 계산하는 함수
int rectangle_area(int width, int height)
{
    return width * height; // 가로 * 세로
}

int main(void)
{
    int width, height;

    // 사용자로부터 직사각형의 가로와 세로 길이를 입력받음
    printf("직사각형의 가로와 세로 길이를 입력하세요: ");
    scanf("%d %d", &width, &height);

    // 계산된 넓이를 출력
    printf("직사각형의 넓이: %d\n", rectangle_area(width, height));

    return 0;
}
