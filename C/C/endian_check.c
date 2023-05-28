#include <stdio.h>

union endian
{
    unsigned int num;
    char x[4];
};

int main(void)
{
    union endian temp;
    temp.num = 0x01020304;

    printf("%d\n", temp.x[0]);  // 4가 출력되면 리틀 엔디언, 1이 출력되면 빅 엔디언
    return 0;
}
