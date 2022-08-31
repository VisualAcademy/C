#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sprintf 함수 선언
#include <stdlib.h> // malloc, free 함수 선언

int main(void)
{
    char* buffer = malloc(sizeof(char) * 80); // 동적 메모리 할당으로 80자 생성 

    sprintf(buffer, "%c, %d, %f", 'A', 1234, 3.14);

    printf("%s\n", buffer); // A, 1234, 3.140000

    free(buffer); // 동적 메모리 해제

    return 0;
}
