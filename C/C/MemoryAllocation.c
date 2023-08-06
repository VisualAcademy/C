// memory_allocation.c
// 동적 메모리 할당
#include <stdio.h>
#include <stdlib.h> // malloc 함수 사용을 위한 헤더 파일 추가 

int main(void)
{
    //[1] 포인터 변수 선언
    int* num;

    //[2] 메모리 할당
    num = (int*)malloc(sizeof(int)); // 반드시 sizeof 연산자로 크기 지정

    if (num) // 유효성 검사: NULL이 아니면 num 변수 사용
    {
        //[3] 할당된 공간에 값 대입
        *num = 1234;

        //[4] 포인터 변수의 값 참조
        printf("%d\n", *num); // 1234 

        //[5] 메모리 해제
        free(num);
    }

    return 0;
}
