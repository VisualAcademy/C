//[?] ���ڿ��� ����: strlen()
#include <stdio.h>
#include <string.h>

void main()
{
	char s1[20] = "Hello."; // 6
	char* s2 = "�ȳ��ϼ���."; // 11

	printf("%s -> %d\n", s1, strlen(s1));
	printf("%s -> %d\n", s2, strlen(s2));
}
