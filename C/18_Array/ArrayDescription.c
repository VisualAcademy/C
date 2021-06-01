//[?] 1차원 배열 만들기
#include <stdio.h>

main()
{
    //[1] 배열 선언: 크기가 2인 배열 선언
    int numbers[2];

    //[2] 배열 초기화 
    numbers[0] = 3840;
    numbers[1] = 2160;

    //[3] 배열 사용
    printf("%d * %d\n", numbers[0], numbers[1]);
}
