#include <stdio.h>

#pragma pack(push, 1)    // 정렬을 1바이트로 지정
struct example
{
    char a;
    int b;
    double c;
    short d;
};
#pragma pack(pop)     // 정렬 설정을 원래대로 돌려놓음

int main(void)
{
    printf("sizeof(struct example) = %lu\n", sizeof(struct example));
    return 0;
}
