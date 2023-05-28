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

    printf("����ü�� ũ��: %lu����Ʈ\n", sizeof(s));  // ���: ����ü�� ũ��: 8����Ʈ
    printf("����ü�� ũ��: %lu����Ʈ\n", sizeof(u));   // ���: ����ü�� ũ��: 4����Ʈ

    return 0;
}
