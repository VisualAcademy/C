// pointer_one_array.c
#include <stdio.h>

int main(void)
{
    int a[5] = { 10, 20, 30, 40, 50 };
    int* p;

    p = a;//배열명 자체가 배열의 시작 주소

    printf("%d %d %d %d %d\n",
        a[0], a[1], a[2], a[3], a[4]);
    printf("%d %d %d %d %d\n",
        *p, *(p + 1), *(p + 2), *(p + 3), *(p + 4));

    return 0;
}
