#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age = 0;

	// printf() ��¹�
	printf("���̴�? ");

	// scanf() �Է¹�
	scanf_s("%d", &age);

	printf("%d\n", age);
	system("pause");
	return 0;
}
