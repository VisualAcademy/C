#include <stdio.h>

main()
{
	char c;		// 문자
	char s[80]; // 문자열

	c = getchar(); // 문자 하나 입력
	printf("%c\n", c); getchar();

	gets(s);			// 문자열 입력 
	printf("%s\n", s);

	putchar('Z');	// 문자 출력
	putchar('\n');
	puts("Hello");	// 문자열 출력 + 줄바꿈 포함
}
