/*
	포인터를 사용하여 문자배열(문자열)을 저장하기
*/
#include <stdio.h>

int main(void)
{
	char c;
	char* p;

	c = 'A';
	p = "Hello World"; // "Hello World\0"

	printf("%c\n", c); // A
	printf("%s\n", p); // Hello World

	return 0; 
}
