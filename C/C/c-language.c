#include <stdio.h>

int main(void)
{
    int num[] = { 1, 2, 3, 4, 5 };
    int* pnum = num; // pnum은 num의 첫 번째 원소를 가리킨다.

    printf("%d\n", *pnum); // 1
    printf("%d\n", *(pnum)); // 1
    printf("%d\n", *(pnum + 0)); // 1

    printf("%d\n", *(pnum++)); // 1
    printf("%d\n", *pnum); // 2
    printf("%d\n", *(pnum--)); // 2
    printf("%d\n", *pnum); // 1

    return 0;
}
