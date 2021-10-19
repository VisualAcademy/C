#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age = 0;

	// printf() 출력문
	printf("나이는? ");

	// scanf() 입력문
	scanf_s("%d", &age);

	printf("%d\n", age);
	system("pause");
	return 0;
}
