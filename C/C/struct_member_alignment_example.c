#include <stdio.h>

// 크기가 큰 멤버를 먼저 배치한 구조체
struct Example1 {
    double b;
    int a;
    short d;
    char c;
};

#pragma pack(push, 1)
// #pragma pack 지시문을 사용한 구조체
struct Example2 {
    int a;
    double b;
    char c;
    short d;
};
#pragma pack(pop)

int main(void)
{
    struct Example1 e1;
    struct Example2 e2;

    printf("Example1의 크기 (최적화된 정렬): %zu 바이트\n", sizeof(e1)); // 16
    printf("Example2의 크기 (#pragma pack 사용): %zu 바이트\n", sizeof(e2)); // 15

    return 0;
}
