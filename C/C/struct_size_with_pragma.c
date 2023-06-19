#include <stdio.h>

#pragma pack(push, 1)    // ������ 1����Ʈ�� ����
struct example
{
    char a;
    int b;
    double c;
    short d;
};
#pragma pack(pop)     // ���� ������ ������� ��������

int main(void)
{
    printf("sizeof(struct example) = %lu\n", sizeof(struct example));
    return 0;
}
