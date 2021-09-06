#include <stdio.h>

int main(void)
{
    //[1] 배열 선언
    int b[3]; // 배열
    int i = 0;// 변수
    //[2] 배열 초기화
    b[0] = 10;
    b[1] = 20;
    b[2] = 30;
    //[2] 변수 참조
    printf("%d\n", b[0]);
    printf("%d\n", b[1]);
    printf("%d\n", b[2]);
    //[3] 반복문을 사용해서 출력
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", b[i]);
    }
}
