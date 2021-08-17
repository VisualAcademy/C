#include <stdio.h>

// 전처리기 지시문으로 매크로 상수 선언: 공백을 기준으로 매크로 이름과 매크로 상수를 구분
#define PI 3.14

int main()
{
    // 일반 변수와 상수처럼 매크로 상수 참조해서 사용
    printf("PI 이름으로 만들어진 매크로 상수 출력: %.2f\n", PI);
    return 0;
}
