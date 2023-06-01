#include <stdio.h>

// PI라는 매크로를 정의하고, 그 값을 원주율을 나타내는 3.14로 설정
#define PI 3.14

int main(void)
{
    // 반지름 값을 선언하고 초기화
    int radius = 5;

    // 원의 둘레 계산 (둘레 = 2 * PI * 반지름)
    double circumference = 2 * PI * radius;

    // 계산된 원의 둘레 출력
    printf("원의 둘레: %.2f\n", circumference);

    return 0;
}
