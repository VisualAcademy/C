/*
	메모리 : 메모리 채우기
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[50] = "안녕하세요. 반갑습니다.";

	puts(string);

	memset(string, '*', sizeof(string) - 1);

	puts(string);

	return 0;
}
