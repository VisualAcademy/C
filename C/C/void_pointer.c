#include <stdio.h>

int main(void)
{
    int x = 10;
    float y = 20.5;
    char c = 'A';

    void* ptr;

    ptr = &x;
    printf("ptr이 가리키는 정수 값: %d\n", *(int*)ptr);

    ptr = &y;
    printf("ptr이 가리키는 실수 값: %.1f\n", *(float*)ptr);

    ptr = &c;
    printf("ptr이 가리키는 문자 값: %c\n", *(char*)ptr);

    return 0;
}
