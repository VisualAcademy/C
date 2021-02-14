#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main()
{
	int r;
	char name[20];

	printf("이름: ");
	r = scanf("%[^\n]s", name);

	printf("\n이름: %s\n", name);
}
