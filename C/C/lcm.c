#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

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
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("LCM of %d and %d is %d\n", a, b, lcm(a, b));
    return 0;
}
