// 함수_내장함수_데모_문자처리관련함수.c
#include <stdio.h>
#include <ctype.h> // 문자 처리 관련 함수

void main(void)
{
	// 원본 데이터 : 문자배열(문자열)
	char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

	// 첫번째(0) 문자 출력
	printf("%c\n", str[0]); // A
	// 문자열 출력
	printf("%s\n", str);	// A1b2c... : \0 => 종결문자열(문자열의 끝)

	// isalpha() 함수 : 알파벳이면 1(참)
	if (isalpha(str[0]))
	{
		printf("%c는 알파벳 문자\n", str[0]);
	}

	// isdigit() 함수 : 숫자이면 1(true)
	if (isdigit(str[1]))
	{
		printf("%c는 숫자\n", str[1]);
	}

	// isalnum() 함수 : 알파벳 또는 숫자이면 true
	if (isalnum(str[2]) && isalnum(str[3])) // b && 2
	{
		printf("%c와 %c는 알파벳 또는 숫자\n", str[2], str[3]);
	}

	// isupper() 함수 : 대문자이면 1
	if (isupper(str[0])) // A
	{
		printf("%c는 대문자\n", str[0]);
	}
	else
	{
		printf("%c는 소문자\n", str[0]);
	}

	// islower() 함수 : 소문자이면 1
	if (islower(str[2])) // b
	{
		printf("%c는 소문자\n", str[2]);
	}
	else
	{
		printf("%c는 대문자\n", str[2]);
	}

	// isspace() 함수 : 공백/탭/개행 문자이면 1
	if (isspace(str[5])) // 5번째 인덱스의 문자값이 공백이냐?
	{
		printf("%c는 공백/탭/개행\n", str[5]);
	}

	// 대문자로 변환
	printf("%c => %c\n", str[2], toupper(str[2]));
	// 소문자로 변환
	printf("%c => %c\n", str[0], tolower(str[0]));
}
