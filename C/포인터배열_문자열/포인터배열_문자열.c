/*
	�����͸� ����Ͽ� ���ڹ迭(���ڿ�)�� �����ϱ�
*/
#include <stdio.h>

void main(void)
{
	char c;
	char* p;

	c = 'A';
	p = "Hello World"; // "Hello\0"

	printf("%c\n", c);
	printf("%s\n", p);
}
