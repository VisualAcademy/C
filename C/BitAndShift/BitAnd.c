// & 연산자: 비트 AND 연산자(둘 다 1일때만 1)
#include <stdio.h>

int main(void)
{
    int x = 0b1010; // 10진수: 10
    int y = 0b1100; // 10진수: 12

    // x를 이진수로 표현 -> 십진수로 표현
    printf("%d\n", x);

    // y를 이진수로 표현 -> 십진수로 표현
    printf("%d\n", y);

    // x AND y를 이진수로 표현 -> 십진수로 2칸 잡고 표현 
    printf("%d\n", x & y);

    return 0;
}
