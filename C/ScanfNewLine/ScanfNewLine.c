#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

void main()
{
	int r;
	char name[20];

	printf("이름: ");
	r = scanf("%[^\n]s", name);

	printf("\n이름: %s\n", name);
}
