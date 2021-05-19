#include <stdio.h>

main()
{
    int i = 100;
    int j = 200;
    int temp;

    printf("처음: %d, %d\n", i, j); // 100, 200

    //[?] 변숫값 서로 바꾸기
    temp = i;   //[A] 임시 변수에 i 값 담기
    i = j;      //[B] i 값에 j 값으로 덮어쓰기
    j = temp;   //[C] j에 i 값이 담겨 있던 temp 값으로 덮어쓰기

    printf("변경: %d, %d\n", i, j); // 200, 100
}
