#include <stdio.h>

// 전처리기 지시문으로 매크로 상수 선언: 공백을 기준으로 매크로 이름과 매크로 상수를 구분
#define PI 3.14
#define SPEED_LIMIT 50

int main(void)
{
    // 일반 변수처럼 매크로 상수 참조해서 사용
    printf("PI 이름으로 만들어진 매크로 상수 출력: %.2f\n", PI);
    printf("일반 도로의 자동차 최고 속도: %d\n", SPEED_LIMIT);

    return 0;
}
