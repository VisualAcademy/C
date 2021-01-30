// 화면으로부터 문자열을 입력받아서 출력하는 프로그램 : scanf() 대신에 gets() 함수 사용
#include <stdio.h>

void main(void)
{
	char str[100];

	printf("문자열을 입력하시오 : ");
	//scanf("%s", str);
	gets(str); // 한줄의 문자열을 읽어오는 함수

	printf("%s\n", str);
}
