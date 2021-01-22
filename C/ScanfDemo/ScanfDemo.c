#define _CRT_SECURE_NO_WARNINGS

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
