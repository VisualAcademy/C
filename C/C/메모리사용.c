/*
	메모리를 100MB 할당하고 해제하기
	할당 : malloc()
	초기화 : memset()
	해제 : free()
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <math.h>

void main(void) {
	//포인터 선언
	char* pBuffer;
	//100MB 할당
	pBuffer = malloc(100 * pow(2, 20));
	if (pBuffer)
	{
		memset(pBuffer, 0, 100 * pow(2, 20));

		strcpy(&pBuffer[0], "안녕하세요...");
		puts(&pBuffer[0]);

		strcpy(&pBuffer[1000], "반갑습니다...");
		puts(&pBuffer[1000]);

		free(pBuffer);
	}
}
