#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 안전하지 않은 함수 경고를 무시하도록 함
#include <stdio.h> // 표준 입출력 함수를 사용하기 위한 라이브러리 포함

#define PI 3.14159265 // 원주율 상수 정의

// calculate_circle_area 함수: 반지름 값을 인수로 받아 원의 넓이를 계산하여 반환하는 함수
double calculate_circle_area(double radius)
{
    return PI * radius * radius; // 원의 넓이 공식: PI * 반지름 * 반지름
}

int main(void)
{
    double radius; // 원의 반지름을 저장할 변수 선언

    // 사용자에게 원의 반지름을 입력 받기
    printf("원의 반지름을 입력하세요: ");
    scanf("%lf", &radius);

    // 원의 넓이를 계산한 후, 소수점 둘째 자리까지 출력
    printf("원의 넓이: %.2f\n", calculate_circle_area(radius));

    return 0; // 프로그램 종료
}
