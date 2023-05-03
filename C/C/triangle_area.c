#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 안전하지 않은 함수 경고를 무시하도록 함
#include <stdio.h>
#include <math.h>

// 삼각형의 넓이를 계산하는 함수
double triangleArea(double base, double height)
{
    return 0.5 * base * height; // 삼각형의 넓이를 계산하여 반환
}

int main(void)
{
    double base, height; // 삼각형의 밑변과 높이를 저장할 변수 선언

    printf("삼각형의 밑변과 높이를 입력하세요: ");
    scanf("%lf %lf", &base, &height); // 사용자로부터 밑변과 높이를 입력받음

    // 삼각형의 넓이를 계산하고 출력
    printf("삼각형의 넓이: %.2f\n", triangleArea(base, height));

    return 0;
}
