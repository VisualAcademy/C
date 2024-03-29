#include <stdio.h>

void main(void)
{
    //[1] 배열 선언
    int number[10] = { 1,2,3,4,5,6,7,8,9,10 };
    //[2] 3번째인덱스부터 참조
    int* px = &number[3];
    //[3] *px == *(px + 0) == px[0]
    printf("*px : %d\n", px[0]);//4
    //[4] *(px + 2) == px[2] : 2*4크기만큼주소이동
    printf("*(px + 2) : %d\n", *(px + 2));//6
    //[5] 4출력후 주소 1증가
    printf("*px++ : %d\n", *px++);//4
    //[6] 4위치에서 주소 1증가후 6출력
    printf("*++px : %d\n", *++px);//6
    //[7] {1,3,5,7,9,8,6,4,2,0}     
    px = &number[3];//7위치부터 다시
    //[8] px[2] == *(px + 2)
    printf("px[2] : %d\n", px[2]);//6
    //[9] px[-2] == *(px - 2)
    printf("px[-2] : %d\n", px[-2]); // 2
    //[10] 3[px] == *(3 + px) == *(px + 3)
    printf("3[px] : %d\n", 3[px]);//7
}