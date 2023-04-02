#include <stdio.h>

// ũ�Ⱑ ū ����� ���� ��ġ�� ����ü
struct Example1 {
    double b;
    int a;
    short d;
    char c;
};

#pragma pack(push, 1)
// #pragma pack ���ù��� ����� ����ü
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

    printf("Example1�� ũ�� (����ȭ�� ����): %zu ����Ʈ\n", sizeof(e1)); // 16
    printf("Example2�� ũ�� (#pragma pack ���): %zu ����Ʈ\n", sizeof(e2)); // 15

    return 0;
}
