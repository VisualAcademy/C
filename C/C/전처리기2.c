#include <stdio.h>

#define A 10
#define B 20
#define C 30

int main(void)
{
    printf("%d + %d + %d = %d\n", A, B, C, (A + B + C)); // A, B, C �� ���� ������ ���� ��� ���
    printf("%d + %d - %d = %d\n", A, B, C, (A + B - C)); // A�� B�� ���ϰ� C�� ���� ��� ���

    return 0;
}
