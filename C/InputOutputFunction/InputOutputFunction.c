#include <stdio.h>

main()
{
	char c;		// ����
	char s[80]; // ���ڿ�

	c = getchar(); // ���� �ϳ� �Է�
	printf("%c\n", c); getchar();

	gets(s);			// ���ڿ� �Է� 
	printf("%s\n", s);

	putchar('Z');	// ���� ���
	putchar('\n');
	puts("Hello");	// ���ڿ� ��� + �ٹٲ� ����
}
