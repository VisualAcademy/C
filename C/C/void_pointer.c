#include <stdio.h>

int main(void)
{
    int x = 10;
    float y = 20.5;
    char c = 'A';

    void* ptr;

    ptr = &x;
    printf("ptr�� ����Ű�� ���� ��: %d\n", *(int*)ptr);

    ptr = &y;
    printf("ptr�� ����Ű�� �Ǽ� ��: %.1f\n", *(float*)ptr);

    ptr = &c;
    printf("ptr�� ����Ű�� ���� ��: %c\n", *(char*)ptr);

    return 0;
}
