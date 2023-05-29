#define _CRT_SECURE_NO_WARNINGS     // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h> // malloc, free 함수가 선언된 헤더 파일

// 공용체 정의
union Container
{
    short itemCount;
    float weight;
    int volume;
};

int main(void)
{
    union Container* c1 = malloc(sizeof(union Container)); // 공용체 포인터 선언, 메모리 할당

    printf("공용체의 전체 크기: %d바이트\n", sizeof(union Container)); // 8: 공용체의 전체 크기는 가장 큰 자료형의 크기

    c1->itemCount = 10;
    printf("itemCount의 값: %d\n", c1->itemCount); // itemCount의 값: 10

    c1->weight = 3.14f;
    printf("weight의 값: %.2f\n", c1->weight); // weight의 값: 3.14

    c1->volume = 100;
    printf("volume의 값: %d\n", c1->volume); // volume의 값: 100

    free(c1); // 동적 메모리 해제

    return 0;
}
