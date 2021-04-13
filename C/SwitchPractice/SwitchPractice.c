#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int f, s;
	char o;
	printf("산술식을 입력하세요.");
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
		printf("+, -, *, /만 사용가능합니다.");
		break;
	}
}
