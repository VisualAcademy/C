#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int gcd(int a, int b) 
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) 
{
    return a * b / gcd(a, b);
}

int main(void) 
{
    int a, b;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &a, &b);

    printf("최대 공약수: %d\n", gcd(a, b));
    printf("최소 공배수: %d\n", lcm(a, b));

    return 0;
}
