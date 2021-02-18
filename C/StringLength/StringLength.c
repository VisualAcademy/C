//[?] 문자열의 길이: strlen()
#include <stdio.h>
#include <string.h>

void main()
{
	char s1[20] = "Hello."; // 6
	char* s2 = "안녕하세요."; // 11

	printf("%s -> %d\n", s1, strlen(s1));
	printf("%s -> %d\n", s2, strlen(s2));
}
