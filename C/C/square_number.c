#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 안전하지 않은 함수 경고를 무시하도록 함
#include <stdio.h>

// 이 함수는 전달된 정수의 제곱을 계산하고 반환합니다.
int calculate_square(int num)
{
    return num * num;
}

int main(void)
{
    int num;

    // 사용자에게 제곱을 구할 숫자를 입력하도록 요청합니다.
    printf("제곱을 구할 숫자를 입력하세요: ");
    scanf("%d", &num);

    // 사용자가 입력한 숫자의 제곱을 계산하고 출력합니다.
    printf("%d의 제곱: %d\n", num, calculate_square(num));

    return 0;
}
