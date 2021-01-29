/*
	포인터를 사용하여 문자배열(문자열)을 저장하기
*/
#include <stdio.h>

void main(void)
{
	char c;
	char* p;

	c = 'A';
	p = "Hello World"; // "Hello\0"

	printf("%c\n", c);
	printf("%s\n", p);
}
