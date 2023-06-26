#include <stdio.h>

int main(void)
{
    // [1] 배열 초기화
    int number[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // [2] 포인터 px를 배열의 3번째 인덱스로 설정
    int* px = &number[3];

    // [3] *px는 px[0] 또는 *(px + 0)과 동일
    printf("*px: %d\n", px[0]); // 출력: 4

    // [4] *(px + 2)는 px[2]와 동일하며, px로부터 2칸 뒤의 값을 의미
    printf("*(px + 2): %d\n", *(px + 2)); // 출력: 6

    // [5] *px의 값을 출력하고 px를 다음 메모리 위치로 증가
    printf("*px++: %d\n", *px++); // 출력: 4

    // [6] px를 증가시킨 후 *px의 값을 출력
    printf("*++px: %d\n", *++px); // 출력: 6

    // [7] 포인터를 다시 원래 위치로 초기화
    px = &number[3];

    // [8] px[2]는 *(px + 2)와 동일
    printf("px[2]: %d\n", px[2]); // 출력: 6

    // [9] px[-2]는 *(px - 2)와 동일하며, px로부터 2칸 앞의 값을 의미
    printf("px[-2]: %d\n", px[-2]); // 출력: 2

    // [10] 3[px]는 *(3 + px) 또는 *(px + 3)와 동일
    printf("3[px]: %d\n", 3[px]); // 출력: 7

    return 0;
}
