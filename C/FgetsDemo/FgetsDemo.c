#include <stdio.h>

main()
{
	//[1] ���ڿ� ���� �迭
	char s[80];

	//[2] ���ڿ� �Է�
	fgets(s, 80, stdin);
	
	//[3] ���ڿ� ���
	puts(s);
}
