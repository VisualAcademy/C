/*
	�����͸� ����Ͽ� ���ڹ迭(���ڿ�)�� �����ϱ�
*/
#include <stdio.h>

int main(void)
{
	char c;
	char* p;

	c = 'A';
	p = "Hello World"; // "Hello World\0"

	printf("%c\n", c); // A
	printf("%s\n", p); // Hello World

	return 0;
}
