/*
	��ũ�� �Լ� ����  : #, ##
*/
#include <stdio.h>

#define Print(a, b) printf("%s, %d\n", #a, a##b);

void main(void)
{
	int a = 3;
	int b = 5;
	int ab = 7;

	Print(a, b);
}