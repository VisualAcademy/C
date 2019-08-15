#define _CRT_SECURE_NO_WARNINGS 
// 2개의 수를 입력한 후 그 중에서 큰 수를 출력하는 프로그램
#include <stdio.h>

void main(void)
{
	int first = 0, second = 0;
	printf("2개의 정수를 입력하세요. ___\b\b\b");
	scanf("%d %d", &first, &second);

	if (first >= second)
	{
		printf("큰값: %d\n", first);
	}
	else
	{
		printf("큰값: %d\n", second);
	}
}
