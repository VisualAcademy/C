#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// 두 정수 a와 b의 최대 공약수를 구하는 함수 (재귀 사용)
int gcd(int a, int b)
{
    // b가 0이면 a가 최대 공약수이므로 반환, 그렇지 않으면 재귀적으로 최대 공약수 찾음
    return b == 0 ? a : gcd(b, a % b);
}

// 두 정수 a와 b의 최소 공배수를 구하는 함수
int lcm(int a, int b)
{
    // 최소 공배수 공식: a * b / gcd(a, b)
    return a * b / gcd(a, b);
}

int main(void)
{
    int a, b;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &a, &b);

    // 최대 공약수를 계산하고 출력
    printf("최대 공약수: %d\n", gcd(a, b));
    // 최소 공배수를 계산하고 출력
    printf("최소 공배수: %d\n", lcm(a, b));

    return 0;
}
