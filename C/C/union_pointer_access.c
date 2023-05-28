#define _CRT_SECURE_NO_WARNINGS     // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 선언된 헤더 파일

// 공용체 정의
union Box
{
    short candy;
    float snack;
    int num;
};

int main(void)
{
    union Box* b1 = malloc(sizeof(union Box)); // 공용체 포인터 선언, 메모리 할당

    printf("공용체의 전체 크기: %d바이트\n", sizeof(union Box)); // 8: 공용체의 전체 크기는 가장 큰 자료형의 크기

    b1->candy = 10;
    printf("candy의 값: %d\n", b1->candy); // candy의 값: 10

    b1->snack = 3.14f;
    printf("snack의 값: %.2f\n", b1->snack); // snack의 값: 3.14

    b1->num = 100;
    printf("num의 값: %d\n", b1->num); // num의 값: 100

    free(b1); // 동적 메모리 해제

    return 0;
}
