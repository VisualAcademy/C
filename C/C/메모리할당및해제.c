/*
    메모리를 1MByte 할당 후 해제
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main(void)
{
    // 참조형 포인터 선언
    char* pBuffer;

    // 메모리 할당 및 포인터 대입
    pBuffer = malloc(1048576);

    if (pBuffer)
    {
        // 할당된 메모리 비우기: NULL
        memset(pBuffer, 0, 1048576);

        // 문자열 복사
        strcpy(&pBuffer[0], "안녕하세요...");

        // 문자열 출력
        puts(&pBuffer[0]);

        // 메모리 해제
        free(pBuffer);
    }
}
