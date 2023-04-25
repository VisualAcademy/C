#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

// 두 정수 a와 b의 최대 공약수를 구하는 함수(재귀 함수 사용) 
int gcd(int a, int b)
{
    // b가 0이면 a가 최대 공약수이므로 반환
    if (b == 0)
    {
        return a;
    }
    // b가 0이 아닌 경우, 재귀적으로 최대 공약수를 찾음
    return gcd(b, a % b);
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
    // 두 정수를 입력받는 부분
    printf("두 숫자를 입력하세요: ");
    scanf("%d %d", &a, &b);
    // 최소 공배수를 계산하고 출력하는 부분
    printf("%d와 %d의 최소공배수는 %d입니다.\n", a, b, lcm(a, b));
    return 0;
}
