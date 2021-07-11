#include <stdio.h>

main()
{
    int min = -2147483647 - 1; // 정수형이 가질 수 있는 가장 작은값
    int max = +2147483647; // 정수형이 가질 수 있는 가장 큰값

    printf("int 변수의 최솟값: %d\n", min);
    printf("int 변수의 최댓값: %d\n", max);
}
