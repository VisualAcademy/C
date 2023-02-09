#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("The greatest common divisor of %d and %d is: %d\n", a, b, gcd(a, b));

    return 0;
}
