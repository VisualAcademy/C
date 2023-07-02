#include <stdio.h>

#define CONCATENATE(a, b) a ## b

int main(void)
{
    int xy = 10;
    int x = 1;
    int y = 2;

    printf("%d\n", CONCATENATE(x, y)); // xy 변수를 참조하고, 10을 출력

    return 0;
}
