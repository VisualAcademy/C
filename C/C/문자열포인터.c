/*
	�����ͺ��� �Ǵ� ���ڹ迭�� ���ڿ� ����
*/
#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� �������� ���� �Լ� ��� �����ϵ��� ��
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