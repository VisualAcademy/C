#include <stdio.h>

int main(void)
{
    // 배열 numbers를 선언하고 초기화
    int numbers[] = { 10, 20, 30, 40, 50 };

    // 포인터 p를 선언하고 배열 numbers의 첫 번째 원소의 주소를 할당
    int* p = numbers;

    // 포인터를 사용하여 배열의 원소 출력
    printf("%d %d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3), *(p + 4));

    return 0;
}
