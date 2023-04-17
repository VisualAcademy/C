#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //[1] Init
    char* p;

    char i = 0;
    // 포인터 변수 선언

    // 포인터 변수에 메모리 할당
    //p = (char *)malloc(sizeof(char) * 10);     // 1번 메모리 할당 방법
    p = (char*)calloc(5, sizeof(char));        // 2번 메모리 할당 방법
    p = (char*)realloc(p, 10 * sizeof(char));  // 메모리 재할당 방법

    // 초기화
    *(p + 0) = 'a';
    *(p + 1) = 'b';

    // 참조
    for (i = 0; i < 10; i++)
    {
        printf("%c \n", *(p + i));
    }

    // 포인터 해제
    free(p);

    return 0;
}
