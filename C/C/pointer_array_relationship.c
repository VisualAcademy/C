#include <stdio.h>

int main(void)
{
    //[1] 배열 선언
    int number[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    //[2] 3번째 인덱스부터 참조
    int* px = &number[3];

    //[3] *px == px[0] == *(px + 0)
    printf("*px: %d\n", px[0]); // 4

    //[4] *(px + 2) == px[2] : 2*4 크기만큼 주소 이동
    printf("*(px + 2): %d\n", *(px + 2)); // 6

    //[5] 4 출력 후 주소 1 증가
    printf("*px++: %d\n", *px++); // 4

    //[6] 4 위치에서 주소 1 증가 후 6 출력
    printf("*++px: %d\n", *++px); // 6

    //[7] {1, 3, 5, 7, 9, 8, 6, 4, 2, 0}     
    px = &number[3]; // 4 위치부터 다시

    //[8] px[2] == *(px + 2)
    printf("px[2]: %d\n", px[2]); // 6

    //[9] px[-2] == *(px - 2)
    printf("px[-2]: %d\n", px[-2]); // 2

    //[10] 3[px] == *(3 + px) == *(px + 3)
    printf("3[px]: %d\n", 3[px]); // 7

    return 0;
}

//*px: 4
//* (px + 2) : 6
//* px++ : 4
//* ++px : 6
//px[2] : 6
//px[-2] : 2
//3[px] : 7
