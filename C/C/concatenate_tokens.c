#include <stdio.h>

#define CONCATENATE(a, b) a ## b

int main(void)
{
    int xy = 10;
    int x = 1;
    int y = 2;

    printf("%d\n", CONCATENATE(x, y)); // xy ������ �����ϰ�, 10�� ���

    return 0;
}
