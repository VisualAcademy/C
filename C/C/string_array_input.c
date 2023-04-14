#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
#define ARR_SIZE 3

    // 포인터 배열 선언
    char* a[ARR_SIZE];

    // 동적 메모리 할당
    for (int i = 0; i < ARR_SIZE; i++)
    {
        a[i] = (char*)malloc(100 * sizeof(char));
    }

    // 사용자 입력 받기
    for (int i = 0; i < ARR_SIZE; i++)
    {
        scanf("%s", a[i]);
    }

    // 배열 내용 출력
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%s\n", a[i]);
    }

    // 동적 메모리 해제
    for (int i = 0; i < ARR_SIZE; i++) {
        free(a[i]);
    }

    return 0;
}