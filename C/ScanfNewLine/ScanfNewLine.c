#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main()
{
	int r;
	char name[20];

	printf("�̸�: ");
	r = scanf("%[^\n]s", name);

	printf("\n�̸�: %s\n", name);
}
