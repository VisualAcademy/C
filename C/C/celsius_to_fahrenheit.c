#define _CRT_SECURE_NO_WARNINGS // 보안 경고를 무시하기 위한 정의
#include <stdio.h> 

int main(void)
{
    float celsius, fahrenheit; // 섭씨 온도와 화씨 온도를 저장할 변수 선언
    printf("섭씨 온도를 입력하세요: ");
    scanf("%f", &celsius); // 사용자로부터 섭씨 온도를 입력받음

    // 섭씨 온도를 화씨 온도로 변환
    fahrenheit = (celsius * 9 / 5) + 32;

    // 화씨 온도를 소수점 둘째 자리까지 출력
    printf("화씨 온도: %.2f\n", fahrenheit);

    return 0;
}
