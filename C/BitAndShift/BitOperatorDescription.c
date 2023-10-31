// bit-operator-description.md
// 비트 연산자: AND(&), OR(|), XOR(^), NOT(~) 
#include <stdio.h>

int main(void)
{
    int x = 12; // 2진수로 1100
    int y = 10; // 2진수로 1010

    int a = x & y; // AND 연산: 1000 -> 8
    int o = x | y; // OR 연산: 1110 -> 14
    int e = x ^ y; // XOR 연산: 0110 -> 6
    // NOT 연산: 시스템에 따라 결과가 다를 수 있음. 32비트 int를 가정하면 큰 음수 값이 됨.
    int n = ~x;    // 11111111...11110011 -> -13

    printf("a: %d\n", a);
    printf("o: %d\n", o);
    printf("e: %d\n", e);
    printf("n: %d\n", n);

    getchar(); // 프로그램 종료 전 사용자의 입력을 기다립니다.

    return 0;
}
