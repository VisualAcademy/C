#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int f, s;
	char o;
	printf("������� �Է��ϼ���.");
	scanf("%d %c %d", &f, &o, &s);
	switch (o)
	{
	case '+':
		printf("%d + %d = %d\n", f, s, (f + s));
		break;
	case '-':
		printf("%d - %d = %d\n", f, s, (f - s));
		break;
	case '*':
		printf("%d * %d = %d\n", f, s, (f * s));
		break;
	case '/':
		printf("%d / %d = %d\n", f, s, (f / s));
		break;
	default:
		printf("+, -, *, /�� ��밡���մϴ�.");
		break;
	}
}
