/*
	7.9. 예제. 포인터를 사용한 문자열 출력 : 포인터_문자배열.c
*/
#include <stdio.h>

int main(void)
{
	char* str; // 문자 포인터 선언
	str = "ABC"; // 문자 포인터에 문자열 대입 
	printf("%s\n", str); // 문자열 출력

	return 0; 
}
