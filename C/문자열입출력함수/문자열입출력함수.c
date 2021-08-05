// 문자열 입출력함수
// gets() : 문자열 입력 + 엔터, scanf()
// puts() : 문자열 출력, printf()
#include <stdio.h>

void main(void)
{
	char strBuffer[100]; // 100자의 문자를 받을 수 있는 공간 마련

	printf("최대 100자의 문자열을 입력하시오...\n");
	gets(strBuffer); // 입력 대기 
	puts(strBuffer);

	printf("최대 100자의 문자열을 입력하시오...\n");
	gets(strBuffer);
	puts(strBuffer);
}
