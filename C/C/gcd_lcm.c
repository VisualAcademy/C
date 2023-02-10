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

    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &a, &b);

    printf("�ִ� �����: %d\n", gcd(a, b));
    printf("�ּ� �����: %d\n", lcm(a, b));

    return 0;
}
