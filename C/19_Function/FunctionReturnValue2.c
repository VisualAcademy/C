// 반환값이 있는 함수
#include <stdio.h>

int SquareFunction(int x)   // 입력: 매개 변수도 있고 
{
    int r = x * x;          // 처리: 함수의 본문
    return r;               // 출력: 반환값도 있는 
}

int main()
{
    int r = SquareFunction(2); // 함수 호출 및 반환값 받기 
    printf("%d\n", r); // 4

    return 0;
}
