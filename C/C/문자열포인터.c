/*
	포인터변수 또는 문자배열에 문자열 저장
*/
#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 안전하지 않은 함수 경고를 무시하도록 함
#include <stdio.h>
#include <string.h>

void MyString(char string[]);

void main(void)
{
	char* str = "Hello World.";
	char array[100];

	printf("%s \n", str);//
	strcpy(array, str);
	printf("%s \n", strlen(str));
	MyString(str);
	MyString(array);
}

void MyString(char string[])
{
	printf("%s \n", string);
}