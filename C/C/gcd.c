#define _CRT_SECURE_NO_WARNINGS // 보안 경고를 무시하는 데 필요한 전처리기 지시문
#include <stdio.h> 

// 두 정수 a와 b의 최대 공약수를 구하는 함수
int gcd(int a, int b)
{
    int c;
    // b가 0이 아닐 때까지 반복
    while (b != 0)
    {
        // a를 b로 나눈 나머지를 c에 저장
        c = a % b;
        // a에는 b 값을 대입
        a = b;
        // b에는 c 값을 대입
        b = c;
    }
    // 최대 공약수를 반환
    return a;
}

int main(void)
{
    int a, b;

    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    // 최대 공약수를 계산하고 출력
    printf("%d와 %d의 최대 공약수는: %d입니다.\n", a, b, gcd(a, b));

    return 0;
}
