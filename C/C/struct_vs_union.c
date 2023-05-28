#include <stdio.h>

struct S
{
    int i;
    float f;
};

union U
{
    int i;
    float f;
};

int main(void)
{
    struct S s;
    union U u;

    printf("구조체의 크기: %lu바이트\n", sizeof(s));  // 출력: 구조체의 크기: 8바이트
    printf("공용체의 크기: %lu바이트\n", sizeof(u));   // 출력: 공용체의 크기: 4바이트

    return 0;
}
