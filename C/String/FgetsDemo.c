#include <stdio.h>

int main(void)
{
	//[1] 문자열 저장 배열
	char s[80];

	//[2] 문자열 입력
	fgets(s, 80, stdin);

	//[3] 문자열 출력
	puts(s);

	return 0;
}
