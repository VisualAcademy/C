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

    printf("%d\n", temp.x[0]);  // 4�� ��µǸ� ��Ʋ �����, 1�� ��µǸ� �� �����
    return 0;
}
