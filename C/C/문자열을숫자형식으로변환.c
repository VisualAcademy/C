/*
	���ڿ��� ������������ ��ȯ
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
	char str[] = "3.1415����6525";

	int i;
	long l;
	double d;

	i = atoi(str);
	l = atol(str);
	d = atof(str);

	printf("\na = %d, b = %ld, c = %lf", i, l, d);
	getch();
}
