/*
	�޸� : �޸� ä���
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[50] = "�ȳ��ϼ���. �ݰ����ϴ�.";

	puts(string);

	memset(string, '*', sizeof(string) - 1);

	puts(string);

	return 0;
}
