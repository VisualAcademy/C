#include <stdio.h>

int main(void)
{
    int num[] = { 1, 2, 3, 4, 5 };
    int* pnum = num; // pnum�� num�� ù ��° ���Ҹ� ����Ų��.

    printf("%d\n", *pnum); // 1
    printf("%d\n", *(pnum)); // 1
    printf("%d\n", *(pnum + 0)); // 1

    printf("%d\n", *(pnum++)); // 1
    printf("%d\n", *pnum); // 2
    printf("%d\n", *(pnum--)); // 2
    printf("%d\n", *pnum); // 1

    return 0;
}
